#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	char x;
	
	printf("Qual seu sexo?\n");
	scanf("%c", &x);
	fflush(stdin);
	
	if(x=='m' || x=='M'){
		printf("masculino");
	}
	else if(x=='f' || x=='F'){
		printf("feminino");
	}
	else{
		printf("erro!!!");
	}
	
	return 0;
}
