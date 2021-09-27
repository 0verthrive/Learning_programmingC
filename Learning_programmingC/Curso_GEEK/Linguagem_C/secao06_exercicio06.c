#include <stdio.h>
/*variáveis*/
float horas_trab, salario = 0, excesso = 0, total;

int main(){
/*entrada*/
	printf("Informe as horas trabalhadas no mês: ");
	fflush(stdin);
	scanf("%f", &horas_trab);

/*processamento e saída*/
	salario = horas_trab * 10;

	if (horas_trab > 220){
		excesso = (horas_trab - 220);
		total = salario + (excesso*20);
		printf("Horas extras realizadas: %.1fh. \nSalário final de R$%.2f", excesso, total);
	}
	else {

		printf("Salário final: R$%.2f \nHoras extras: %.1fh", salario, excesso);
	}

	return(0);
}
