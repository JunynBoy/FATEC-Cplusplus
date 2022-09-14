#include <stdio.h>

//questão 1
float calculaMedia(float p1, float p2)
{
	return (p1+p2)/2;
}

//questão 2
float verificaFaltas(int faltas)
{
	if(faltas <= 20)
		return 1;//aprovado
	else
		return 0;//reprovado
}

//questão 3

int main()
{
	float p1, p2, media, faltas;
	
	printf("Digite a nota da P1: ");
	scanf("%f", &p1);
	printf("Digite a nota da P2: ");
	scanf("%f", &p2);
	printf("Digite as faltas: ");
	scanf("%f", &faltas);
	
	media = calculaMedia(p1,p2);
	
	faltas=verificaFaltas(faltas);
	
	if(media>=6 && faltas==1)
		printf("Aluno Aprovado");
	else
		printf("Aluno Reprovado");
	
	return 0;
}
