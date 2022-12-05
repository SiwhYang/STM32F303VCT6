#include "led.h"
#include "stm32f30x.h"

void LED_init()
{

GPIO_InitTypeDef GPIO_InitStructure;
RCC_APB2PeriphClockCmd (RCC_AHBPeriph_GPIOE,ENABLE);
GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_OUT;
GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;
GPIO_InitStructure.GPIO_Speed = GPIO_Speed_Level_3;
	
GPIO_Init(GPIOE,&GPIO_InitStructure);
GPIO_SetBits(GPIOE,GPIO_Pin_8);
	

}