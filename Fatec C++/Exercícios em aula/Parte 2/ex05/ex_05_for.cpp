#include <iostream>
#include <locale.h>
#include <stdlib.h>
//Faça um programa que peça ao usuário para digitar 10 valores e
//some-os.

int main (){
	system("COLOR 02");
	setlocale(LC_ALL,"Portuguese");
	printf("Diga-me quantos valores voce quer digitar, pois vou soma-los:\n");
	int i,n,ns,s;
	scanf("%d",&ns);
	
	for(i=1;i<=ns;i++){
		printf("Digite seu %d° número:",i);
		scanf("%d",&n);
		s=n+s;
	}
	
	//mostrando a soma
	printf("O total da soma é: [ %d ]/n", s);
	system("PAUSE");
	return 0;		
}
