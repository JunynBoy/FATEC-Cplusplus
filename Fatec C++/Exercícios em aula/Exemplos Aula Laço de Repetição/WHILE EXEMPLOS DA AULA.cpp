#include <stdio.h>

int main(){

	int i =1 ;
	float mult;
	float milimetros;
	mult = 25.4;
	
	printf("-------------------milimetros em polegadas------------------- \n");
	
	printf("Informe quantas polegadas deseja calcular: \n");
	scanf("%f", &milimetros); //nao esquecer do &comercial
	
	
//obs sempre inicializar a var i com valor 1!!!!  ex: int i=1
while( i<= milimetros)
{
	printf("\n %.5f",mult);
	mult += 25.4;
	i++;
}

	 		
    return 0;
}
