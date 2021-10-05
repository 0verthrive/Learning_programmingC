/*Escreva um algoritmo que leia e mostre um vetor de 20 elementos inteiros, em seguida,
mostre a soma de todos os elementos.*/

/*biblioteca*/
#include <stdio.h>

/*variáveis*/
int vetor[20], i = 0, soma = 0;

/*função main*/
int main()
{
	/*entradas*/
	for(i = 0; i < 20; i++)
	{
		printf("informe valores: %i/20\n", (i+1));
		fflush(stdin);
		scanf("%i", &vetor[i]);

		/*processamento*/
		soma = soma + vetor[i];
	}
	/*saída*/
		printf("A soma de todos os valores informados é: %i", soma);

	return(0);
}
