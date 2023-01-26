#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//Exercício 1 funcao que retorna o dobro
int dobro ( int dobro){
	return dobro*2;
}

int main (){
	setlocale (LC_ALL, "Portuguese");
	system ("COLOR 02");
	int valor;
	printf("Digite um valor;");
	scanf("%i", &valor);
	valor=dobro(valor);
	printf("%i",valor);
	
	return 0;
}
