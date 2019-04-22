#ifndef LIB1_H
#define LIB1_H

#include "stdint.h"

#ifdef __cplusplus
extern "C"{
#include "stm32f4xx_hal.h"
}
#endif

#define LED1 GPIO_PIN_12
#define LED2 GPIO_PIN_13
#define LED3 GPIO_PIN_14
#define LED4 GPIO_PIN_15

#define LED_ON  GPIO_PIN_SET
#define LED_OFF GPIO_PIN_RESET


#define LED_PORT GPIOD

class led_cpp{
	public:
		led_cpp(uint16_t x);
		
		~led_cpp();
	
		int on();
		int off();
		int toggle();
	
	private:
		int status;
		int name;
};

#endif
