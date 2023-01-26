#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

//ex007 verificar se forma um triangulo
//boolean com inteiro 1 verdaderio 0 falso
int verificaSeFormaTriangulo ( int ladoA, int ladoB, int ladoC ){
	if (ladoA < (ladoB+ladoC) && ladoB < (ladoA+ladoC) && ladoC < (ladoA+ladoB)  ){
		return 1; //forma triangulo	
	}else{
		return 0; //nao forma triangulo
	}
}

//verificar o tipo de tri�ngulo
void verificaTipoDetriangulo (int ladoA, int ladoB, int ladoC){
	//quando n�s executamos uma fun��o dentro da condi��o do if, 
	//dentro da condi��o if a op��o � 0 e 1, se o retorno for 0 e 1 funciona do mesmo jeito
	if(verificaSeFormaTriangulo(ladoA, ladoB, ladoC)){
		if( ladoA == ladoB && ladoB == ladoC ){ //equilatero
			printf("Equilatero");
		} else if ( ladoA == ladoB || ladoA == ladoC || ladoB == ladoC ){
			printf("Isosceles");
		} else {
			printf("Escaleno");
		}
	} else {
		printf("N�o forma tri�ngulo!");
	}
	
}






int main (){
	setlocale (LC_ALL,"Portuguese");
	system("COLOR 02");
	
	int a,b,c;
	
	printf("Digite o valor do primeiro lado: ");
	scanf("%i", &a);
	printf("digite o valor do segundo lado: ");
	scanf("%i", &b);
	printf("Digite o valor do terceiro lado: ");
	scanf("%i", &c);
	
	verificaTipoDetriangulo(a,b,c);
		
	return 0;
}
