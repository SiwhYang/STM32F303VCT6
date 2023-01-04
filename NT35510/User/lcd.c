#include "lcd.h"
#include "stm32f30x.h"


void LCD_Init()
{	
	//init PA
	GPIO_InitTypeDef GPIO_InitStructure ;
	
	//BL
	RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOC,ENABLE);
	GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_OUT;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9 ;
	GPIO_Init(GPIOC,&GPIO_InitStructure);
	
	// init PE
	
}





