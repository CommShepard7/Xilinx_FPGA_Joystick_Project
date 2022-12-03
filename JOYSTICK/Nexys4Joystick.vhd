library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_unsigned.all;

entity Nexys4Joystick is
  port (
    -- les 16 switchs
    swt : in std_logic_vector (15 downto 0);
    -- les 5 boutons noirs
    btnC, btnU, btnL, btnR, btnD : in std_logic;
    -- horloge
    mclk : in std_logic;
    -- les 16 leds
    led : out std_logic_vector (15 downto 0);
    -- les anodes pour sélectionner les afficheurs 7 segments à utiliser
    an : out std_logic_vector (7 downto 0);
    -- valeur affichée sur les 7 segments (point décimal compris, segment 7)
    ssg : out std_logic_vector (7 downto 0);
    JA3 : in std_logic;
    JA1,JA2,JA4 : out std_logic  
    );

end Nexys4Joystick;

architecture synthesis of Nexys4Joystick is


  signal clk : std_logic;
  signal x_high,x_low,y_high,y_low : std_logic_vector (7 downto 0);
  signal btns_joystick : std_logic_vector (7 downto 0);
  signal busy : std_logic;
  signal nclk : std_logic;
  signal e0,e1,e2,e3,e4,e5,e6,e7 : std_logic_vector (3 downto 0);
	
  component MasterJoystick 
      port (
            rst : in std_logic;                               --reset                       
            clk : in std_logic;                               --clock
            en : in std_logic;                                --enable pour activer le composant
            btns_leds_joystick : in std_logic_vector (1 downto 0);            --utilisé pour commander les leds du joystick
            miso : in std_logic;                              --signal utilise par er_1octet pour la reception du signal de la part de slave
            ss   : out std_logic;                             --signal d'activation du slave
            sclk : out std_logic;                             --clock genere par er_1octet lors de l'echange d'octets
            mosi : out std_logic;                             --signal utilise par er_1octet pour l'envoi de v1 et v2 vers le slave
            x_high : out std_logic_vector (7 downto 0);       
            x_low : out std_logic_vector (7 downto 0);      
            y_high : out std_logic_vector (7 downto 0);
            y_low : out std_logic_vector (7 downto 0);
            btns_joystick : out std_logic_vector (7 downto 0);
            busy : out std_logic                              --signal d'activite
           );                            

   end component;

   component diviseurClk
      generic (facteur : natural);
      port(
          clk, reset : in  std_logic;
          nclk       : out std_logic
          );
   end component;
    
   component All7Segments 
   	
     port ( clk : in  std_logic;
           reset : in std_logic;
           e0 : in std_logic_vector (3 downto 0);
           e1 : in std_logic_vector (3 downto 0);
           e2 : in std_logic_vector (3 downto 0);
           e3 : in std_logic_vector (3 downto 0);
           e4 : in std_logic_vector (3 downto 0);
           e5 : in std_logic_vector (3 downto 0);
           e6 : in std_logic_vector (3 downto 0);
           e7 : in std_logic_vector (3 downto 0);
           an : out std_logic_vector (7 downto 0);
           ssg : out std_logic_vector (7 downto 0));
     end component;

begin

  -- valeurs des sorties (à modifier)

  -- convention afficheur 7 segments 0 => allumé, 1 => éteint
  --ssg <= (others => '1');
  -- aucun afficheur sélectionné
  --an(7 downto 0) <= (others => '1');
  -- 16 leds éteintes
  led(15 downto 3) <= (others => '0');
  led(2 downto 0) <= btns_joystick(2)&btns_joystick(1)&btns_joystick(0);

  divClk : diviseurClk 
      generic map (100)
      
      port map (
          clk => mclk,
          reset => not btnR,
          nclk => nclk
            );
    
  MJoystick : MasterJoystick
  
      port map ( 
            rst => not btnR,
            clk => nclk,
            en => not swt(0),
            btns_leds_joystick => (swt(15 downto 14) or (btnU&btnD)),
            miso => JA3,
            ss => JA1,
            sclk => JA4,
            mosi => JA2,
            x_high => x_high,
            x_low => x_low,
            y_high => y_high,
            y_low => y_low,
            btns_joystick => btns_joystick,
            busy => busy);
            

  All7seg : All7Segments 

    port map (
            clk => mclk,
            reset => not btnR,
            e0 => x_low(3 downto 0),
            e1 => x_low(7 downto 4),
            e2 => "00"&x_high(1 downto 0),
            e3 => "0000",
            e4 => y_low(3 downto 0),
            e5 => y_low(7 downto 4),
            e6 => "00"&y_high(1 downto 0),
            e7 => "0000",
            an => an,
            ssg => ssg
          );
                                        
    
end synthesis;
