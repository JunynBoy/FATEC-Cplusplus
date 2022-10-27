#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
//ex009
int main(){
	system ("COLOR 02");
	setlocale(LC_ALL,"Portuguese");
	float al,pe = 0;
	char c = 'm';
	printf("Digite a sua Altura\n");
	scanf("%f", &al);
	printf("\nDigite seu sexo, M para masculino e F para feminino\n");
	scanf("%s", &c);
	if(c == 'M' || c == 'm'){
		pe = ((72.7 * al) - 58);
		printf(" Seu peso ideal é %.2f", pe);
	}
	else if (c == 'F' || c == 'f'){
		pe = (62.1 * al) - 44.7;
		printf(" Seu peso ideal é %.2f", pe);
	}
	return 0;
}

