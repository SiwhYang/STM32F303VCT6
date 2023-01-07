#include "lcd.h"
#include "stm32f30x.h"


void LCD_Init()
{	
	GPIO_InitTypeDef GPIO_InitStructure ;
	RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOC,ENABLE);
	GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_OUT;
	
	//BL
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9 ;
	GPIO_Init(GPIOC,&GPIO_InitStructure);
	
	
	
	
}



// there are 16 data pin to be transmited 
void LCD_Parallel_Write (u16 data) 
{
		// bit0
		if (data & 0x80) GPIO_SetBits(GPIOA,GPIO_Pin_9);    
		else GPIO_ResetBits(GPIOA,GPIO_Pin_9);
		// bit1
		if (data<<1 & 0x80) GPIO_SetBits(GPIOA,GPIO_Pin_9); 
		else GPIO_ResetBits(GPIOA,GPIO_Pin_9);
		// bit2
		if (data<<2 & 0x80) GPIO_SetBits(GPIOA,GPIO_Pin_9);
		else GPIO_ResetBits(GPIOA,GPIO_Pin_9);
    // bit3	
		if (data<<3 & 0x80) GPIO_SetBits(GPIOA,GPIO_Pin_9);
		else GPIO_ResetBits(GPIOA,GPIO_Pin_9);
		// bit4	
		if (data<<4 & 0x80) GPIO_SetBits(GPIOA,GPIO_Pin_9); 
		else GPIO_ResetBits(GPIOA,GPIO_Pin_9);
		// bit5	
		if (data<<5 & 0x80) GPIO_SetBits(GPIOA,GPIO_Pin_9); 
		else GPIO_ResetBits(GPIOA,GPIO_Pin_9);
		// bit6	
		if (data<<6 & 0x80) GPIO_SetBits(GPIOA,GPIO_Pin_9); 
		else GPIO_ResetBits(GPIOA,GPIO_Pin_9);
		// bit7	
		if (data<<7 & 0x80) GPIO_SetBits(GPIOA,GPIO_Pin_9); 
		else GPIO_ResetBits(GPIOA,GPIO_Pin_9);
		// bit8	
		if (data<<8 & 0x80) GPIO_SetBits(GPIOA,GPIO_Pin_9); 
		else GPIO_ResetBits(GPIOA,GPIO_Pin_9);
		// bit9	
		if (data<<9 & 0x80) GPIO_SetBits(GPIOA,GPIO_Pin_9); 
		else GPIO_ResetBits(GPIOA,GPIO_Pin_9);
		// bit10	
		if (data<<10 & 0x80) GPIO_SetBits(GPIOA,GPIO_Pin_9); 
		else GPIO_ResetBits(GPIOA,GPIO_Pin_9);
		// bit11	
		if (data<<11 & 0x80) GPIO_SetBits(GPIOA,GPIO_Pin_9); 
		else GPIO_ResetBits(GPIOA,GPIO_Pin_9);
		// bit12	
		if (data<<12 & 0x80) GPIO_SetBits(GPIOA,GPIO_Pin_9); 
		else GPIO_ResetBits(GPIOA,GPIO_Pin_9);
		// bit13	
		if (data<<13 & 0x80) GPIO_SetBits(GPIOA,GPIO_Pin_9); 
		else GPIO_ResetBits(GPIOA,GPIO_Pin_9);
		// bit14	
		if (data<<13 & 0x80) GPIO_SetBits(GPIOA,GPIO_Pin_9); 
		else GPIO_ResetBits(GPIOA,GPIO_Pin_9);
		// bit15	
		if (data<<15 & 0x80) GPIO_SetBits(GPIOA,GPIO_Pin_9); 
		else GPIO_ResetBits(GPIOA,GPIO_Pin_9);
}







