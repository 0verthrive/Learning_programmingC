#include <stdio.h>

/*variáveis*/
int minima, maxima;
float media;
int main (){

	/*entrada*/

	printf("Informe a quantidade mínima de peças em estoque: ");
	fflush(stdin);
	scanf("%d", &minima);

	printf("\nInforme a quantidade maxíma de peças em estoque: ");
	fflush(stdin);
	scanf("%d", &maxima);

	while(maxima <= minima){
		printf("O valor da quantidade minima não deve ser maior que a maxima");

	printf("\n\nInforme a quantidade maxíma de peças em estoque: ");
	fflush(stdin);
	scanf("%d", &maxima);

	}

	/*Processamento*/
	media =(minima + maxima)/2;

	/*saída*/
	printf("A média do estoque é:%.1f", media);




	return(0);
}
