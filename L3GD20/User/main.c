#include "main.h"
#include "led.h"
#include "delay.h"
#include "usart.h"
#include "spi.h"


int main(void)	
{
	Spi_Init();
	Usart_Init();
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);  // set nvic group 2
	
	
	//writeData(0x20, 0x0F);
	
	while (1)
		{
		
			u8 address = 0x0F;
			//u8 address = 0x28;
			address |= 0x80;
			u8 ID = Read_Data(address);
			
			USART3_printf(ID);
			
			Delay_ms(10);
			

		}
	return 0;
}
