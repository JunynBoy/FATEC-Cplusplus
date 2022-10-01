#include <stdio.h>
#include <locale.h>
#include <iostream>
//Faça um programa que imprima a seguinte saída
// A1 z26
// B2 y25
// ....

int main(){ 
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 02");
	
	char i1='A';
	int i2=1;
	char i3='z';
	int i4=26;
	while(i1 <='Z'){
		printf("%c%d%c%d \n",i1,i2,i3);
		i1 ++;
		i2 ++;	
		i3 --;
		i4 --;
	}
	
	system("PAUSE");
	return 0;	
}
