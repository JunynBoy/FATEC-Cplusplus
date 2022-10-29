	#include <studio.h>
	#include <locale.h>
	
	int main(){
		setlocale(LC_ALL, "Portuguese");
		//var
		float p1,p2,media;
		
		//ler as notas
		printf("Digite a nota da P1");
		scanf("%f", p1);
		printf("Digite a nota da P2");
		sacnf("%f", &p2);
		
		media = (p1+p2)/2;
		
		//se media < 6            se media >=6
		if (media >= 6){
			//aprovado
			
			
		} else if (p1== 0 ) {
			//leia p3
			
			
			//media = (p1 + p3) / 2;
			
		}else{//nenhuma é zero
			//media = (p1+p2) /2;
		}
		
		
		
		//------------------otimizando----------------------------
		
		if (p1 == 0 || p2 == 0){ //esse "||" significa o "ou", ex: p1 ou p2 = 0 entao...
		
		//leia p3
		
		//media = ( P1 + P2 + P3 ) / 2;
		
		}
			
		return 0;
	}
