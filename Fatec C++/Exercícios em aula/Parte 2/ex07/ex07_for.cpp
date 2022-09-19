#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <stdlib.h>
//Faça um programa que leia um número inteiro N e depois imprima
//os N primeiros números naturais ímpares.

int main (){
	int i=1,n;
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 02");
	//inicio do programa
	printf("Digite um número: ");
	scanf("%d", &n); //entrada de dados
	printf("Os numeros inteiros naturais ímpares até o numero %d é:\n",n);
	while(i<=n){ 
		printf("[%d]\t",i);
		i=i+2;
	}
	printf("\n\n\n");
	system("PAUSE");
	return 0;
}
