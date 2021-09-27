#include <stdio.h>

int num1, num2, sum, mult;

int main(){
/*Entrada*/
	printf("Informe um número inteiro:");
	fflush(stdin);
	scanf("%d", &num1);

	printf("Informe outro número inteiro:");
	fflush(stdin);
	scanf("%d", &num2);

/*Processamento*/
	sum = num1 + num2;
	mult = sum * num1;

/*Saída*/
	printf("\nO resultado da soma é: %d", sum);
	printf("\n\nO resultado de %d * %d valor é: %d", sum, num1, mult);


	return(0);
}
