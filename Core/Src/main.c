#include "init.h"

int main(void){

    GPIO_Init_With_Miself_Macros();

    while(1){
    if(BIT_READ(GPIOC_IDR, GPIOC_PIN_13)) // проверка нажатия кнопки на пине PC13     
    {
        BIT_SET(GPIOB_BSRR, GPIOB_PIN_SET_7); // включение светодиода PB7      
    }
    else BIT_SET(GPIOB_BSRR, GPIOB_PIN_RESET_7); // выключение светодиода PB7, BSRR регистр

    }
} 