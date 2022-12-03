library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity er_1octet is
  port ( rst : in std_logic ;				--signal du reset 
         clk : in std_logic ;				--clock du circuit
         en : in std_logic ;				--signal du enable, pour activer l'envoi/reception
         din : in std_logic_vector (7 downto 0) ;	--octet recu
         miso : in std_logic ;				--signal envoi du bit du slave vers le master 
         sclk : out std_logic ;				--clock interne du composant actif lors de l'envoi/reception
         mosi : out std_logic ;				--signal envoi du bit du master vers le slave 
         dout : out std_logic_vector (7 downto 0) ;	--octet a envoyer
         busy : out std_logic);				--signal d'activite
end er_1octet;	

architecture behavioral_3 of er_1octet is

type t_etat is (idle, envoi_data, reception_data);	--les etats de l'automate 
signal etat : t_etat;					--etat en cours

begin
 

  process(clk, rst)
  
  variable cpt_bit : natural;				--compteur d'envoi/reception pour l'emplacement du bit dans le registre
  variable registre : std_logic_vector(7 downto 0);	--registre qui permet de stocker l'octet a envoyer et celui recu 
 
   
  begin

	

    if(rst = '0') then 					--en faisant un reset, le registre est nettoye et le circuit passe en attente 

      cpt_bit := 7;			

      registre := (others => 'U');
		
		dout <= (others => '0');
		
		mosi <= '0';
		
		sclk <= '1';
		
		busy <= '0';
		
      etat <= idle;					
		
     elsif(rising_edge(clk)) then

      case etat is

        when idle =>					--si le composant est actif, on passe aux etats envoi/reception
        
          if(en = '1') then			 	
          
            busy <= '1';
				
				sclk <= '0';		
				
				cpt_bit := 7;
				
            registre := din;

            mosi <= registre(cpt_bit);			--le circuit envoi le premir bit lors de la transition d'etats pour augmenter l'efficacite
			
            etat <= reception_data;			

          else
           
				null;
				
          end if;
          
        when envoi_data =>
      
				mosi <= registre(cpt_bit);	
				
				sclk <= '0';			
	     
				etat <= reception_data;
	    		
        when reception_data =>
           
			  if (cpt_bit > 0) then 				--a la fin de l'envoi/reception, le circuit passe en attente
				
				 registre(cpt_bit) := miso;
					
				 cpt_bit := cpt_bit - 1;
				
				 sclk <= '1';				--le circuit envoi un bit du registre et le remplace par le bit recu pour l'efficacite de la memoire
						
				 
					
				 etat <= envoi_data;
							
				else 
					
					registre(cpt_bit) := miso;
				
					dout <= registre;
					
					sclk <= '1';
					
					busy <= '0';
					
				   etat <= idle;
				
				end if;	
      
		end case;
    
	 end if;
  
  end process;

end behavioral_3;
