#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

	int main(){
		srand(time(NULL));
		int i,a, nnumeros,njogos;
		
		printf("Informe quantos numeros deseja na aposta: ");
		scanf("%d", &nnumeros);
		
		printf("Informe quantos Jogos deseja para aposta: ");
		scanf("%d", &njogos);
		
		for(a = 1; a<=njogos; a++){
			printf("\n %d Jogo: \n",a);
			for( i = 1; i<=nnumeros; i++){
					printf(" %d ", rand()%61);		 
			}
		
		}
	
		
	}
