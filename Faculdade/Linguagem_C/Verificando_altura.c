#include <stdio.h>

float altura;

int main(){
	/*Entrada*/
	printf("Informe sua altura: ");
	fflush(stdin);
	scanf("%f", &altura);

	/*Processamento e saída*/
	if (altura >= 1.80){
		printf("Aproveite o brinquedo!");
	}
	else{
		printf("Altura insuficiente para entrar neste brinquedo!");
	}
return(0);
}
