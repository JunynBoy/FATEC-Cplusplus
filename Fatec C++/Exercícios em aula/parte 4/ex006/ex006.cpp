#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
//ex006
int main(){
	system ("COLOR 02");
	setlocale(LC_ALL,"Portuguese");
	int a,b,c = 0;
	printf("Digite o Primeiro numero\n");
	scanf("%d", &a);
	printf("\nDigite o Segundo numero\n");
	scanf("%d", &b);
	if(a > b){
		c = a - b;
		printf("\nO Numero %d é maior com uma diferença de %d do numero %d",a,c,b);
	}
	else if(b > a){
		c = b - a;
		printf("\nO Numero %d é maior com uma diferença de %d do numero %d",b,c,a);
	}
	else{
		printf("\nOs numeros são iguais !");
	}
	return 0;
}
