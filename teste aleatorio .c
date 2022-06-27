#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int alunos, turma, i;
	float media, soma;
	
	printf("informe a quantidade de turmas: ");
	scanf("%i", &turma);
	fflush(stdin);
	i=1;
	
	do{	i++;
		printf("insira o numero de alunos desta turma: ");
		scanf("%i", &alunos);
		fflush(stdin);
		if(alunos<40){
			soma=soma+alunos;
			media=soma/turma;
		}
		else{
			printf("erro, o numero de alunos informado foi maior que 40!!\n");
			printf("a media de alunos por turma ate o momento e de: %.2f",media);
			}
		}
	while(alunos<40 && turma>=i);
	
	if(alunos<40){
	printf("a media de alunos por turma e: %.2f", media);
	}
	
	return 0;
}
