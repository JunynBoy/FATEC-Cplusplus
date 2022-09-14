#include <stdio.h>

int main()
{
	float l, c, area, ap, am;
	
	printf("Digite a largura do terreno: ");
	scanf("%f", &l);
	printf("Digite o comprimento do terreno: ");
	scanf("%f", &c);
	
	area = l * c;
	
	ap = area / 24200;
	
	am = area / 48400;
	
	printf("A area = %.2f alqueires paulistas\n", ap);
	printf("A area = %.2f alqueires mineiros", am);
	
	return 0;
}
