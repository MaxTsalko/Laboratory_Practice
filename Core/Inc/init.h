#ifndef INIT_H
#define INIT_H

#include <stdint.h>
#define RCC_AHB1ENR                      *(uint32_t*)(0x40023800UL + 0x30UL) 
#define RCC_GPIOB_EN                     0x02 // включаем тактирование GPIOB  (RCC)
#define RCC_GPIOC_EN                     0x04 // включаем тактирование GPIOC (RCC)


#define GPIOB_MODER                      *(uint32_t*)(0x40020400UL + 0x00UL)
#define GPIOB_OSPEEDR                    *(uint32_t*)(0x40020400UL + 0x08UL)
#define GPIOB_PUPDR                      *(uint32_t*)(0x40020400UL + 0x0CUL)
#define GPIOB_BSRR                       *(uint32_t*)(0x40020400UL + 0x18UL) 

#define GPIOC_IDR                        *(uint32_t*)(0x40020800UL + 0x10UL) 

#define GPIOB_OUTPUT_MODER_BIN_7        0x4000UL //настройка пина PB7 на вывод, регистра MODER
#define GPIOB_SPEED_MED_PIN_7            0x4000UL // настройка скорости пина PB7 на среднюю
#define GPIOB_PIN_RESET_7                0x800000UL
#define GPIOB_PIN_SET_7                  0x80UL
#define GPIOC_PIN_13                     0x2000UL
#define GPIO_OFF                         0x00UL  // настройка подтягивающийх/стягивающих регистров PUPDR

#define BIT_SET(REG, BIT) ((REG) |= (BIT))
#define BIT_READ(REG, BIT) ((REG) & (BIT))

void GPIO_Init_Memory (void);
void GPIO_Init_With_Miself_Macros (void);


#endif