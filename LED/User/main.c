#include "main.h"
#include "led.h"



int main(void)
{
	
	LED_init();
	int x;
	
	while(1)
		{
			for (int i = 8 ; i<=23 ; i++)
			{
				LED_All_Loop(i);
				delay_test_ms(1000000);
				
			
			}
				
		//LED_All_TurnOn();
		//delay_test_ms(1000000);		
				
		}
					
	return 0;
}
