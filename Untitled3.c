#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int num01;
	float constante_pi, resultado;
	constante_pi=3.141592;

	printf("\n informe um valor para o numero 01:");
	scanf("%i",&num01);

	printf("\n Informe um valor para constante:");
	scanf("%f",&constante_pi);

	resultado=(num01*constante_pi);

printf("\n O resultado da multiplicacao e %f",resultado);
	return 0;
}
