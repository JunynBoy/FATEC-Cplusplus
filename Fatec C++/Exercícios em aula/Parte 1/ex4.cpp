#include <stdio.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL, "portuguese" );
	float n1,r;
	printf("digite um numero: ");
	scanf("%f",&n1);
	printf("o resultado ao quadrado é:%f", n1*n1 );
	
	return 0;
	
	

}
