#include <stdio.h>

/*variáveis*/
int hora_trab;
float valor_hora, salario;

int main(){
/*Entrada*/
	printf("Quantas horas você trabalhou nesse mês? ");
	fflush(stdin);
	scanf("%d", &hora_trab);

	printf("Quanto você recebe por hora? ");
	fflush(stdin);
	scanf("%f", &valor_hora);

/*Processamento*/
	salario = (valor_hora * hora_trab);

/*saída*/
	printf("O valor final do seu salário é de: R$%.2f", salario);

	return(0);
}
