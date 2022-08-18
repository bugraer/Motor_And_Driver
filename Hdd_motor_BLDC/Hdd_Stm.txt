#include "stm32f4xx.h"

unsigned int adc;
float akim, hiz; 
int i, x, c, b, a=0;

void TIM3_IRQHandler(){
	TIM3->SR &= ~TIM_SR_UIF;
	adc=ADC1->DR;
	akim = (adc/4);
	hiz = c/60;

}
void delay(int x){
for(int a=0;a<1000;a++);
}
int main(){
	
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN;
	
	RCC->APB1ENR |= RCC_APB1ENR_TIM3EN; // TIM3ENABLE

	GPIOA->MODER &= ~ GPIO_MODER_MODER0_0 | GPIO_MODER_MODER0_1;
	GPIOA->MODER |= GPIO_MODER_MODER0_0 | GPIO_MODER_MODER0_1;
	RCC->APB2ENR |= RCC_APB2ENR_ADC1EN;  //ADC BUSS PA0 ANALOG GIRIS
  ADC1->CR2 |= ADC_CR2_ADON;
  ADC1->CR2 |=ADC_CR2_CONT;
  ADC1->CR2 |= ADC_CR2_SWSTART;
	adc=ADC1->DR;
	
	TIM3->PSC &= ~TIM_PSC_PSC;
	TIM3->PSC |= 159;
	TIM3->ARR &= ~TIM_PSC_PSC;
	TIM3->ARR |= 1000U;
	TIM3->CCR1 &= ~TIM_PSC_PSC;
	TIM3->CCR1 |= 1000;
	TIM3->CCR2 &= ~TIM_PSC_PSC;
	TIM3->CCR2 |= 1000;
	TIM3->CCR3 &= ~TIM_PSC_PSC;
	TIM3->CCR3 |= 1000;
	TIM3->CCR4 &= ~TIM_PSC_PSC;
	TIM3->CCR4 |= 1000;
	TIM3->DIER |= TIM_DIER_UIE;
	TIM3->CCMR1 |= TIM_CCMR1_OC1M_2 | TIM_CCMR1_OC1M_1; //SAYMA YONU
	TIM3->CCER |= TIM_CCER_CC1E | TIM_CCER_CC2E | TIM_CCER_CC3E; //ENABLE
	TIM3->CCMR2 |= TIM_CCMR1_OC1M_1 | TIM_CCMR1_OC1M_2 | TIM_CCMR1_OC1M_0; 
	NVIC_EnableIRQ(TIM3_IRQn); //INTERRUPT 
	TIM3->CR1 |= TIM_CR1_CEN;
	
	while(1){
	for(b=0;b<100;b++){
	GPIOD->ODR |= GPIO_ODR_OD15;
	delay(30);
	GPIOD->ODR &= ~GPIO_ODR_OD15;
		
	GPIOD->ODR |= GPIO_ODR_OD14;
	delay(30);
	GPIOD->ODR |= GPIO_ODR_OD14;
		
	GPIOD->ODR |= GPIO_ODR_OD13;
	delay(30);
	GPIOD->ODR |= GPIO_ODR_OD13;
		c++;
	}
	for(b=0;b<100;b++){
	GPIOD->ODR |= GPIO_ODR_OD15;
	delay(25);
	GPIOD->ODR &= ~GPIO_ODR_OD15;
		
	GPIOD->ODR |= GPIO_ODR_OD14;
	delay(25);
	GPIOD->ODR |= GPIO_ODR_OD14;
		
	GPIOD->ODR |= GPIO_ODR_OD13;
	delay(25);
	GPIOD->ODR |= GPIO_ODR_OD13;
		c++;
	}
	for(b=0;b<100;b++){
	GPIOD->ODR |= GPIO_ODR_OD15;
	delay(20);
	GPIOD->ODR &= ~GPIO_ODR_OD15;
		
	GPIOD->ODR |= GPIO_ODR_OD14;
	delay(20);
	GPIOD->ODR |= GPIO_ODR_OD14;
		
	GPIOD->ODR |= GPIO_ODR_OD13;
	delay(20);
	GPIOD->ODR |= GPIO_ODR_OD13;
		c++;
	}
	for(b=0;b<100;b++){
	GPIOD->ODR |= GPIO_ODR_OD15;
	delay(15);
	GPIOD->ODR &= ~GPIO_ODR_OD15;
		
	GPIOD->ODR |= GPIO_ODR_OD14;
	delay(15);
	GPIOD->ODR |= GPIO_ODR_OD14;
		
	GPIOD->ODR |= GPIO_ODR_OD13;
	delay(15);
	GPIOD->ODR |= GPIO_ODR_OD13;
		c++;
	}
	for(b=0;b<100;b++){
	GPIOD->ODR |= GPIO_ODR_OD15;
	delay(10);
	GPIOD->ODR &= ~GPIO_ODR_OD15;
		
	GPIOD->ODR |= GPIO_ODR_OD14;
	delay(10);
	GPIOD->ODR |= GPIO_ODR_OD14;
		
	GPIOD->ODR |= GPIO_ODR_OD13;
	delay(10);
	GPIOD->ODR |= GPIO_ODR_OD13;
		c++;
	}
	for(b=0;b<100;b++){
	GPIOD->ODR |= GPIO_ODR_OD15;
	delay(5);
	GPIOD->ODR &= ~GPIO_ODR_OD15;
		
	GPIOD->ODR |= GPIO_ODR_OD14;
	delay(5);
	GPIOD->ODR |= GPIO_ODR_OD14;
		
	GPIOD->ODR |= GPIO_ODR_OD13;
	delay(5);
	GPIOD->ODR |= GPIO_ODR_OD13;
		c++;
	}
}
}
