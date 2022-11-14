#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	system ("COLOR 02");
	
	int i;
	
	i=2;
	i=i^2;
	
	printf("%i\n\n\n", i);
	
	
	system("PAUSE");
	return 0;
}
/*
	esse arquivo nada mais é que um teste para descobrir se C++ faz calculo de potência com o operador ^
	
*/
