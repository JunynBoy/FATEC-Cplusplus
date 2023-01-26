#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <stdio.h>

int main (){
	
	double valor1, valor2, valor3;
	valor1 = 0.2;
	valor2 = 0.1;
	valor3=valor1+valor2;
	printf("%f", valor3);
	
	//no java esse código gera 0.30000000000000004
	return 0;
}
