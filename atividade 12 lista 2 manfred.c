#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	float n1, n2, n3, r;
	char x;
	
	printf("----------BEM VINDO-----------\n");
	printf("|                            |\n");
	printf("| selecione a opcao desejada |\n");
	printf("| A-area de retangulo        |\n");
	printf("| B-area de triangulo        |\n");
	printf("| C-area de circulo          |\n");
	printf("| D-area de quadrado         |\n");
	printf("| E-area de trapezio         |\n");
	printf("| F-sair                     |\n");
	printf("|                            |\n");
	printf("-----------------------------\n");
	scanf("%c", &x);
	fflush(stdin);
	
	switch(x){
		
		case 'a':
		case 'A':
			printf("insira a base: ");
			scanf("%f", &n1);
			fflush(stdin);
			printf("insira a altura: ");
			scanf("%f", &n2);
			fflush(stdin);
			r=n1*n2;
			printf("o resultado e: %.2f", r);
			break;
			
		case 'b':
		case 'B':
			printf("insira a base: ");
			scanf("%f", &n1);
			fflush(stdin);
			printf("insira a altura: ");
			scanf("%f", &n2);
			fflush(stdin);
			r=n1*n2/2;
			printf("o resultado e: %.2f", r);
			break;
			
		case 'c':
		case 'C':
			printf("insira o raio: ");
			scanf("%f", &n1);
			r=2*3.14*n1*n1;
			printf("o resultado e: %.2f", r);
			break;
			
		case 'd':
		case 'D':
			printf("insira os lados: ");
			scanf("%f", &n1);
			fflush(stdin);
			scanf("%f", &n2);
			fflush(stdin);
			r=n1*n2;
			printf("o resultado e: %.2f", r);
			break;
			
		case 'e':
		case 'E':
			printf("insira o lado maior: ");
			scanf("%f", &n1);
			fflush(stdin);
			printf("insira o lado menor:");
			scanf("%f", &n2);
			fflush(stdin);
			printf("insira a altura: ");
			scanf("%f", &n3);
			fflush(stdin);
			r=(n1+n2)*n3/2;
			printf("o resultado e: %.2f", r);
			break;
			
		case 'f':
		case 'F':
			printf("Tem certeza que deseja sair?\n");
			scanf("%c", &x);
			fflush(stdin);
			if(x=='s' || x=='S'){
				printf("Ate a proxima!!");
			}
			else if(x=='n' || x=='N'){
				printf("agradecemos a preferencia");
			}
			else{
				printf("erro!! o programa ira fechar");
			}
			break;
		
		default:
			printf("erro, insira um valor valido");
			break;
	}
	
	return 0;
}


