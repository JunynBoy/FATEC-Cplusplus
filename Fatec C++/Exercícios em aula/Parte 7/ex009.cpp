#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

//9) Faça uma função que receba dois números inteiros (X e Z) e retorne X^z
int potencia (int x ,int z){
	x = pow(x,z);
	return x;
}

int main (){
	setlocale (LC_ALL, "Portuguese");
	system ("COLOR 02");
	
	int x,z;
	
	printf("digite dois valores: ");
	scanf("%i",&x);
	scanf("%i",&z);
	x=potencia(x,z);
	printf("o valor da potencia desses dois numeros fica: %i",x);

	
	
	return 0;
}
