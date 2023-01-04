#include "main.h"
#include "led.h"
#include "delay.h"
#include "usart.h"
#include "lcd.h"


int main(void)	
{
	LCD_Init();
	
	while (1)
		{
			LCD_BackLight_Enable;
		}
	return 0;
}
