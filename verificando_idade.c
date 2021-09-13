#include <stdio.h>

int idade;

int main(){
	/*Entrada*/
	printf("Informe sua idade: ");
	fflush(stdin);
	scanf("%i", &idade);

	/*Processamento e saída*/
	if (idade >= 18){
		printf("Compra permitida.");
	}
	else{
		printf("Venda permitida apenas para maiores de 18 anos!");
	}
return(0);
}
