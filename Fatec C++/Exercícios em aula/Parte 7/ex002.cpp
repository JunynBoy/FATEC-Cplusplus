#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
//2) Fa�a uma fun��o que receba dois n�meros e retorne o maior.
int nMaior (int n1 ,int n2){
	
	if (n1 > n2){
		return n1;
	}else{
		return n2;
	}
}
int main (){
	setlocale (LC_ALL,"Portuguese");
	system("COLOR 02");
	int maior, n1, n2 ;
	printf("Digite dois valores: ");
	scanf("%i",&n1);
	scanf("%i",&n2);
	maior=nMaior(n1,n2);
	printf("%i � o maior numero.",maior);
	
	
	return 0;
}
