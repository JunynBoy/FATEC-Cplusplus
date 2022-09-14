#include <stdio.h>
#include <locale.h>


int main(){

	setlocale(LC_ALL, "portuguese" );
	 //declaração de variáveis
	 int n1,n2, soma;
	 
	 //inicialização de variáveis
	 n1 = 0; 
	 n2 = 0; //n1 = n2 = soma = 0;
	 soma = 0;
	 
	 //Ler n1
	 printf("Digite o primeiro n�mero: ");
	 scanf("%d", &n1);
	 
	 //Ler n2
	 printf("Digite o primeiro n�mero: ");
	 scanf("%d", &n2);
	 
	 //Soma <- n1 + n2
	 soma = n1 + n2;
	 
	 //Exiba soma 
	  printf("A soma foi %d",soma);
	  


	return 0;
}


