#include<stdio.h>


static void LED_Pin_Init(){
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;

    LED_PORT->MODER &= ~(0x03 << (2*LED_PIN));
    LED_PORT->MODER |= 0x02 << (2*LED_PIN);

    LED_PORT->AFR[0] &= ~(0xF << (4*LED_PIN));
    LED_PORT->AFR[0] |= 0x1 << (4*LED_PIN);

    LED_PORT->OSPEEDR &= ~(0x03 << (2*LED_PIN));
    LED_PORT->OSPEEDR |= (0x03 << (2*LED_PIN));

    LED_PORT->PUPDR &= ~(0x03<<(2*LED_PIN));
}
// TIMER CHANNEL INITIALIZATION
static void TIM2_CH1_Init(){
    RCC->APB1ENR |= RCC_APB1ENR_TIM2EN;

    TIM2->CR1 &= ~TIM_CR1_DIR;
    TIM2->PSC = 39;
    TIM2->ARR = 50000-1;
    
    TIM2->CCMR1 &= ~TIM_CCMR1_OC1M;
    TIM2->CCMR1 |= TIM_CCMR1_OC1M_0 | TIM_CCMR1_OC1M_1;
    
    TIM2->CCMR1 |= TIM_CCMR1_OC1PE;

    TIM2->CCER |= TIM_CCER_CC1NP;
    TIM2->CCER |= TIM_CCER_CC1 NE;
    
    TIM2->BDTR |= TIM_BDTR_MOE;
    TIM2->CR1 |= TIM_CR1_CEN;

}

int main(void)
{
    TIM2_CH1_Init();
    LED_Pin_Init();


    while(1);
}
