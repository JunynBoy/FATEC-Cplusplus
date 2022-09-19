#include <iostream>
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL,"portuguese");
	int i;
	for (i=1; i<=100; i++){
		printf ("%d", i );
		printf("\n");
		
	}
	printf("O Igao gostoso fez daqui pra frente ");
	printf("\n");
	i = 1;
	while (i<=100){
		printf("numero de vezes que o gustavo chupou minha rola ---> %d ", i);
		printf("\n");

		i++;
	}
	
	return 0;
}
