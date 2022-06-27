#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int num, i;
	printf("insira o numero que deseja ver a tabuada: ");
	scanf("%i", &num);
	fflush(stdin);
	
	for(i=1;i<=10;i++){
		printf("%i x %i= %i\n", num, i, num*i);
	}
	
	return 0;
}
