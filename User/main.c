#include "main.h"
#include "led.h"



int main(void)
{
	
	LED_init();
	

	while(1)
		{
				GPIO_SetBits(GPIOE,GPIO_Pin_8);
				GPIO_ResetBits(GPIOE,GPIO_Pin_8);
		}

		
		
	return 0;


}
