#include <stdio.h>
#include <stdlib.h>

int menu (char m, int i, int soma, int x, int y, int result, int result2){
	switch (m){
		
		case 'a':
		case 'A':{
			for(i=1;i<=50;i++){
				x=1;
				y=1;
				result=x/y;
				x+2;
				y+1;
				soma=soma+result;
			}
			printf("o valor da equacao e: %i", soma);
			break;
		}
		
		case 'b':
		case 'B':{
			for(i=1;i<=10;i++){
				x=1;
				y=1;
				result=x/y;
				x++;
				y++;
				if(result%2==0){
					result=result;
				}
				else{
					result=result2;
				}
				soma=soma-result+result2;
			}
			printf("o valor da equacao e: %i", soma);
			break;
		}
		
		case 'c':
		case 'C':{
			for(i=20;i>=1;i--){
				x=1000;
				y=1;
				result=x/y;
				x-3;
				y++;
				if(result%2==0){
					result=result2;
				}
				else{
					result=result;
				}
				soma=soma-result+result2;
			}
			printf("o valor da equacao e: %i", soma);
			break;
		}
		
		case 'd':
		case 'D':{
			for(i=20;i>=1;i--){
				x=480;
				y=10;
				result=x/y;
				x-5;
				y++;
				if(result%2==0){
					result=result;
				}
				else{
					result=result2;
				}
				soma=soma-result+result2;
			}
			printf("o valor da equacao e: %i", soma);
			break;
		}
		
		default:{
			
			printf("FIM!!!!");
			break;
		}
	}
	
	return 0;
}

int main (void){
	
	char m;
	int i, soma, x, y, result, result2;
	
	printf("----------------------------\n");
	printf("escolha a opcao desejada\n [a] S = 1/1 + 3/2 + 5/3+........+ 99/50 \n [b]  1/1 - 2/2 + 3/3 -..........- 10/10 \n [c]  S = 1000/1 - 997/2 + 994/3......... \n [d]  S = 480/10 - 475/11 + 470/12 - ....... \n [f] FIM\n");
	printf("----------------------------\n");
	scanf("%c", &m);
	
	return menu(m, i, soma, x, y, result, result2);
}
