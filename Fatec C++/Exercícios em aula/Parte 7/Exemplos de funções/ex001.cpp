#include <stdio.h>
#include <stdlib.h>
//declara��o da fun��o - FORA DA FUN��O MAIN!!!
float polegadaMilimetros ( float polegada ) {   
//(parametro) valor de entrada dos dados
//o valor nesse caso � passado por referencia pol passa por referencia para polegada
	
	float milimetro = polegada * 25.4;
	return milimetro;
}

//void nao precisa de return;

void main (){
	float pol, mm;
	printf("Digite o valor em polegadas:");
	scanf("%f", &pol);
	
	//chama a fun��o polagadaMilimetro
	mm = polegadaMilimetros(pol); // m rece o o valor da polegada convertida pela fun��o 
	printf("\nOvalor em mm �: %.2f", mm);

	}
