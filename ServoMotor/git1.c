#include "stm32f4xx.h"                 // Device header

void Delay(void)
	{
 for(int a=0;a<100000;a++);
  }

	int main()
	{
	Delay();
		
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;
  RCC->APB1ENR |= RCC_APB1ENR_TIM3EN;
		
	GPIOA->MODER |= GPIO_MODER_MODER1_1;
	GPIOA->PUPDR |= GPIO_PUPDR_PUPDR6_1;

	GPIOA->AFR[0] |= GPIO_AFRL_AFRL6_1;
		
	TIM3->PSC &= ~TIM_PSC_PSC;
	TIM3->PSC |= 84; 
	
	TIM3->ARR &= ~TIM_PSC_PSC;
	TIM3->ARR |= 19999;
 
  TIM3->CNT &= ~TIM_PSC_PSC;
	TIM3->CNT |= 19999; 
	
	TIM3->CCMR1 |= TIM_CCMR1_OC1M_2 | TIM_CCMR1_OC1M_1 | TIM_CCMR1_OC1M_0;
	TIM3->CCER |= TIM_CCER_CC1E;
	TIM3->CR1 |= TIM_CR1_CEN;
 
	while(1)
	{
	  for(int i=0;i<2201;i++)
		{
		TIM3->CCR1 &= ~TIM_PSC_PSC;
		TIM3->CCR1 |= i;
		TIM3->CR1 |= TIM_CR1_ARPE;
		Delay();
		
		}
		for(int i=2200;i>0;i--)
		{
		TIM3->CCR1 &= ~TIM_PSC_PSC;
		TIM3->CCR1 |= i;
	  TIM3->CR1 |= TIM_CR1_ARPE;
		Delay();
		
		}
	
		
	}		
 
}