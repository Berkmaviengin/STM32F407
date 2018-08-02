
#include "stm32f4xx.h" //Standar STM kutuphanesi

/* Benim Kutuphanelerim*/
#include "port.h"
#include "main.h"
 
#define PIN  GPIO_Pin_12|GPIO_Pin_13|GPIO_Pin_14|GPIO_Pin_15
 

int main(void)
{
	Port_Init();
	
	while(1)
  {

		if(GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_0)==1)
		{
			GPIO_SetBits(GPIOD,PIN);
		}
		else
		{
			GPIO_ResetBits(GPIOD,PIN);
		}
	}		
}

