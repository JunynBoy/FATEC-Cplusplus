#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

	int main(){
		srand(time(NULL)); // Obs: <-- somente em linguagem 'C' e não 'C++'
		//rand tem o mesmo algorítmo de aleatoriedade todas as vezes
		//srand nao, pois vem de uma base diferente.
		int i,a, nnumeros,njogos;
		
		printf("Informe quantos numeros deseja na aposta: ");
		scanf("%d", &nnumeros);
		
		printf("Informe quantos Jogos deseja para aposta: ");
		scanf("%d", &njogos);
		
		a = 1;
		while(a<=njogos){  //Sintaxe do while ( enquanto ), deve ja ter a variável contadora iniciada
		//o incremento vem geralmente no final das chaves 
		// da para incrementar com +=
			printf("\n %d Jogo: \n",a);
			i = 1; 
			while(i<=nnumeros){
					printf(" %d ", rand()%61);
					i++;		 
			}
		 a++;
		}
	}
