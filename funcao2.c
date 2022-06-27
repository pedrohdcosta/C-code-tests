#include <stdio.h>
#include <stdlib.h>

char write (char c, int l, int i){
	for(i=1;i<=l;i++){
	printf("%c\n", c);
	}
	
	return 0;
} 	

int main(void){

	int i, l;
	char c;
	
	printf("escolha o tipo de caracter: ");
	scanf("%c", &c);
	fflush(stdin);
	
	printf("escolha o numero de linhas: ");
	scanf("%i", &l);
	fflush(stdin);
	
	return write(c, l, i);
}
