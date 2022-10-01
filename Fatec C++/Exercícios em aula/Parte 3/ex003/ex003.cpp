#include <stdio.h>
#include <locale.h>
#include <iostream>
//Um programa que exiba a seguinte sequência:
//A1, B2, B3 … Z26  {\n}

int main (){
	char letra;
	int numero= 0 ;
	for(letra = 'A'; letra <= 'Z'; letra++ ){
		numero++;
		printf("%c%i\n", letra, numero);
	}
	
	return 0;		
}
