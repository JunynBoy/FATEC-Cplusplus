#include <stdio.h>
#include <locale.h>
// Escreva um programa que leia as notas da P1 e da P2 e mostre na tela se o aluno deverá 
//fazer P3 ou se está aprovado.

int main (){
	setlocale (LC_ALL,"Portuguese");
	float p1,p2 = 0;
	printf("Digite a nota da P1\n");
	scanf("%f", &p1);
	printf("\nDigite a nota da p2\n");
	scanf("%f", &p2);
	if(((p1 + p2)/2) >= 6){
		printf("\nAluno aprovado !");
	}else{
		printf("\nAluno precisa fazer P3");
	}

	return 0;
}
	
	
	

