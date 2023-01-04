#ifndef __LCD_H__
#define __LCD_H__
#include "stm32f30x.h"


#define LCD_BackLight_Enable     GPIO_SetBits(GPIOC,GPIO_Pin_9)
#define LCD_BackLight_Disable    GPIO_ResetBits(GPIOC,GPIO_Pin_9)

void LCD_Init();





#endif
