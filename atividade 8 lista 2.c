#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int n1, n2, n3, aux;
	
	printf("insira o primeiro valor: ");
	scanf("%i", &n1);
	fflush(stdin);
	
	printf("insira o segundo valor: ");
	scanf("%i", &n2);
	fflush(stdin);
		
	printf("insira o terceiro valor: ");
	scanf("%i", &n3);
	fflush(stdin);
	
	if(n1>n2 && n1>n3){
		if(n2>n3){
			printf("a ordem e: %i %i %i", n3, n2, n1);
		}
		else{
			printf("a ordem e: %i %i %i", n2, n3, n1);
		}
	}
	
	if(n2>n1 && n2>n3){
		if(n1>n3){
			printf("a ordem e: %i %i %i", n3, n1, n2);
		}
		else{
			printf("a ordem e: %i %i %i", n1, n3, n2);
		}
	}
	
	if(n3>n1 && n3>n2){
		if(n1>n2){
			printf("a ordem e: %i %i %i", n2, n1, n3);
		}
		else{
			printf("a ordem e: %i %i %i", n1, n2, n3);
		}
	}
	
	return 0;
}
