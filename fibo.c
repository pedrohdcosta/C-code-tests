#include <stdio.h>

int main(void){
	
	int i, n1=0, n2=1;
	
	printf("%i\n",n1);
	for(i=1;n2!=89;i++){
		n2+=n1;
		n1=n2-n1;
		printf("%i\n",n2);
	}
}
