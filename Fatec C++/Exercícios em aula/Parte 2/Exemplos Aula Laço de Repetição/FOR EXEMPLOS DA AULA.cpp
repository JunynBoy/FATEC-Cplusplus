#include <stdio.h>
#include <locale.h>

int main(){

	int i;
	float mult;
	float milimetros;
	mult = 25.4;
	
	printf("-------------------milimetros em polegadas------------------- \n");
	
	printf("Informe quantas polegadas deseja calcular: \n");
	scanf("%f", &milimetros);
	for (i = 1; i <= milimetros; i++){
		
		printf("\n %.5f",mult);
		mult += 25.4;
	}
			
    return 0;
}
