#include <iostream>
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL,"portuguese");
	int i,n,r=1;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		printf("%d", r);
		r += 2;
		
	}
	
	
		

	return 0;
}
