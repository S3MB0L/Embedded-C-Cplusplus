#include <gui/screen1_screen/Screen1View.hpp>




Screen1View::Screen1View()
{	
	
}

void Screen1View::setupScreen()
{
	
}

void Screen1View::tearDownScreen()
{

}
void Screen1View::handleTickEvent()
{
	static uint32_t counter_tick=0;
	static uint32_t counter_tick_t=0;
	counter_tick_t++;
	
	if(counter_tick_t%10 == 0)
	{
		counter_tick++;
		
		if(counter_tick%2 == 0)
		{
			textArea1.setTypedText(TypedText(0));
			
		}
		else if(counter_tick%2 == 1)
		{
			textArea1.setTypedText(TypedText(1));
		}
	}
//	if(counter_tick % 10 == 0)
//	{
	
	
	
	Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%d",counter_tick_t);
	textArea2.invalidate();
		
	Unicode::snprintf(textAreaNumbBuffer, TEXTAREA2_SIZE, "%d",counter_tick_t/10);
	textAreaNumb.invalidate();
//		Unicode::snprintf(poolTemperatureTextBuffer,5,"%d",counter_tick/10);
//		poolTemperatureText.setWildcard(poolTemperatureTextBuffer);
//	}
}
