#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	float n1, n2, n3, media;
	
	printf("informe a nota 1: ");
	scanf("%f", &n1);
	fflush(stdin);
	
	printf("informe a nota 2: ");
	scanf("%f", &n2);
	fflush(stdin);
	
	printf("informe a nota 3: ");
	scanf("%f", &n3);
	fflush(stdin);
	
	media=(n1+n2+n3)/3;
	
	
	
	
	return 0;
}
