#include <stdio.h>
#include <conio.h>

int main(){
	
	int x[8], y[5]={1,2,3};   //y[5] <- valor de 5 valores ={1,2,3,4,5} <-atribuição dos valores
	x[0] = 0;
	x[1] = y [5]; //atribuição de valores
	
	printf ("%i ", y[0]);
	printf ("%i ", y[1]);
	printf ("%i ", y[2]);
	printf ("%i ", y[3]);
	printf ("%i \n\n", y[4]);
	printf ("%i ", x[0]);
	printf ("%i ", x[1]);
	printf ("%i ", x[2]);
	printf ("%i ", x[3]);
	printf ("%i ", x[4]);

	return 0;
} 
