/*Faça um algoritmo que carregue um vetor de 9 elementos inteiros
e em seguida armazene em um vetor apenas os números pares maiores que 0.
*No final deve mostrar os elementos do vetor na tela.*/

#include <stdio.h>

/*Variáveis*/
int vetor[9], i = 0, pares[9], cont = 0;


int main(void)
{
/*entrada*/
	for(i = 0; i <= 9; i++)
	{
	printf("Informe valores inteiros: ");
	fflush(stdin);
	scanf("%i", &vetor[i]);
		if(vetor[i] %2 == 0)
		{
			if(vetor[i] > 0)
			{
				pares[cont] = vetor[i];
				cont = cont + 1;
			}
		}
	}
	printf("Os valores pares informados são:\n");
	for(int i = 0; i < cont; i++)
	{
		printf("%i\n", pares[i]);
	}


	return(0);
}
