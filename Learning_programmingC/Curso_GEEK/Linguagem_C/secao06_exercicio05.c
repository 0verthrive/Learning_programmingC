#include <stdio.h>

/*variáveis*/
float peso, excesso = 0;
int multa = 0;

int main(){
/*entrada*/
	printf("Informe o peso do peixe: ");
	fflush(stdin);
	scanf("%f", &peso);

/*processamento*/
	if(peso > 50){
		excesso = peso - 50;
		multa = excesso * 4;

	printf("\nPeso: %.1fkg", peso);
	printf("\nExcesso: %.1fkg", excesso);
	printf("\nMulta a pagar: R$%i", multa);

	}
	else{
		printf("Peso: %.1fkg", peso);
		printf("\nExcesso: %.1fkg", excesso);
		printf("\nMulta a pagar: R$%i", multa);
	}
	return(0);
}
