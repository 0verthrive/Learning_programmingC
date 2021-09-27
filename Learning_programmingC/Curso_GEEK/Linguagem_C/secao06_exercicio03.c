#include <stdio.h>

/*variáveis*/
int n, p=0, i=0;

int main(){
	/*Entrada*/
	printf("informe um número:");
	fflush(stdin);
	scanf("%d", &n);

	/*Processamento e saída*/
	if(n % 2 == 0){
	p = n;
			printf("O valor %d, é par.", p);
	}else{
	i = n;
			printf("O valor %d, é ímpar.", i);
	}
	return(0);
}
