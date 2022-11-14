#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
//Leia um número inteiro e imprima o seu antecessor e o seu sucessor.
int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 02");
	int n;
	printf("Digite um numero inteiro");
	scanf("%i", &n);
	printf("o seu sucessor é %i\n",n+1);
	printf("o seu ancetecessor é %i\n",n-2);
	
	
	return 0;
}
