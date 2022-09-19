#include <iostream>
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL,"portuguese");
	int i,n;
	n=3;
	for(i=1; i<=5; i++){
	printf("o %d é o %d multiplo de 3 ", n, i);
	printf("\n");
	n=n+3;
	}
	
}
