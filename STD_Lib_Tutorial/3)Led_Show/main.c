
#include "stm32f4xx.h" //Standar STM kutuphanesi

/* Benim Kutuphanelerim*/
#include "port.h"
#include "main.h"
 
#define PIN  GPIO_Pin_12|GPIO_Pin_13|GPIO_Pin_14|GPIO_Pin_15
 

int main(void)
{
	int i=0;
	Port_Init();
	
	while(1)
  {

		for(i=0;i<4;i++)
		{
			GPIO_ToggleBits(GPIOD,PIN);
			delay(1500000);
		}
		for(i=0;i<4;i++)
		{
			GPIO_ResetBits(GPIOD,GPIO_Pin_14|GPIO_Pin_15);
			GPIO_SetBits(GPIOD,GPIO_Pin_12|GPIO_Pin_13);
			delay(1500000);
			GPIO_ResetBits(GPIOD,GPIO_Pin_12|GPIO_Pin_13);	
			GPIO_SetBits(GPIOD,GPIO_Pin_14|GPIO_Pin_15);
			delay(1500000);
		}
		for(i=0;i<4;i++)
		{
			GPIO_ResetBits(GPIOD,GPIO_Pin_13|GPIO_Pin_14);
			GPIO_SetBits(GPIOD,GPIO_Pin_12|GPIO_Pin_15);
			delay(1500000);
			GPIO_ResetBits(GPIOD,GPIO_Pin_12|GPIO_Pin_15);	
			GPIO_SetBits(GPIOD,GPIO_Pin_13|GPIO_Pin_14);
			delay(1500000);
		}
		for(i=0;i<4;i++)
		{
			GPIO_ResetBits(GPIOD,GPIO_Pin_13|GPIO_Pin_15);
			GPIO_SetBits(GPIOD,GPIO_Pin_12|GPIO_Pin_14);
			delay(1500000);
			GPIO_ResetBits(GPIOD,GPIO_Pin_12|GPIO_Pin_14);	
			GPIO_SetBits(GPIOD,GPIO_Pin_13|GPIO_Pin_15);
			delay(1500000);
		}
		GPIO_ResetBits(GPIOD,PIN);
	}		
}

