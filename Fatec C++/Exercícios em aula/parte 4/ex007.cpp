#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
//ex007
int main(){
	system ("COLOR 02");
	setlocale(LC_ALL,"Portuguese");
	int a,b = 0;
	printf("Digite o Primeiro numero\n");
	scanf("%d", &a);
	printf("\nDigite o Segundo numero\n");
	scanf("%d", &b);
	if(a > b){
		printf("\n - O Numero %d é maior ! - \n", a);
	}
	else if(a < b){
		printf("O Numero $d é maior !", b);
	}
	else{
		printf("Os numeros %d e %d são iguais !", a, b);
	}
	return 0;
}
