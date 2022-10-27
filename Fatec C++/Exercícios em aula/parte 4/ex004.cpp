#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <cmath>
//ex004
int main(){
	system ("COLOR 02");
	setlocale(LC_ALL,"Portuguese");
	int n = 0;
	float c = 0;
	printf("Digite um numero\n");
	scanf("%d", &n);
	if(n >=0 ){
		c = sqrt(n);
		printf("\nA raiz do numero é %.2f \n", c);
		c = n * n;
		printf("\nO numero ao quadrado é %.2f", c);
	}
	else{
	printf("Numero Invalido !!");
	}
	return 0;
}
