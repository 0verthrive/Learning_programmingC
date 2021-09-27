#include <stdio.h>

/*variáveis*/
float num1, num2, soma;

int main(){
	/*Entrada*/
	printf("Informe um número:");
	fflush(stdin);
	scanf("%f", &num1);

	while(num1 < 0){
		printf("\nNão permitido números negativos, tente novamente!");
	printf("\nInforme um número:");
	fflush(stdin);
	scanf("%f", &num1);
	}

	printf("\nInforme outro número:");
	fflush(stdin);
	scanf("%f", &num2);

	while(num2 < 0){
			printf("\nNão permitido números negativos, tente novamente!");
		printf("\nInforme outro número:");
		fflush(stdin);
		scanf("%f", &num2);
		}
/*Processamento*/
	soma = num1+num2;

/*Saída*/
	printf("O resultado da soma é: %.2f", soma);


	return(0);
}
