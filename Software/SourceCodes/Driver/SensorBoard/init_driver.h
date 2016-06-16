/*****************************************************************************
*
* File              : init_driver.h
* Compiler          : AVR GCC 3.4.2
* Revision          : $Revision: 0.1 $
* Date              : $Date: 2016/05/13 $
* Updated by        : $Author: Xie jian $
*
* Support mail      : 1483792843@qq.com
*
* Supported devices : Atmel ATmega256RFR2
*
* Description       : 地磁检测sensor板驱动的头文件
*
*
****************************************************************************/

#define uchar unsigned char
#define uint unsigned int

/*
*name:Mag_Sensor_Init
*function:传感器板初始化
*need:void
*return:void
*/
void Mag_Sensor_Init(void);
/*
*name:Power_On
*function:开启电源
*need:void
*return:void
*/
void Power_On(void);
/*
*name:Power_Off
*function:关闭电源
*need:void
*return:void
*/
void Power_Off(void);
/*
*name: LED_Off
*function:关闭LED
*need:void
*return:void
*/
void LED_Off(void);
/*
*name: LED_On
*function:开启LED
*need:void
*return:void
*/
void LED_On(void);
/*
*name: ADC_Init
*function:ADC初始化 
*need:void
*return: void
*/
void ADC_Init(void);
/*
*name:ADC_Conver
*function:ADC采集
*need:void
*return: 16bit（有效10bit）
*/
uint ADC_Conver(void);
/*
*name: Mag_X_Init
*function:X轴信号路径初始化
*need:void
*return:void
*/
void Mag_X_Init(void);
/*
*name: Mag_Y_Init
*function:X轴信号路径初始化
*need:void
*return:void
*/
void Mag_Y_Init(void);
/*
*name: Mag_Z_Init
*function:X轴信号路径初始化
*need:void
*return:void
*/
void Mag_Z_Init(void);
/*
*name: Mag_X_Sample
*function:X轴数据采集
*need:void
*return:16bit（有效10bit）
*/
uint Mag_X_Sample(void);
/*
*name: Mag_Y_Sample
*function:X轴数据采集
*need:void
*return:16bit（有效10bit）
*/
uint Mag_Y_Sample(void);
/*
*name: Mag_Z_Sample
*function:X轴数据采集
*need:void
*return:16bit（有效10bit）
*/
uint Mag_Z_Sample(void);
/*
*name:Mag_XYZ_SR
*function:磁传感器复位
*need:void
*return:void
*/
void Mag_XYZ_SR(void);
/*
*name:Usart1_Int
*function：initialization USART
*need：bauddata (10bit)
*return:void
*/
void Usart1_Int(uint baud);
/*
*name:Usart1_Send
*function:send
*need:unsigned char
*return:void
*/
void Usart1_Send(uchar data);
/*
*name:Usart1_Rev
*function:receview
*need:void
*return：unsigned char（8bit）
*/
uchar Usart1_Rev(void);
