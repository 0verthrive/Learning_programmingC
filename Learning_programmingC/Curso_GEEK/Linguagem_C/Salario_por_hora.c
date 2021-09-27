#include <stdio.h>

/*variável*/
float horas_trab, salario, valor_hora;
int  dias_trab;
int main(){
	/*entrada*/
	printf("Qual o salário? ");
	fflush(stdin);
	scanf("%f", &salario);

	printf("Quantos dias de trabalho? ");
	fflush(stdin);
	scanf("%i", &dias_trab);

	printf("Quantas horas de trabalho? ");
	fflush(stdin);
	scanf("%f", &horas_trab);

	/*processamento*/
	valor_hora = salario/(horas_trab*dias_trab);

	/*saída*/
	printf("\nSeu dia por hora vale: R$%.2f", valor_hora);
	return(0);
}
