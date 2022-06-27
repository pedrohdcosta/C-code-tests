#include <stdio.h>
#include <stdlib.h>

int data (int d, int m, int nd){
	
	if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
		if(d<=26){
			nd=d+5;
			printf("%i",nd);
		}
		else{
			nd=d+5-31;
			printf("%i",nd);
		}
	}
	if(m==4 || m==6 || m==9 || m==11){
		if(d<=25){
			nd=d+5;
			printf("%i",nd);
		}
		else{
			nd=d+5-30;
			printf("%i",nd);
		}
	}
	if(m==2){
		if(d<=23){
			nd=d+5;
			printf("%i",nd);
		}
		else{
			nd=d+5-28;
			printf("%i",nd);
		}
	}
	return 0;
}

int main(void){
	
	int d, m, nd;
	
	printf("insira o dia: ");
	scanf("%i", &d);
	fflush(stdin);
	
	printf("insira o numero do mes: ");
	scanf("%i", &m);
	fflush(stdin);
	
	return data(d, m, nd);
	}
