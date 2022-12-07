#include "main.h"
#include "led.h"
#include "delay.h"



int main(void)
{
	
	LED_init();
	int x;
	
	while(1)
		{
			for (int i = 8 ; i<=23 ; i++)
			{
				LED_All_Loop(i);
				delay_ms(1000);		
			}	
				
		}
					
	return 0;
}
