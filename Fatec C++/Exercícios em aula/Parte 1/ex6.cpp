#include <stdio.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL, "portuguese" );
	float c,f;
	printf("digite a temperatura em Celsius ");
	scanf("%f",&c);
	f=c*9/5+32;
	printf("o resultado em farenheit é: %f" );
	
	return 0;
	
}
