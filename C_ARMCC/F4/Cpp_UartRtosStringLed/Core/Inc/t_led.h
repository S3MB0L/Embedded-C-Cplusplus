#ifndef T_LED_H
#define T_LED_H

#define LED1 GPIO_PIN_12
#define LED2 GPIO_PIN_13
#define LED3 GPIO_PIN_14
#define LED4 GPIO_PIN_15

#define LED_PORT GPIOD

#define LED_ON  GPIO_PIN_SET
#define LED_OFF GPIO_PIN_RESET

#define DELAY(x) HAL_Delay(x);

#include "stm32f4xx_hal.h"

class Led {
	
	public:
		Led(uint16_t led_name);
		~Led();
		int On(void);
		int Off(void);
		int Toggle(void);
		int Test(void);
	private:
		uint16_t name;
		uint16_t status;
};


#endif
