#include <stdio.h>
#include <locale.h>
#include <stdlib.h>	

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 02");
	//var
	char op;
	
	switchCase:
	
	printf("digite a opção (+ - * / ): ");
	scanf(" %c", &op);
	
	switch( op ){
		case '+':
			printf("SOMA");
			break;
		case '-':
			printf("SUBTRAÇÃO");
			break;
		case '*':
			printf("MULTIPLICAÇÃO");
			break;
		case '/':
			printf("DIVISÃO");
			break;
		default:
			printf("Opção inválida");
		
	}
	
	return 0;
}
