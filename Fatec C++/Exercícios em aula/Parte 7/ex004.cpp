#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
//4) Faça uma função que retorne o Volume de uma Esfera. Sendo vE = 4/3	* pi * R^3

float volumeEsfera (float raio){
	float volume;
	volume=4/3*3.14*pow(raio,3);
	return volume;
}
int main (){
	setlocale (LC_ALL, "Portuguese");
	system ("COLOR 02");
	
	float raio,re;
	printf("Digite o valor de um raio para descobrir o volume da esfera; ");
	scanf("%f", &raio);
	re=volumeEsfera(raio);
	printf("O volume da esfera é %2.f", re);
	
	return 0;
}
