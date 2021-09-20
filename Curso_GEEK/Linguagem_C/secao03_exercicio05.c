#include <stdio.h>

/*variável*/
int m, cm;

int main(){
/*Entrada*/
	printf("Informe o tamanho em metros: ");
	fflush(stdin);
	scanf("%i", &m);

/*Processamento*/
	cm = m*100;

/*Saída*/
	printf("O valor correspondente a %im é: %icm", m, cm);

	return(0);
}
