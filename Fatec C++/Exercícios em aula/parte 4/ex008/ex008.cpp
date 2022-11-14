#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
//ex008
int main(){
	system ("COLOR 02");
	setlocale(LC_ALL,"Portuguese");
	int v,p = 0;
	printf("Digite salario do funcionario\n");
	scanf("%d", &v);
	printf("\nDigiteas prestações do funcionario\n");
	scanf("%d", &p);
	if(((p/100) * 20) <= v){
		printf("\nEmprestimo: Não Concedido !");
	}
	else{
		printf("\nEmprestimo: Não Concedido !");
	}
	return 0;
}
