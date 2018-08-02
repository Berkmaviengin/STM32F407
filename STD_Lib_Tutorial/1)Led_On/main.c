#include "stm32f4xx.h"                  // Device header

int main(void)
{
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN;
	/*Yesil led GPIOD->15
	 *Mavi led GPIO icin 40000000
	 *Butun ledler icin(12,13,14,15)->0x55000000
	*/
	GPIOD->MODER =0x55000000; //15 output olarak ayarlandi
	GPIOD->OTYPER=0; //pull-up ayarlandi ama emin degilim datasheete bak
	GPIOD->OSPEEDR=0; // I/O output speed "LOW"//
	/*Mavi led icin ->8000
	 *Butun ledler icin-> 0xF000
	*/
	GPIOD->ODR=8000; //15 lojik 1 cikisi verildi
	while(1)
	{
	}
}


/*************************************************************************************
		*******************************************************************************
		*     			ASAGIDAKI PROGRAM SIRASIYLA BUTUN LEDLERI YAKIP SONDURUR					*
		*******************************************************************************
*************************************************************************************/   

/*#include "stm32f4xx.h"
 
//GPIO_InitTypeDef GPIO_InitStructure;
 
int main(void)
{
        uint32_t i;
        
        RCC->AHB1ENR|=RCC_AHB1ENR_GPIODEN;
        
        GPIOD->MODER = 0x55000000;
        GPIOD->OTYPER = 0;
        GPIOD->OSPEEDR = 0;
        
        while(1)
        {
                        GPIOD->ODR = 0x8000;//Mavi
                        for(i=0;i<2000000;i++){}
                        GPIOD->ODR = 0x4000;//Kirmiz
                        for(i=0;i<2000000;i++){}
                        GPIOD->ODR = 0x2000;//turuncu
                        for(i=0;i<2000000;i++){}
                        GPIOD->ODR = 0x1000;//Yesil
                        for(i=0;i<2000000;i++){}
        }
}
*/
/*************************************************************************************
*************************************************************************************/ 
