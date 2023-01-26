#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
//exercício número 5

//funções
float somaDeQuadrados (float a, float b){
	return( (a*a) + (b*b) );
}

float hipotenusa (float catetoA, float catetoB){
	
	return sqrt( somaDeQuadrados(catetoA, catetoB)) ;
}

//funcao principal
int main (){
	setlocale (LC_ALL,"Portuguese");
	System("COLOR 02")
	
	float catA, catB, hipotenusa;
	
	printf("Digite o valor do cateto A; ")
	scanf("%f", &catA );
	printf("Digite o valor do cateto B;")
	scanf("%f", &catB);
	
	hipotenusa = hipotenusa (catA, catB);
	
	printf("Hipotenusa = %f", hipotenusa);
	
	
	return 0;
}
