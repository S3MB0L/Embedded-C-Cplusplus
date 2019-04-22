#include "t_led.h"

Led::Led(uint16_t led_name)
{
	name = led_name;
}

Led::~Led()
{
	
}

int Led::On()
{
	HAL_GPIO_WritePin(LED_PORT,name,LED_ON);
	status = LED_ON;
	return 0;
}

int Led::Off()
{
	HAL_GPIO_WritePin(LED_PORT,name,LED_OFF);
	status = LED_OFF;
	return 0;
}

int Led::Toggle()
{
	HAL_GPIO_TogglePin(LED_PORT,name);
	if(status == LED_ON)
	{
		status = LED_OFF;
	}
	else if(status == LED_ON)
	{
		status = LED_OFF;
	}
	else
	{
		
	}
	return 0;
}

int Led::Test()
{
	On();
	DELAY(250);
	Off();
	DELAY(250);
	
	return 0;
}
