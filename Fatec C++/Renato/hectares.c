#include <stdio.h>

int main()
{
	float l, c, area, hectares;
	
	printf("Digite a largura do terreno: ");
	scanf("%f", &l);
	printf("Digite o comprimento do terreno: ");
	scanf("%f", &c);
	
	area = l * c;
	
	hectares = area / 10000;
	
	printf("A area = %.2f ha", hectares);
	
	return 0;
}
