#include <stdio.h>
#include <stdlib.h>

char write (int l, char c);

int main(void){

	int  linhas;
	char caracter;
	
	printf("escolha o numero de linhas: ");
	scanf("%i", &linhas);
	fflush(stdin);
	
	printf("escolha o tipo de caracter: ");
	scanf("%c", &caracter);
	fflush(stdin);
	
	write(linhas, caracter);
	
	return 0;
}	
 	
char write (int l, char c){
	int i, j;
	for(i=1;i<=l;i++){
		for(j=1;j<=10;j++){
			printf("%c",c);
		}
		printf("\n");
	}
}