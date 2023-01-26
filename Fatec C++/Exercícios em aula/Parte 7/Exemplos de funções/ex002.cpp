#include <stdio.h>
#include <stdlib.h>

//lista de funções
float polegadaMilimetros ( float polegada );
float milimetroPolegada ( float milimetro);
/*
	é necessário listar as funções antes de usá-las de fato
	
*/


void main (){
	printf("Digite o valor em polegadas:");
	float pol, mili;
	scanf("%f", &pol);
	float mili = polegadaMilimetro(pol);
	printf("\nOvalor em mm é: %.2f", mili);

	}
	
	//polegadas para milimetros
float polegadaMilimetro ( float polegada ){
	float milimetro = polegada * 25.4;
	return milimetro;
}

	//milimetros em polegadas
float milimetroPolegada ( float milimetro ){
	return milimetro / 25.4;
}
