/*Faça um programa que carregue um vetor com dez números inteiros.
Calcule e mostre os números superiores a 50 e suas respectivas posições.
Mostrar mensagem se não existir nenhum número nesta condição.*/

/*biblioteca*/
#include <stdio.h>

/*variáveis*/
int vetor[10], i = 0;
char maior_50 = 0;
int main()
{
	/*entradas*/
	for(i = 0; i < 10; i++)
	{
		printf("Informe valores %d/10: ", (i+1));
		fflush(stdin);
		scanf("%d", &vetor[i]);

	}
	for(i = 0; i < 10; i++)
	{
		/*processamento e saída*/
		if(vetor[i] >= 50)
		{
			printf("O valor %d está na posição %d\n", vetor[i], i);
			maior_50 = 1;
		}

	}
		/*condição para caso não tenha nenhum valor acima de 50*/
		if (maior_50 < 1)
			{
				printf("Não há números maiores ou iguais a 50");
			}

	return(0);
}
