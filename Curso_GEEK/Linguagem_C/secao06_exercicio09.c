#include <stdio.h>
float industria1, industria2, industria3, medida_pol;

int main(){
/*entrada*/
	printf("Os graus de poluentes são medidos de 0.05 à 0.25");
	printf("\nInforme o nível de poluente: ");
	fflush(stdin);
	scanf("%f", &medida_pol);

/*Processamento e saída*/
	if(medida_pol >= 0.3 && medida_pol < 0.4 ){
		printf("A medida %.2f excessede o limite. Grupo 1 deve suspender as atividades.", medida_pol);
	}
	else if (medida_pol >= 0.4 && medida_pol < 0.5){
		printf("A medida %.2f excessede o limite. Grupos 1 e 2 devem suspender as atividades.", medida_pol);
	}
	else if (medida_pol >= 0.5){
		printf("A medida %.2f excessede o limite. Todos os grupos devem suspender as atividades.", medida_pol);
	}
	else {
		printf("Medida %.2f dentro do limite estabelecido.", medida_pol);
	}

	return(0);
}
