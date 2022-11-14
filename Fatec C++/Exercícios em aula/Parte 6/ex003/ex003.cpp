#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
//3-Crie um programa que leia 6 valores inteiros e, em seguida, mostre na tela os valores lidos na ordem inversa.
int main(){
	setlocale(LC_ALL, "Portugues");
	int i,v[6];
	
	printf("Digite 6 valores inteiros;\n");
	
	for (i=1;i<=6;i++){
		scanf("%i",&v[i]);
	}
	
	printf("\nEm ordem inversa temos : \n");
	
	for (i=6;i>0;i--){
		printf("%i foi digitado..\n", v[i]);
	}
	
	system ("COLOR 02");
	return 0;
}
