#include <stdio.h>
#include <locale.h>
#include <iostream>

//este código ajuda no entendimento sobre a tabela Ascii
int main (){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 02");
	
	char contador;
	
	for(contador='a'; contador <= 'z'; contador ++){ 
		printf("%c", contador);	
	}

system("PAUSE");
return 0;

}
