#include <iostream>
#include <locale.h>
#include <stdlib.h>
//Escreva um programa que declare um inteiro, inicialize-o com 0, e
//incremente-o de 1000 em 1000, imprimindo seu valor na tela, at�
//que seu valor seja 100.000 (cem mil).
int main (){
	system("COLOR 02");
	setlocale(LC_ALL,"Portuguese");
	int i=0;
	//inicio do while 
	while(i<=100000){
		printf("[ %d ] ",i);
		i=i+1000;
	}
	
}
