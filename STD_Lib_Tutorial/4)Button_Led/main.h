#ifndef MAIN_H_
#define MAIN_H_

#include "stm32f4xx.h"
 
void Port_Init(void);
void delay(int n);

void Port_Init(void)
{
	GPIO_InitTypeDef InitD;
	GPIO_InitTypeDef InitA;
	
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD,ENABLE);
	
	InitD.GPIO_Pin=GPIO_Pin_12 | GPIO_Pin_13 | GPIO_Pin_14 | GPIO_Pin_15 ;
	InitD.GPIO_Mode=GPIO_Mode_OUT;
	InitD.GPIO_OType=GPIO_OType_PP;
	InitD.GPIO_Speed=GPIO_Speed_2MHz;
	InitD.GPIO_PuPd=GPIO_PuPd_NOPULL;
	GPIO_Init(GPIOD,&InitD);
	
	
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA,ENABLE);
	
	InitA.GPIO_Pin=GPIO_Pin_0;
	InitA.GPIO_Mode=GPIO_Mode_IN;
	InitA.GPIO_OType=GPIO_OType_OD;
	InitA.GPIO_Speed=GPIO_Speed_2MHz;
	InitA.GPIO_PuPd=GPIO_PuPd_NOPULL;
	GPIO_Init(GPIOA,&InitA);
	
	

}

void delay(int n)
{
	while(n>0) n--;
}

#endif /*MAIN_H_*/
