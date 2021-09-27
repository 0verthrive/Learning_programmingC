#include <stdio.h>
/*Variáveis*/
int n, a, b;

int main(){
	/*Entrada*/
	printf("informe um número:");
	fflush(stdin);
	scanf("%d", &n);

	/*Processamento e saída*/
	if (n > 0){
		a = n;
	printf ("a) %d é positivo", a);
	}else{
		b = n;
	printf ("b) %d é negativo", b);
	}

	return(0);
}

