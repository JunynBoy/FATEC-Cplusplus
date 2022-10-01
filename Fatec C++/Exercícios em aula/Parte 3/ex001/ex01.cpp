#include <stdio.h>
#include <locale.h>
#include <iostream>
//1- Fazer um programa em linguagem C o qual reproduza a seguinte saída;
// 10 - 1
// 9 - 2
// ....
void main(){ //com o void nós nao precisamos de return, mas perdemos um controle, se eu precisar encerrar um processamento no meio do código 
//tem a ver com o uso do comando break, que vai fazer uma verificação no seu código
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 02");
	int maior=10;
	int menor=1;
	while(menor <11){
		printf("%d - %d \n",maior, menor);
		maior --;
		menor ++;	
	}
	
	
	//código do professor - APENAS UMA VARIÁVEL
	int i;  //nem sempre a 2° variável é uma possibilidade
	for(i=1;i<=10;i++){
		printf("%d-%d\n",i,11-i);
	}
	
	
	system("PAUSE");
}
