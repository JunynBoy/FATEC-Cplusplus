#include <stdio.h>
//matriz
int main (){
	
	int m[3][3], i, j; //1°[]=numero de linhas []2°= numero de colunas 
	
	m[1][2] = 5; // definindo valor 5 na linha 1 coluna 2 
	
	for (i=0; i<3 ; i++){
		for (j=0; j<3; j++){
			printf("Digite um valor: ");
			scanf("%i", &m[i][j]);
		}
	}
	printf("\n\nMatriz lida \n\n");
	for(i=0; i<3 ; i++){
		for (j=0; j<3; j++){
			
			printf("[%i]", m[i][j]);
		}
		printf("\n");	
	}			
			
	return 0;	
}
