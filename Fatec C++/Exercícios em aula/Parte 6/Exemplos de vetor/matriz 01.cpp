#include <stdio.h>
//matriz
int main (){
	
	int m[3][3], i, j; //1°[]=numero de linhas []2°= numero de colunas 
	
	m[1][2] = 5; // definindo valor 5 na linha 1 coluna 2 
	
	for (1=0; 1<3 ; i++){
		for (c=0; c<3; c++){
			printf("Digite um valor: ");
			scanf("%i", &m[i][j]);
		}
	}
	printf("\n\nMatriz lida \n\n");
	for(1=0; 1<3 ; i++){
		for (c=0; c<3; c++){
			
			printf("[%i]", m[i]c[j])
		}
		printf("\n")
	}
			
			
			
	return 0;	
}
