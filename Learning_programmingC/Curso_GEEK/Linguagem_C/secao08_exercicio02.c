/*Escreva um algoritmo que leia dois vetores de 10 posições e faça a soma dos elementos de mesmo indice,
colocando o resultado em um terceiro vetor.
*Mostre o vetor resultante.*/

/*Biblioteca*/
#include <stdio.h>

/*Variáveis*/
int vet1[10], vet2[10], vet3[10], i = 0;
int main()
{
/*Entradas*/
	for(i = 0; i < 10; i++)
	{
		printf("Informe o primeiro valor: \n");
		fflush(stdin);
		scanf("%i", &vet1[i]);

		printf("Informe o segundo valor: \n");
		fflush(stdin);
		scanf("%i", &vet2[i]);

		vet3[i] = vet1[i] + vet2[i];
	}
	for(i = 0; i < 10; i++)
	{
		printf("%i + %i = %i\n", vet1[i], vet2[i], vet3[i]);
	}

	return(0);
}

