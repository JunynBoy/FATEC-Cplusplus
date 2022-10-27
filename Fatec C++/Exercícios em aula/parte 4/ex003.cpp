#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <cmath>

//ex003
int main(){
	system ("COLOR 02");
	setlocale(LC_ALL,"Portuguese");
	float n, c = 0;
	printf("Digite um numero \n");
	scanf("%f", &n);
	if(n >= 0 ){
		c = sqrt(c);
		printf("\nA raiz do numero é %.2f", c);
	}
	else{
		c = n * n;
		printf("\nO numero elevado ao quadrado é %.2f", c);
	}
	return 0;
}
