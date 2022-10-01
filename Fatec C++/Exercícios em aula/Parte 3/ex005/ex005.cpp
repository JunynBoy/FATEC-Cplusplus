#include <stdio.h>
#include <locale.h>
#include <iostream>
//5- Faça um programa que imprima a seguinte saída 
//AaAbAcAdAeAfAgAhAiAjAkAlAmAnAoApAqArAsAtAuAvAwAxAyAz
//BaBbBcBdBeBfBgBhBiBjBkBlBmBnBoBpBqBrBsBtBuBvBwBxByBz
// ......

int main(){ 
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 02");
	char l1, l2;
	for(l1='A';l1<='Z';l1++){
		
		for(l2='a';l2<='z';l2++){
			printf("%c%c",l1,l2);	
		}
	printf("\n");
}
	return 0;	
}
