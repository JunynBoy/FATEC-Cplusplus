#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
//1-Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.
int main (){
	setlocale (LC_ALL,"Portuguese");
	system("COLOR 02");
	//VAR
	int i,v[6];
	
	//inicio
	for(i=1;i<=6;i++){
		printf("Digite um número inteiro: ");
		scanf("%i",&v[i]);
	}

	for(i=1;i<=6;i++){
		printf("O %i° Valor digitado foi: %i\n",i,v[i]);
		
	}
	
	
	
	
	return 0;
}
