#include "main.h"
#include "led.h"



int main(void)
{
	
	LED_init();
	

	while(1)
		{
				GPIO_SetBits(GPIOE,GPIO_Pin_8);
				GPIO_SetBits(GPIOE,GPIO_Pin_9);
				GPIO_SetBits(GPIOE,GPIO_Pin_10);
				GPIO_SetBits(GPIOE,GPIO_Pin_11);
				GPIO_SetBits(GPIOE,GPIO_Pin_12);
				GPIO_SetBits(GPIOE,GPIO_Pin_13);
				GPIO_SetBits(GPIOE,GPIO_Pin_14);
				GPIO_SetBits(GPIOE,GPIO_Pin_15);
		}

		
		
	return 0;


}
