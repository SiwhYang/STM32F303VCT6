#include "led.h"
#include "stm32f30x.h"

void LED_init()
{

GPIO_InitTypeDef GPIO_InitStructure;
RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOE,ENABLE);
GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_OUT;
GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;
GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
GPIO_Init(GPIOE,&GPIO_InitStructure);


GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9;
GPIO_Init(GPIOE,&GPIO_InitStructure);
	
GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10;
GPIO_Init(GPIOE,&GPIO_InitStructure);
	
GPIO_InitStructure.GPIO_Pin = GPIO_Pin_11;
GPIO_Init(GPIOE,&GPIO_InitStructure);
	
GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12;
GPIO_Init(GPIOE,&GPIO_InitStructure);

GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;
GPIO_Init(GPIOE,&GPIO_InitStructure);

GPIO_InitStructure.GPIO_Pin = GPIO_Pin_14;
GPIO_Init(GPIOE,&GPIO_InitStructure);

GPIO_InitStructure.GPIO_Pin = GPIO_Pin_15;
GPIO_Init(GPIOE,&GPIO_InitStructure);
}