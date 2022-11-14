#include <stdio.h>
#include <locale.h>
//13. Escreva um programa que leia as notas P1 e P2. Caso uma das notas seja 0 (zero), leia a
//nota da P3 e calcule a média.

int main(){
	setlocale (LC_ALL,"Portuguese");
	float p1,p2,p3;
	printf("Digite a nota da P1\n");
	scanf("%f", &p1);
	printf("\nDigite a nota da p2\n");
	scanf("%f", &p2);
	if(((p1 + p2)/2) >= 6){
		printf("\nAluno aprovado !");
	}else{
		if(p1 != 0){
			if(p2 != 0){
				printf("\nAluno reprovado !");
			}else{
				printf("Digite a nota da P3 !");
				scanf("%f",&p3);
				if(((p1 + p3)/2) >= 6){
					printf("\nAluno aprovado !");
				}else{
					printf("\nAluno reprovado");
				}	
			}
		}else{
			printf("Digite a nota da P3 !");
			scanf("%f",&p3);
			if(((p3 + p2)/2) >= 6){
				printf("\nAluno aprovado !");
			}else{
				printf("\nAluno reprovado");
			}
		}
	}
	
	return 0;
}

