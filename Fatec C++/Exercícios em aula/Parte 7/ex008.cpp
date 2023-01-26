#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
//8) Faça uma função que receba dois números inteiros e retorne a soma dos números entre eles.
int somaDosNumeros (int n1 ,int n2){
	return n1+n2;
}

int main (){
	setlocale (LC_ALL, "Portuguese");
	system ("COLOR 02");
	int n1,n2;
	printf("Digite dois valores:");
	scanf("%i",&n1);
	scanf("%i",&n2);
	n1=somaDosNumeros(n1,n2);
	printf("a soma dos valores é: %i", n1);

	
	
	return 0;
}
