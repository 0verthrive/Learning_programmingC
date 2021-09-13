#include <stdio.h>

float  comissao, result;
int vendas;

int main(){
/*Entrada*/
	printf("Informe o valor da comissão referencial: ");
		fflush(stdin);
			scanf("%f", &comissao);
	printf("Informe a quantidade de carros vendidos: ");
		fflush(stdin);
			scanf("%i", &vendas);

/*Processamento e saída*/
	result=comissao*vendas;
	printf("O valor a receber de comissão é %.2f", result);

	return(0);
}
