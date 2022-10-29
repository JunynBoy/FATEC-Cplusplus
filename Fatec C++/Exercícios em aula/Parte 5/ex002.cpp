#include <studio.h>
#include <locale.h>
	
int main(){
	//VAR
	float M;//media
	int F;//faltas
	//leia M F
	printf("Digite a media: ");
	scanf("%f", M)
	printf("Digite a falta: ");
	scanf("%i", F)
	int i;
	for (i=1;i<=1000000;i++){ //para testes
	
		if (M >= 6 && F <= 20){
			printf("Aprovado")
		}else if (M < 6 && F >20){
			//REPROVADO POR FALTA
			printf("Reprovado por falta")
		}else if (M < 6 && F >= 20 )
			//REPROVADO POR NOTA 
			printf("Reprovado por nota")
		}else { //if (M < 6 && F >= 20 ) -> nao é necessário nesse caso
			//REPTOVADO POR NOTA E FALTA 
			printf("Reprovado por nota e Falta");
		}
			
	}
	return 0;
}
