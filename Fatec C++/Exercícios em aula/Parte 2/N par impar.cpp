#include <iostream>
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL,"portuguese");
	int i,n,r,par,impar;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		if (i % 2==1){
			printf("%d", i);
		}	
		
	}
	
	
		

	return 0;
}
