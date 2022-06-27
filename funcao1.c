#include <stdio.h>
#include <stdlib.h>

int num (int N){
	if(N%2==0){
		return 0;
		}
	else{
		return 1;
	}
}	

int main (void){
	
	int N;
	
	printf("insira um valor: ");
	scanf("%i", &N);
	fflush(stdin);
	
	return num(N);
}

