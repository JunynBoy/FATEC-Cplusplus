#include <stdio.h>
#include <locale.h>
//14. Escreva um programa que leia a média e o número de faltas, e mostre se o aluno foi aprovado,
//reprovado por nota ou reprovado por nota e falta

int main(){
	setlocale (LC_ALL,"Portuguese");
	float m, f = 0;
	printf("Digite a media do aluno\n");
	scanf("%f", &m);
	printf("\nDigite as faltas do aluno\n");
	scanf("%f", &f);
	if(m >= 6 && f <= 20){
		printf("ALUNO APROVADO");
	}else if(m < 6 && f <= 20){
		printf("ALUNO REPROVADO POR MEDIA");
	}else if(m > 6 && f > 20){
		printf("ALUNO REPROVADO POR FALTA");
	}else if(m < 6 && f > 20){
		printf("ALUNO REPROVADO POR MEDIA E FALTA");
	}
	
	return 0;
}

