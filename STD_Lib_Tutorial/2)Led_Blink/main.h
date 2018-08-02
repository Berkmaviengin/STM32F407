#ifndef MAIN_H_
#define MAIN_H_

#include "stm32f4xx.h"
 
void Port_Init(void);
void delay(int n);

void Port_Init(void)
{
	uint32_t i;
	RCC->AHB1ENR|=RCC_AHB1ENR_GPIODEN;
	GPIOD->MODER = 0x55000000;
  GPIOD->OTYPER = 0;
  GPIOD->OSPEEDR = 0xF000;
}

void delay(int n)
{
	while(n>0) n--;
}

#endif /*MAIN_H_*/