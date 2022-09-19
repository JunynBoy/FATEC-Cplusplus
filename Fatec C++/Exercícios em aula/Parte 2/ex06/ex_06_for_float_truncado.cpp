#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <cmath>
//Faça um programa que leia 10 inteiros e imprima sua média.

int main (){
	system("COLOR 02");
	setlocale(LC_ALL,"portuguese");
	//variáveis
	int i,ni;
	float n,s,m;
	
	//exiba parte 1 
	printf("Quantos numeros voce quer digitar ? ");
	scanf("%d",&ni);
	s=0;
	//estrutura lógica
	for  (i=1;i<=ni;i++){
		printf("Digite seu %d° número: ",i);
		scanf("%f",&n);
		s=s+n;
	}
	
	//exibição de variáveis	
	m=s/ni;
	printf("sua média de numeros é de [ %.1f ];",m );
	//o C tem costume de arredondar os valores entao m se for 5.7 vira 6
	//podemos consertar isso com o %.1f que nao faz o arredondamento
	// mas retorna 1  casa decimal
	
	
return 0;	
}
