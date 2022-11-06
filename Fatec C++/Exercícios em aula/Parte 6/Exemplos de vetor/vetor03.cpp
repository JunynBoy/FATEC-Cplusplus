#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h> //necessário para usar as funções malloc()
//vetor dinamico 
int main(){
	system("COLOR 02");
	setlocale(LC_ALL , "Portuguese");
	float*v; //definindo o ponteiro v
	int i, num_componentes;
	
	printf("Informe o numero de componentes do vetor\n");
	scanf("%d", &num_componentes);
	
	/*----------- Alocando dinamicamente o espaço necessário ----------
	
	1 - calcular a quantidade de bytes necessários
	primeiramente multiplicaomos o número de componentes do vetor pela 
	quantidade de bytes que é dada pelo comando sizeof,
	portanto temos:
	num_componentes * sizeof(float)
	
	2 - Reservar a quantidade de memória
	usamos malloc para reservar essa quantidade de memória,
	então temos;
	malloc (num_componentes * sizeog(float))
	
	3 - Converter o ponteiro para o tipo de dados desejado
	como a função malloc retorna um ponteiro do tipo void,
	precisamos converter esse ponteiro para o tipo da nossa variável 
	
	4 - Juntando tudo e atribuindo em v temos o comando abaixo; */
	
	v = (float *) malloc(num_componentes * sizeof(float));
	
	//armazenando os dados em um vetor
	for (i = 0; i <  num_componentes; i++){
		printf("\nDigite o valor para a posição %d do vetor: ", i+1);
		scanf("%f",&v[i]);
	}
	
	// ------- Percorrendo o vetor e imprimindo valores --------------
	printf("\n************* Valores do vetor dinamico **************\n\n");
	
	for (i = 0;i < num_componentes; i++){
		printf("%.2f\n", v[i]);
	}
	
	//liberando o espaço de memória alocado
	free(v);

	return 0;	
}
