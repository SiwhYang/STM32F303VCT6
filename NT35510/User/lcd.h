#ifndef __LCD_H__
#define __LCD_H__
#include "stm32f30x.h"

#define LCD_Data0_Port
#define LCD_Data0_Pin
#define LCD_Data1_Port
#define LCD_Data1_Pin
#define LCD_Data2_Port
#define LCD_Data2_Pin
#define LCD_Data3_Port
#define LCD_Data3_Pin
#define LCD_Data4_Port
#define LCD_Data4_Pin
#define LCD_Data5_Port
#define LCD_Data5_Pin
#define LCD_Data6_Port
#define LCD_Data6_Pin
#define LCD_Data7_Port
#define LCD_Data7_Pin
#define LCD_Data8_Port
#define LCD_Data8_Pin
#define LCD_Data9_Port
#define LCD_Data9_Pin
#define LCD_Data10_Port
#define LCD_Data10_Pin
#define LCD_Data11_Port
#define LCD_Data11_Pin
#define LCD_Data12_Port
#define LCD_Data12_Pin
#define LCD_Data13_Port
#define LCD_Data13_Pin
#define LCD_Data14_Port
#define LCD_Data14_Pin
#define LCD_Data15_Port
#define LCD_Data15_Pin

// LCD back light port
#define LCD_BackLight_Port GPIOC
#define LCD_BackLight_Pin GPIO_Pin_9

// LCD read port
#define LCD_Read_Port
#define LCD_Read_Pin
// LCD write port
#define LCD_Write_Port
#define LCD_Write_Pin
// LCD command or data port
#define LCD_RS_Port
#define LCD_RS_Pin


// Define some useful switch
#define LCD_BackLight_Enable     GPIO_SetBits(LCD_BackLight_Port,LCD_BackLight_Pin)
#define LCD_BackLight_Disable    GPIO_ResetBits(LCD_BackLight_Port,LCD_BackLight_Pin)



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
void LCD_Fill_Color(u16 color);





#endif
