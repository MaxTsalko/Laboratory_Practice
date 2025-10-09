#include "init.h"

void GPIO_Init_Memory (void){
 *(uint32_t *)(0x40023800UL + 0x30UL) |= 0x02UL | 0x04UL; // настройка пина PB7 на выыход, регистр MODER
 *(uint32_t *)(0x40020400UL + 0x00UL) |= 0x4000UL;        // настройка скорости пина PB7 на среднюю, регистр OSPEEDR
 *(uint32_t *)(0x40020400UL + 0x08UL) |= 0x4000UL;        // настройка подтягивающих стягивающих регистров PUPDR
 *(uint32_t *)(0x40020400UL + 0x08UL) |= 0x00UL;
 *(uint32_t *)(0x40020400UL + 0x18UL) |= 0x800000L;
}

void GPIO_Init_With_Miself_Macros (void){
    BIT_SET (RCC_AHB1ENR, RCC_GPIOB_EN | RCC_GPIOC_EN);
    BIT_SET (GPIOB_MODER, GPIOB_OUTPUT_MODER_BIN_7);
    BIT_SET (GPIOB_OSPEEDR, GPIOB_SPEED_MED_PIN_7);
    BIT_SET (GPIOB_PUPDR, GPIO_OFF);
    
    BIT_SET (GPIOB_BSRR, GPIOB_PIN_RESET_7);


}



