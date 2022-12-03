library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity MasterOpl is

  generic(cpt_attente_init : natural := 10; cpt_attente_er : natural := 3; frame_size : natural := 3); --valeurs par defaut
                                                                                                       --possibilite d'extension de la duree d'attente initiale
                                                                                                       --ou entre les octets, possibilite d'augmenter la taille
                                                                                                       --de la trame en creant un type array of std_logic_vector   
                                                                                                       --et un process(v1,v2,clk) qui reagirait aux variatons de v1 ou v2
                                                                                                       --ce qui permettrait d'utiliser seulement deux signaux v1 et v2
                                                                                                       --pour creer un array d'octets lors de l'attente initiale 
  
  port ( rst : in std_logic;                               --reset                       
         clk : in std_logic;                               --clock
         en : in std_logic;                                --enable pour activer le composant
         v1 : in std_logic_vector (7 downto 0);            --premiere variable
         v2 : in std_logic_vector(7 downto 0);             --deuxieme variable
         miso : in std_logic;                              --signal utilise par er_1octet pour la reception du signal de la part de slave
         ss   : out std_logic;                             --signal d'activation du slave
         sclk : out std_logic;                             --clock genere par er_1octet lors de l'echange d'octets
         mosi : out std_logic;                             --signal utilise par er_1octet pour l'envoi de v1 et v2 vers le slave
         val_nand : out std_logic_vector (7 downto 0);     --v1 nand v2 envoye par le slave
         val_nor : out std_logic_vector (7 downto 0);      --v1 nor v2 envoye par le slave
         val_xor : out std_logic_vector (7 downto 0);      --v1 xor v2 envoye par le slave
         busy : out std_logic);                            --signal d'activite
         
end MasterOpl;

architecture behavioral of MasterOpl is

component er_1octet 
  port ( rst : in std_logic ;			                         --reset 
    clk : in std_logic ;				                           --clock
    en : in std_logic ;				                             --enable
    din : in std_logic_vector (7 downto 0) ;	             --octet a envoyer, dans ce cas v1 et v2
    miso: in std_logic;				                             --signal envoi du bit du slave vers le master 
    sclk : out std_logic ;			                           --clock interne du composant actif lors de l'envoi/reception
    mosi: out std_logic  ;			                           --signal envoi du bit du master vers le slave 
    dout : out std_logic_vector (7 downto 0) ;	           --octet recu, dans ce cas v1 nand v2, v1 nor v2, v1 xor v2  
    busy : out std_logic);			                           --signal d'activite
  end component;	


type t_etat is (idle,attente, er);                         --differents etats du composant
signal etat : t_etat;
signal busy_er_octet : std_logic;                          
signal en_er : std_logic;                                  --signaux internes du circuit pour er_1octet
signal din,dout : std_logic_vector (7 downto 0);
--type t_val_out is array (0 to frame_size) of std_logic_vector(7 downto 0);

begin

  er_octet : er_1octet port map (rst => rst,                  --integration de er_octet dans le circuit avec
                                 clk => clk,
                                 en => en_er,
                                 din => din ,
                                 miso => miso,                --branchement de signaux
                                 sclk => sclk,
                                 mosi => mosi,
                                 dout => dout,
                                 busy => busy_er_octet);
  	  	            	    
	process(clk,rst)                                            --process synchrone

	    variable registre_v1 : std_logic_vector (7 downto 0);   --registres pour stocker v1 et v2
	    variable registre_v2 : std_logic_vector (7 downto 0);
	    variable cpt_octet : natural;             --numero d'octet envoye/recu
	    variable cpt_attente : natural;                         --compteur pour l'attente initiale/entre octets
	    variable attente_er : std_logic;                        --variable pour differencier l'attente initiale/entre octets dans l'etat attente
	    variable fin_transmission : std_logic;
 		
	begin	

        if(rst = '0') then                                    --reset du circuit
		
          val_nand <= (others => '0');
          val_xor <= (others => '0');
          val_nor <= (others => '0');
          busy <= '0';
          ss <= '1';                                          --ss = 1 lors du repos selon le protocole d'echange
	        etat <= idle;
          
      
        elsif(rising_edge(clk)) then

         case etat is 

            when idle =>                                      --repos du circuit

              if(en = '1') then                               --le circuit sort du repos s'il est active

                ss <= '0';                                    --ss = 0 lors de l'echange avec le slave
                busy <= '1';                                  
                registre_v1 := v1;
                registre_v2 := v2;               
                cpt_attente := 1;
                cpt_octet := 1;              
                attente_er := '0';                            --permet de passer a l'attente initiale
                etat <= attente;
               
              end if;
            
            when attente =>
                      
                if(attente_er = '0') then                          
                
                   if (cpt_attente < cpt_attente_init - 1) then   --cpt_attente_init - 1 car il se passe des cycles d'horloge supplementaires 
                                                                  --lors des transitions d'etat et l'activation de er_1octet               
                    cpt_attente := cpt_attente + 1;

                    else

                    cpt_attente := 1;
                    din <= registre_v1;                           --activation de er_1octet et debut de l'echange
                    en_er <= '1';   
                    etat <= er;
                    
                  end if;
                
                else                                              --attente_er = '1', attente entre octets

                    if (cpt_attente < cpt_attente_er - 1 and fin_transmission = '0') then    
                    
                      cpt_attente := cpt_attente + 1;
                    
                    else 
                      
                      cpt_attente := 1;   
                      
            case (cpt_octet) is 

              when 2 => 

                      din <= registre_v2;
                      en_er <= '1';                                                           --reactivation de er_1octet pour l'echange d'un nouvel octet
                      etat <= er;

              when 3 =>

                      din <= (others => '0');
                      en_er <= '1';
                      etat <= er;                                                             --permet de terminer la transmission apres le dernier octet

             when others =>
             
                null;
	             
            end case;

                    end if;
                       	       
                end if;

            when er =>

                if (busy_er_octet = '1' and en_er = '1') then       --permet de compenser le decalage du signal busy de er_1octet
                	  
                     en_er <= '0';                                  --desactiver er_1octet pour permettre au circuit d'attendre apres la transmission d'un octet
                                   
                elsif (busy_er_octet = '0' and en_er = '0') then
                               	    	
                        case (cpt_octet) is                         --differencier les valeurs recus de la part du slave et les octets a transmettre 
                                                                    --attente apres transmission des octets
                            when 1 =>
                            	  	
                                val_nand <= dout; 
                                attente_er := '1';
                                cpt_octet := cpt_octet + 1;
                                etat <= attente;

                            when 2 =>
				
                                val_nor <= dout;
                                attente_er := '1';
                                cpt_octet := cpt_octet + 1;
                                etat <= attente;
                            
                            when 3 =>
				
                                val_xor <= dout;
                                attente_er := '1';
                                ss <= '1';                                         --permet de terminer la transmission apres le dernier octet
                                busy <= '0';
                                en_er <= '0';	                                      --continuer la transmission
                                etat <= idle;
                                                          
                            when others =>
                            
                                null;                                    --permet de terminer la transmission apres le dernier octet

                                	                                      --continuer la transmission                 
                        end case;
                            
                 end if;
                
            end case;
          
          end if;
       
       end process;
    					
		
end behavioral;
