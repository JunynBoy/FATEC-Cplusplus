#include <stdio.h>

int main()
{
	float c, f;
	
	printf("Digite a temperatura em Celsius: ");
	scanf("%f", &c);
	
	f = (1.8 * c) + 32;
	
	printf("A temperatura em Fahrenheit = %.2f", f);
	
	return 0;
}
