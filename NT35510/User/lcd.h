#ifndef __LCD_H__
#define __LCD_H__
#include "stm32f30x.h"


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

/*
#define LCD_RCC_Periph_GPIO_B
#define LCD_RCC_Periph_GPIO_C 
#define LCD_RCC_Periph_GPIO_D
#define LCD_RCC_Periph_GPIO_E 
#define LCD_RCC_Periph_GPIO_F 
*/

// LCD Data Pin
#define LCD_Data0_Port  GPIOC
#define LCD_Data0_Pin   GPIO_Pin_14
#define LCD_Data1_Port  GPIOC
#define LCD_Data1_Pin   GPIO_Pin_13
#define LCD_Data2_Port  GPIOE
#define LCD_Data2_Pin   GPIO_Pin_6
#define LCD_Data3_Port  GPIOE
#define LCD_Data3_Pin   GPIO_Pin_4
#define LCD_Data4_Port  GPIOE
#define LCD_Data4_Pin   GPIO_Pin_5
#define LCD_Data5_Port  GPIOE
#define LCD_Data5_Pin   GPIO_Pin_14
#define LCD_Data6_Port  GPIOE
#define LCD_Data6_Pin   GPIO_Pin_15
#define LCD_Data7_Port  GPIOB
#define LCD_Data7_Pin   GPIO_Pin_10
#define LCD_Data8_Port  GPIOB
#define LCD_Data8_Pin   GPIO_Pin_11
#define LCD_Data9_Port  GPIOB
#define LCD_Data9_Pin   GPIO_Pin_12
#define LCD_Data10_Port GPIOB
#define LCD_Data10_Pin  GPIO_Pin_13
#define LCD_Data11_Port GPIOB
#define LCD_Data11_Pin  GPIO_Pin_15
#define LCD_Data12_Port GPIOB
#define LCD_Data12_Pin  GPIO_Pin_14
#define LCD_Data13_Port GPIOB
#define LCD_Data13_Pin  GPIO_Pin_10
#define LCD_Data14_Port GPIOD
#define LCD_Data14_Pin  GPIO_Pin_8
#define LCD_Data15_Port GPIOC
#define LCD_Data15_Pin  GPIO_Pin_1

// LCD BackLight port
#define LCD_BackLight_Port GPIOC
#define LCD_BackLight_Pin GPIO_Pin_9


// LCD Chip select
#define LCD_CS_Port GPIOF
#define LCD_CS_Pin  GPIO_Pin_10
// LCD Command or Data port
#define LCD_RS_Port GPIOF
#define LCD_RS_Pin  GPIO_Pin_9
// LCD Read port
#define LCD_Read_Port GPIOF
#define LCD_Read_Pin  GPIO_Pin_0
// LCD Write port
#define LCD_Write_Port GPIOF
#define LCD_Write_Pin  GPIO_Pin_1



// Define some useful switch function
#define LCD_BackLight_Enable  GPIO_SetBits(LCD_BackLight_Port,LCD_BackLight_Pin)
#define LCD_BackLight_Disable GPIO_ResetBits(LCD_BackLight_Port,LCD_BackLight_Pin)
#define LCD_CS_Enable  GPIO_ResetBits(LCD_CS_Port,LCD_CS_Pin)
#define LCD_CS_Disable GPIO_SetBits(LCD_CS_Port,LCD_CS_Pin)
#define LCD_RS_Data    GPIO_SetBits(LCD_RS_Port,LCD_RS_Pin)
#define LCD_RS_Command GPIO_ResetBits(LCD_RS_Port,LCD_RS_Pin)
#define LCD_Write_Enable  GPIO_ResetBits(LCD_Write_Port,LCD_Write_Pin)
#define LCD_Write_Disable GPIO_SetBits(LCD_Write_Port,LCD_Write_Pin)
#define LCD_Read_Enable   GPIO_ResetBits(LCD_Read_Port,LCD_Read_Pin)
#define LCD_Read_Disable  GPIO_SetBits(LCD_Read_Port,LCD_Read_Pin)

// Define some useful command 
#define LCD_Read_ID_Cmd  





struct LCD_Data
{
	u16 Pin_0 : 1;
	u16 Pin_1 : 1;
	u16 Pin_2 : 1;
	u16 Pin_3 : 1;
	u16 Pin_4 : 1;
	u16 Pin_5 : 1;
	u16 Pin_6 : 1;
	u16 Pin_7 : 1;
	u16 Pin_8 : 1;
	u16 Pin_9 : 1;
	u16 Pin_10 : 1;
	u16 Pin_11 : 1;
	u16 Pin_12 : 1;
	u16 Pin_13 : 1;
	u16 Pin_14 : 1;
	u16 Pin_15 : 1;
	
};





void LCD_Init();
void Parallel_Write (u16 data);

void LCD_Fill_Color(u16 color);




#endif
