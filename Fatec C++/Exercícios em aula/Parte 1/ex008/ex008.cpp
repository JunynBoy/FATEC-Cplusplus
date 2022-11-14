#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
/*
	8. Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A
	fórmula de conversão é: C = K – 273.15, sendo C a temperatura em Celsius e K a
	temperatura em Kelvin.
*/
int main(){
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 02");
	
	float k,c;
	printf("Informe a temperatura em graus Kelvin;");
	scanf("%f",&k);
	c=(k-273.15);
	printf("A temperatura %.2f em graus Celsius é %.2f",k,c);	
	
	
	return 0;
}

