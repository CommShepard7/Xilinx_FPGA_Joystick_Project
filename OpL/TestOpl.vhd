library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity TestOpl is
  end TestOpl;

architecture behavior of TestOpl is

    component MasterOpl is
        port ( rst : in std_logic;
               clk : in std_logic;
               en : in std_logic;
               v1 : in std_logic_vector (7 downto 0);
               v2 : in std_logic_vector(7 downto 0);
               miso : in std_logic;
               ss   : out std_logic;
               sclk : out std_logic;
               mosi : out std_logic;
               val_nand : out std_logic_vector (7 downto 0);
               val_nor : out std_logic_vector (7 downto 0);
               val_xor : out std_logic_vector (7 downto 0);
               busy : out std_logic);
               
      end component;

    component SlaveOpl is
        port(
          sclk : in  std_logic;
          mosi : in  std_logic;
          miso : out std_logic;
          ss   : in  std_logic
        );
    end component;


  --Inputs/Outputs
  signal clk : std_logic := '0';
  signal rst : std_logic := '0';
  signal en : std_logic := '0';
  signal v1 : std_logic_vector (7 downto 0) := (others => '0');
  signal v2 : std_logic_vector(7 downto 0) := (others => '0');
  signal miso : std_logic;
  signal ss : std_logic := '0';
  signal mosi : std_logic;
  signal busy : std_logic := '0';
  signal sclk : std_logic;
  signal val_nand : std_logic_vector (7 downto 0) := (others => '0');
  signal val_nor : std_logic_vector (7 downto 0) := (others => '0');
  signal val_xor : std_logic_vector (7 downto 0) := (others => '0');
  

  --References
  --signal busy_ref : std_logic := '0'; 
  --signal ss_ref : std_logic := '0';
  --signal val_nand_ref : std_logic_vector(7 downto 0):= (others => '0');
  --signal val_nor_ref : std_logic_vector(7 downto 0) := (others => '0');
  --signal val_xor_ref : std_logic_vector(7 downto 0):= (others => '0');
  
  -- Clock period definitions
  constant clk_period : time := 10 ns;

begin

  m : MasterOpl
  port map ( rst => rst,
             clk => clk,
             en => en,
             v1 => v1,
             v2 => v2,
             miso => miso,
             ss => ss,
             sclk => sclk,
             mosi => mosi,
             val_nand => val_nand,
             val_xor => val_xor,
             val_nor => val_nor,
             busy => busy
           );
    
    s : SlaveOpl
    port map ( sclk => sclk,
               mosi => mosi,
               miso => miso,
               ss => ss
            );

  clk_process : process
  begin
    clk <= '0';
    
    wait for clk_period/2;
    clk <= '1';
   
    wait for clk_period/2;
  end process;


  -- Stimulus process
  stim_proc: process
  begin                
    -- hold reset state for 100 ns.
    
    wait for 10*clk_period;  
    
	rst <= '1';

	--insert stimulus here
	    
	v1 <= "11111111";
	v2 <= "11000000";
	    
	en <= '1';
    
    wait for clk_period;
    
    	en <= '0';
    
    wait for 100*clk_period;
    
        v1 <= "00000001";
        v2 <= "00000011";

    wait for clk_period;
    
        en <= '1';
    
    wait for clk_period;
    
        en <= '0';
    
    wait for 100*clk_period;
    
       v1 <= "10110101";
       v2 <= "11010110";
    
    wait for clk_period;
    
       en <= '1';
    
    wait for clk_period;
    
       en <= '0';
  
    wait;
  end process;
  
  --busy_ref <= '0' after 0 ns,
  	      --'1' after 10.5*clk_period,
  	      --'0' after 75.5*clk_period,
  	      --'1' after 112.5*clk_period,
  	      --'0' after 177.5*clk_period,
  	      --'1' after 214.5*clk_period,
  	      --'0' after 279.5*clk_period;
  	      
  --ss_ref <= not busy_ref;
  
  --val_nand_ref <= "00110011" after 36.5*clk_period,
  		 --"00111111" after 138.5*clk_period,
  		 --"11111110" after 240.5*clk_period;
  
  --val_nor_ref <= "11001100" after 55.5*clk_period,
  		 --"00000000" after 157.5*clk_period,
  		 --"11111100" after 259.5*clk_period;
 
  --val_xor_ref <= "10100000" after 74.5*clk_period,
  		 --"00111111" after 176.5*clk_period,
  		 --"00000010" after 278.5*clk_period;
  
  

   
  --process(clk)
  --begin
    --if(falling_edge(clk)) then
      --assert(busy = busy_ref) report "busy faux"
      --severity error;
      --assert(ss = ss_ref) report "ss faux"
      --severity error;
      --assert(val_nand = val_nand_ref) report "val_nand faux"
      --severity error;
      --assert(val_nor = val_nor_ref) report "val_nor faux"
      --severity error;
      --assert(val_xor = val_xor_ref) report "val_xor faux"
      --severity error;
    --end if;
  --end process;

end behavior;
