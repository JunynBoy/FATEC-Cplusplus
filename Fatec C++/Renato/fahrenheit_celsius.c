#include <stdio.h>

int main()
{
	float c, f;
	
	printf("Digite a temperatura em Fahrenheit: ");
	scanf("%f", &f);
	
	c = (f -32) /1.8;
	
	printf("A temperatura em Celsius = %.2f", c);
	
	return 0;
}
