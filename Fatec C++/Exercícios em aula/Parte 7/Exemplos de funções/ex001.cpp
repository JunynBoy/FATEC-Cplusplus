#include <stdio.h>
#include <stdlib.h>
//declaração da função - FORA DA FUNÇÃO MAIN!!!
float polegadaMilimetros ( float polegada ) {   
//(parametro) valor de entrada dos dados
//o valor nesse caso é passado por referencia pol passa por referencia para polegada
	
	float milimetro = polegada * 25.4;
	return milimetro;
}

//void nao precisa de return;

void main (){
	float pol, mm;
	printf("Digite o valor em polegadas:");
	scanf("%f", &pol);
	
	//chama a função polagadaMilimetro
	mm = polegadaMilimetros(pol); // m rece o o valor da polegada convertida pela função 
	printf("\nOvalor em mm é: %.2f", mm);

	}
