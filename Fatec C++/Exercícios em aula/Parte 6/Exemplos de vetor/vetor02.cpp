#include <stdio.h>
#include <conio.h>

int main(){
	int n=5;
	int x[n], i;
	
	for ( i=0; i<5 ; i++){
		printf("Digite um numero: ");
		scanf("%i", &x[i]);
		
	}
	for ( i=0; i<5 ; i++){
		printf("Valor lido = %i \n", x[i] );
		
		
	}
	for (i=0; i<n ; i++){
		printf("Valor lido inverso = %i \n", x[n-1-i]);
	}
	
	return 0;
} 
