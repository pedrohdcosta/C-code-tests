#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int CD, i;
	float valor, medio, total, soma;
	
	printf("insira a quantidade de CD's: ");
	scanf("%i", &CD);
	fflush(stdin);
	
	for(i=1;i<=CD;i++){
		
		printf("qual o valor do cd %i: ", i);
		scanf("%f", &valor);
		fflush(stdin);
		soma=soma+valor;
		medio=soma/CD;
	}
	
	printf("a media por CD e: %.2f", medio);
	
	return 0;
}
