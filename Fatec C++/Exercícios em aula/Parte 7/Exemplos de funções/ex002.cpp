#include <stdio.h>
#include <stdlib.h>

//lista de fun��es
float polegadaMilimetros ( float polegada );
float milimetroPolegada ( float milimetro);
/*
	� necess�rio listar as fun��es antes de us�-las de fato
	
*/


void main (){
	printf("Digite o valor em polegadas:");
	float pol, mili;
	scanf("%f", &pol);
	float mili = polegadaMilimetro(pol);
	printf("\nOvalor em mm �: %.2f", mili);

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
