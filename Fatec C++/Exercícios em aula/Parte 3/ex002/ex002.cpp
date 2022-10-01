#include <stdio.h>
#include <locale.h>
#include <iostream>
//2-Fazer um programa em linguagem C o qual produza a seguinte saída:
// Aa
// Bb
//...

int main(){ 
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 02");
	char maior='A';
	char menor='a';
	while(menor <'z'){
		printf("%c - %c \n",maior, menor);
		maior ++;
		menor ++;	
	}
	return 0;	
}


// Resolução extra:

#include <ctype.h>

int main(){
	for( char letter ='A';letter<='Z';letter++){
		printf("%c - %c \n",letter, tolower(letter));
	}
	return 0;
}
