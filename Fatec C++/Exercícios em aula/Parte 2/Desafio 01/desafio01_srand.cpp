#include <istream>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
//Faça dois programas, um com for e um com while utilizando o RAND() que faça
//um jogo de MEGA-SENA.
//
//dados: 	-O jogo terá 6 números
//	-Os números vão de 01 a 60, mas se sair 00 não tem problema
//
//obs:Pode aparecer números repetidos!
 
 int main (){
 	srand (time(NULL));
 	setlocale(LC_ALL,"Portuguese");
 	system("COLOR 02");
 	printf("oi, eu sou um jogo da mega sena de 6 números aleatórios\n\n");
 	int i;
 	for(i=1;i<=6;i++){
	 	printf("[ %d ]\t",rand()%61);
 	}
 	printf("\n\n BOA SORTE! \n\n");
 	system("PAUSE");
	return 0;
}
