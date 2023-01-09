#include "lcd.h"
#include "stm32f30x.h"

// Pin define on stm32f3 discovery and NT35510 module


// CS -> PF10 
// RS -> PF9
// WR -> PF1
// RD -> PF0
// RST -> PC15

// D0 -> PC14
// D1 -> PC13
// D2 -> PE6
// D3 -> PE4
// D4 -> PE5

// D5 -> PE14
// D6 -> PE15
// D7 -> PB10
// D8 -> PB11
// D9 -> PB12
// D10 -> PB13
// D11 -> PB15
// D12 -> PB14
// D13 -> PB10
// D14 -> PD8
// D15 -> PC1

// BL -> PC9


void LCD_Init()
{	
	
	GPIO_InitTypeDef GPIO_InitStructure ;
	RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOB,ENABLE);
	RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOC,ENABLE);
	RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOD,ENABLE);
	RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOE,ENABLE);
	RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOF,ENABLE);
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_OUT;
	
	// Init Switch Pin
	// Init Cs
	GPIO_InitStructure.GPIO_Pin = LCD_CS_Pin ;
	GPIO_Init(LCD_CS_Port,&GPIO_InitStructure);
	// Init Rs
	GPIO_InitStructure.GPIO_Pin = LCD_RS_Pin ;
	GPIO_Init(LCD_RS_Port,&GPIO_InitStructure);
	// Init WR
	GPIO_InitStructure.GPIO_Pin = LCD_Write_Pin ;
	GPIO_Init(LCD_Write_Port,&GPIO_InitStructure);
	// Init RD
	GPIO_InitStructure.GPIO_Pin = LCD_Read_Pin	;
	GPIO_Init(LCD_Read_Port,&GPIO_InitStructure);
	
	// Init Data Pin
	GPIO_InitStructure.GPIO_Pin = LCD_Data0_Pin ;
	GPIO_Init(LCD_Data0_Port,&GPIO_InitStructure);
	GPIO_InitStructure.GPIO_Pin = LCD_Data1_Pin ;
	GPIO_Init(LCD_Data1_Port,&GPIO_InitStructure);
	GPIO_InitStructure.GPIO_Pin = LCD_Data2_Pin ;
	GPIO_Init(LCD_Data2_Port,&GPIO_InitStructure);
	GPIO_InitStructure.GPIO_Pin = LCD_Data3_Pin ;
	GPIO_Init(LCD_Data3_Port,&GPIO_InitStructure);
	GPIO_InitStructure.GPIO_Pin = LCD_Data4_Pin ;
	GPIO_Init(LCD_Data4_Port,&GPIO_InitStructure);
	GPIO_InitStructure.GPIO_Pin = LCD_Data5_Pin ;
	GPIO_Init(LCD_Data5_Port,&GPIO_InitStructure);
	GPIO_InitStructure.GPIO_Pin = LCD_Data6_Pin ;
	GPIO_Init(LCD_Data6_Port,&GPIO_InitStructure);
	GPIO_InitStructure.GPIO_Pin = LCD_Data7_Pin ;
	GPIO_Init(LCD_Data7_Port,&GPIO_InitStructure);
	GPIO_InitStructure.GPIO_Pin = LCD_Data8_Pin ;
	GPIO_Init(LCD_Data8_Port,&GPIO_InitStructure);
	GPIO_InitStructure.GPIO_Pin = LCD_Data9_Pin ;
	GPIO_Init(LCD_Data9_Port,&GPIO_InitStructure);
	GPIO_InitStructure.GPIO_Pin = LCD_Data10_Pin ;
	GPIO_Init(LCD_Data10_Port,&GPIO_InitStructure);
	GPIO_InitStructure.GPIO_Pin = LCD_Data11_Pin ;
	GPIO_Init(LCD_Data11_Port,&GPIO_InitStructure);
	GPIO_InitStructure.GPIO_Pin = LCD_Data12_Pin ;
	GPIO_Init(LCD_Data12_Port,&GPIO_InitStructure);
	GPIO_InitStructure.GPIO_Pin = LCD_Data13_Pin ;
	GPIO_Init(LCD_Data13_Port,&GPIO_InitStructure);
	GPIO_InitStructure.GPIO_Pin = LCD_Data14_Pin ;
	GPIO_Init(LCD_Data14_Port,&GPIO_InitStructure);
	GPIO_InitStructure.GPIO_Pin = LCD_Data15_Pin ;
	GPIO_Init(LCD_Data15_Port,&GPIO_InitStructure);
	
	// Init BL
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9 ;
	GPIO_Init(GPIOC,&GPIO_InitStructure);
	
	
	
	
}



// there are 16 data pin to be transmited 
void Parallel_Write (u16 data) 
{
		// bit0
		if ((data & 0x80) == 0x80) GPIO_SetBits(LCD_Data0_Port,LCD_Data0_Pin);    
		else GPIO_ResetBits(LCD_Data0_Port,LCD_Data0_Pin);
		// bit1
		if ((data<<1 & 0x80) == 0x80) GPIO_SetBits(LCD_Data1_Port,LCD_Data1_Pin); 
		else GPIO_ResetBits(LCD_Data1_Port,LCD_Data1_Pin);
		// bit2
		if ((data<<2 & 0x80) == 0x80) GPIO_SetBits(LCD_Data2_Port,LCD_Data2_Pin);
		else GPIO_ResetBits(LCD_Data2_Port,LCD_Data2_Pin);
    // bit3	
		if ((data<<3 & 0x80) == 0x80) GPIO_SetBits(LCD_Data3_Port,LCD_Data3_Pin);
		else GPIO_ResetBits(LCD_Data3_Port,LCD_Data3_Pin);
		// bit4	
		if ((data<<4 & 0x80) == 0x80) GPIO_SetBits(LCD_Data4_Port,LCD_Data4_Pin); 
		else GPIO_ResetBits(LCD_Data4_Port,LCD_Data4_Pin);
		// bit5	
		if ((data<<5 & 0x80) == 0x80) GPIO_SetBits(LCD_Data5_Port,LCD_Data5_Pin); 
		else GPIO_ResetBits(LCD_Data5_Port,LCD_Data5_Pin);
		// bit6	
		if ((data<<6 & 0x80) == 0x80) GPIO_SetBits(LCD_Data6_Port,LCD_Data6_Pin); 
		else GPIO_ResetBits(LCD_Data6_Port,LCD_Data6_Pin);
		// bit7	
		if ((data<<7 & 0x80) == 0x80) GPIO_SetBits(LCD_Data7_Port,LCD_Data7_Pin); 
		else GPIO_ResetBits(LCD_Data7_Port,LCD_Data7_Pin);
		// bit8	
		if ((data<<8 & 0x80) == 0x80) GPIO_SetBits(LCD_Data8_Port,LCD_Data8_Pin); 
		else GPIO_ResetBits(LCD_Data8_Port,LCD_Data8_Pin);
		// bit9	
		if ((data<<9 & 0x80) == 0x80) GPIO_SetBits(LCD_Data9_Port,LCD_Data9_Pin); 
		else GPIO_ResetBits(LCD_Data9_Port,LCD_Data9_Pin);
		// bit10	
		if ((data<<10 & 0x80) == 0x80) GPIO_SetBits(LCD_Data10_Port,LCD_Data10_Pin); 
		else GPIO_ResetBits(LCD_Data10_Port,LCD_Data10_Pin);
		// bit11	
		if ((data<<11 & 0x80) == 0x80) GPIO_SetBits(LCD_Data11_Port,LCD_Data11_Pin); 
		else GPIO_ResetBits(LCD_Data11_Port,LCD_Data11_Pin);
		// bit12	
		if ((data<<12 & 0x80) == 0x80) GPIO_SetBits(LCD_Data12_Port,LCD_Data12_Pin); 
		else GPIO_ResetBits(LCD_Data12_Port,LCD_Data12_Pin);
		// bit13	
		if ((data<<13 & 0x80) == 0x80) GPIO_SetBits(LCD_Data13_Port,LCD_Data13_Pin); 
		else GPIO_ResetBits(LCD_Data13_Port,LCD_Data13_Pin);
		// bit14	
		if ((data<<14 & 0x80) == 0x80) GPIO_SetBits(LCD_Data14_Port,LCD_Data14_Pin); 
		else GPIO_ResetBits(LCD_Data11_Port,LCD_Data14_Pin);
		// bit15	
		if ((data<<15 & 0x80) == 0x80) GPIO_SetBits(LCD_Data15_Port,LCD_Data15_Pin); 
		else GPIO_ResetBits(LCD_Data15_Port,LCD_Data15_Pin);
}



void LCD_Write(u16 input)
{
	LCD_CS_Enable;
	

}



