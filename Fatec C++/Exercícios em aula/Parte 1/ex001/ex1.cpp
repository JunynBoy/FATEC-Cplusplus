#include <stdio.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL, "portuguese" );
	int n1 = 0;
	printf("digite um numero: ");
	scanf("%d",&n1);
	printf("seu numero é : %d",n1);
	
	return 0;
	

}
