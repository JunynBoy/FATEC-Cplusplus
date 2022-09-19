#include <iostream>
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL,"portuguese");
	int i,n, result;
	printf("Qual tabuada deseja calcular? ");
	scanf("%d", &n);
	for (i = 1; i<=10; i++){
		result = n*i;
		printf("%d  X  %d = %d",n, i, result);
		printf("\n");
		
		}
	if (n==1){
		printf("CARALHO FILHO DA PUTA BURRO DO CARALHO VOLTA PRA BUCETA DA SUA MAE ARROMBADO ANIMAL TABUADA DO 1 PORRAAAAAAAA BURROOOOOOOO");	
	}
	else if (n <= 5 ){
		printf("porra irmao tabuada do %d é de fude", n);
	}
	 
	return 0;
}
