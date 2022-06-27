#include <stdio.h>
#include <stdlib.h>

int triangulos (float l1, float l2, float l3){
	if(l1==l2 && l1==l3 && l2==l3){
		return 0;
	}
	else if(l1!=l2 && l2==l3){
		return 1;
	}
	else if(l1!=l3 && l2==l3){
		return 1;
	}
	else if(l1==l2 && l2!=l3){
		return 1;
	}
	else{
		return 2;
	}
}

int main(void){
	
	float l1, l2, l3;
	
	printf("insira o valor do lado 1: ");
	scanf("%f", &l1);
	fflush(stdin);
	
	printf("insira o valor do lado 2: ");
	scanf("%f", &l2);
	fflush(stdin);
	
	printf("insira o valor do lado 3: ");
	scanf("%f", &l3);
	fflush(stdin);
	
	return triangulos(l1, l2, l3);
}
