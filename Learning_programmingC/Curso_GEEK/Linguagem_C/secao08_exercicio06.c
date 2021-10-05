/*Faça um programa que receba um código numérico inteiro e um vetor de cinco posições de números reais.
*Se o código for zero termine o programa.
*Se o código for 1, mostre o vetor na ordem direta.
*Se o código for 2, mostre o vetor na ordem inversa.*/

/*biblioteca*/
#include <stdio.h>

/*variáveis*/
int cod, i = 0, cont = 0;
float vetor[5];

int main()
{
	/*entrada*/


do
{
	printf("Informe o código: ");
	fflush(stdin);
	scanf("%d", &cod);

	if (cod !=0)
	{
	switch(cod)
	{
		case 1 :
		{
			for(i = 0; i < 5; i++)
			{
				printf("Informe o valor para o vetor %d/5: ", (i+1));
				fflush(stdin);
				scanf("%f", &vetor[i]);
			}
			for(i = 0; i < 5; i++)
			{
				printf("%.1f informado na posição %i\n", vetor[i], i+1);
			}
		break;
		}
		case 2 :
		{
			for(i = 0; i < 5; i++)
			{
				printf("Informe o valor para o vetor %d/5: ", (i+1));
				fflush(stdin);
				scanf("%f", &vetor[i]);
				cont = cont + 1;
			}

			for(i = 4; i >= 0; i--)
			{
				printf("%.1f se encontra na posição %d/5\n", vetor[i], i+1);
			}
		break;
		}
		default :
		{
			printf("Código %d inválido, tente novamente\n", cod);
		}
	}
	}
}
while (cod != 0);

	printf("Programa encerrado!!");

	return(0);
}
