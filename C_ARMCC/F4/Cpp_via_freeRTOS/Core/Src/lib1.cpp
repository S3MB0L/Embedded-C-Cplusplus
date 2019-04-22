#include "lib1.h"

led_cpp::led_cpp(uint16_t x)
{
	name = x;
	status = 0;
}
led_cpp::~led_cpp()
{
	
}
int led_cpp::on()
{
	
	HAL_GPIO_WritePin(LED_PORT, name, LED_ON);
	status = LED_ON;
	return 0;
}

int led_cpp::off()
{
	
	HAL_GPIO_WritePin(LED_PORT, name, LED_OFF);
	status = LED_OFF;
	return 0;
}

int led_cpp::toggle()
{
	HAL_GPIO_TogglePin(LED_PORT, name);
	if(status == LED_OFF)
	{
		status = LED_ON;
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
