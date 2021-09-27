#include <stdio.h>

int n1, n2;
int opc;

int main(){

	do{

	printf("Informe o primeiro valor: ");
	fflush(stdin);
	scanf("%i", &n1);
	printf("\nInforme o segundo valor: ");
	fflush(stdin);
	scanf("%i", &n2);
	printf("\nInforme a operação que deseja realizar: \n1 = soma \n2 = subtração \n3 = multiplicação \n4 = divisão \n0 = sair \nEscolha: ");
	fflush(stdin);
	scanf("%i", &opc);


	switch(opc){

		case 1:
			printf("%i + %i = %i\n\n", n1, n2, n1 + n2);
			break;
		case 2:
			printf("%i - %i = %i\n\n", n1, n2, n1 - n2);
			break;
		case 3:
			printf("%i * %i = %i\n\n", n1, n2, (n1 * n2));
			break;
		case 4:
			printf("%i / %i = %i\n\n", n1, n2, (n1 / n2));
			break;
		case 0:{
			printf("Programa finalizado com sucesso!");
			exit(0);
		}

		default:
			printf("\nEssa opção não existe.");
			break;
		}
	}
	while(opc != 0);

	return(0);
}
