#include <stdio.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL, "portuguese" );
	float n1 = 0;
	printf("digite um numero: ");
	scanf("%f",&n1);
	printf("seu numero e : %2.f",n1);
	
	return 0;
	

}
