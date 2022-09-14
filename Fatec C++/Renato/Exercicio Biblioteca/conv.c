#include "conv.h"
#include <stdio.h>

	float mmPol(float mm)
	{
		return mm / 25.4;
	}
	
	float polMM(float pol)
	{
		return pol * 25.4;
	}
	
	float celsiusFarenheit(float celsius)
	{
		return (celsius * 1.8) + 32;
	}
	
	float farenheitCelsius(float farenheit)
	{
		return (farenheit - 32 ) * 5/9;
	}
