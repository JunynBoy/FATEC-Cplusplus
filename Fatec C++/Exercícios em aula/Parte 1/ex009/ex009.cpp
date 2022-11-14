#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
/*
	Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A
	fórmula de conversão é: K = C + 273:15, sendo C a temperatura em Celsius e K a
	temperatura em Kelvin.
*/
int main (){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 02");
	
	float k,c;
	printf("Informe a temperatura em graus celsius;");
	scanf("%f",&c);
	k=(c+273.15);
	printf("A temperatura %.2f em graus Kelvin é %.2f",c,k);	
	
	
	
	return 0;
}

