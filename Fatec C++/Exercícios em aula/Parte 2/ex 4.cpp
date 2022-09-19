#include <iostream>
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL,"portuguese");
	int i=0;
	while (i<=100000){
		printf("%d", i);
		printf("\n");
		i=i+1000;
	}
	printf("aí chavinho que contagem gostosa, FIM!");
	return 0;
}
