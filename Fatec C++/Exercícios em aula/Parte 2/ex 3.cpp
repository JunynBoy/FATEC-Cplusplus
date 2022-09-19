#include <iostream>
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL,"portuguese");
	int i=10;
	while (i>=0){
		printf("%d", i);
		printf("\n");
		i--;
	}
	printf("aí chavinho que contagem gostosa, FIM!");
	return 0;
}
