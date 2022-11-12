#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//2-Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado dos componentes deste vetor,
// armazenando o resultado em outro vetor. Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos.
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float v1[10], v2[10];
	int i;
	
	for (i=1;i<=10;i++){
		printf("Digite um valor: ");
		scanf("%f", &v1[i])	;
	}
	
	for (i=1;i<=10;i++){
		v2[i]=v1[i]*v1[i];
		printf("O valor digitado no %i° campo foi = %.1f\n", i,v1[i]);
		printf("O valor digitado no %i° campo ao quadrado é = %.1f\n", i,v2[i]);
	}
	
	
	system("PAUSE");
	return 0;
}
