#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
//3) Fa�a uma fun��o que verificar se um n�mero � positivo ou negativo. Dever� retornar 1 se positivo, -1 se negativo e 0
//se for zero.
int verfificarPositivoENegativo (int n1){
	if (n1 > 0){
		return 1;
	} if (n1 < 0){
		return -1;
	}else {
		return 0;
	}
	
}

int main (){
	setlocale (LC_ALL, "Portuguese");
	system ("COLOR 02");
	int n1;
	printf("Digite um valor: ");
	scanf("%i", &n1);
	n1=verfificarPositivoENegativo(n1);
	printf("%i", n1);
	
	return 0;
}
