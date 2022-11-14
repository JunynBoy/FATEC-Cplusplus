#include <stdio.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL, "portuguese" );
	int n1,n2,n3,s = 0;
	printf("digite um numero: ");
	scanf("%i",&n1);
	printf("digite um numero: ");
	scanf("%i",&n2);
	printf("digite um numero: ");
	scanf("%i",&n3);
	s= n1+n2+n3;
	printf("a soma dos 3 valores sao: %d",s );
	
	return 0;
	

}
