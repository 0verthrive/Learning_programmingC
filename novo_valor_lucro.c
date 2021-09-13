#include <stdio.h>
#include <stdlib.h>

float valor_prod, result;

int main(){
/*Entrada*/
	printf("Informe o valor pago no produto: R$");
	fflush(stdin);
	scanf("%f", &valor_prod);

/*Processamento e saída*/
	if(valor_prod >= 20){
		result = (valor_prod * 0.45) + valor_prod;

		printf("R$%.2f x 45%% = R$%.2f\nPreço da venda deve ser: R$%.2f", valor_prod, result, result);
	}
	else if (valor_prod < 20){
		result = (valor_prod * 0.3) + valor_prod;

		printf("R$%.2f x 30%% = R$%.2f\nPreço da venda deve ser: R$%.2f", valor_prod, result, result);
	}
	return(0);
}
