#include <iostream>
#include <locale.h>
#include <stdlib.h>
//Faça um programa utilizando o comando WHILE que mostra uma
//contagem regressiva na tela, iniciando em 10 e terminando em 0.
//Mostrar uma mensagem “FIM!” após a contagem.
int main (){
	system ("COLOR 02");
	setlocale(LC_ALL, "Portuguese");
	printf("Com o WHILE, fazer uma contagem regressiva de 10 a 0;");
	int i=10;
	
	while(i>=0){
		printf("%d",i);
		i--;
	}
	
	
	
	return 0;
}
