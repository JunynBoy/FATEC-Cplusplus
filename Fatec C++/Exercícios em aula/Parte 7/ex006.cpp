#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
//exercicio 06
void verificaConsumo (float km, float litros){
	//calcular o consumo em KM/L
	float consumo = km/litros;
	if ( consumo < 8 ){
		printf("Opala 3 caneco? vende isso loko");
	} else if ( consumo <= 12) {
		printf("Econ�mico");
	} else {
		printf("Super econ�mico");
	}
}//fim fun��o verifica consumo


int main (){
	setlocale (LC_ALL,"Portuguese");
	system("COLOR 02");
	
	float km,litros;
	
	printf("Digite a quantidade de KM: ");
	scanf("%f", &km);
	printf("Digite a quantidade de Litros: ");
	scanf("%f", &litros);
	
	verificaConsumo(km,litros);
	
	return 0;
}
