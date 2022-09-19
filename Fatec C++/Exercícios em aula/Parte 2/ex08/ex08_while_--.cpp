#include <iostream>
#include <locale.h>
#include <stdlib.h>
//Faça um programa que leia um número inteiro positivo N e imprima
//todos os números naturais de 0 até N em ordem crescente.
 
 int main (){
 	setlocale(LC_ALL,"Portuguese");
 	system("COLOR 02");
 	//inicio do programa
	printf("Digite um número; ");
	int i,n;
 	scanf("%d",&n);
 	i=1;
 	printf("\nTodos os números naturais de 0 até %d são:",n);
	while(i<=n){
		printf("[%d]\t",i);
		i++;
	} 	
 	
 	
 }
 
 
 
