#include <iostream>
#include <locale.h>
#include <stdlib.h>

int main (){
	system ("COLOR 02");
	setlocale(LC_ALL,"Portuguese");
	//inicio do programa
	printf("Quanto números múltiplos de 3 você quer ? ");
	//variáveis
	int i,n,m;
	m=0;
	scanf("%d",&n); //%d inteiro decimal com sinal e %u para int dec sem sinal 
	//estrutura de repetição
	for (i=1;i<=n;i++){
		m=m+3;
		printf("O %d° múltiplo de 3 é; %d\",i,m);
	}
	
	
	return 0;
}
