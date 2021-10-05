/*Faça um programa que carregue um vetor com dez números inteiros.
 *Mostre o vetor na ordem inversa a que foi digitado.*/
/*biblioteca*/
#include <stdio.h>

/*variável*/
int vetor[10], i = 0;

/*função main*/
int main()
{
	/*Entrada*/
	for(i = 0; i < 10; i++)
	{
		printf("Informe valor: \n");
		fflush(stdin);
		scanf("%i", &vetor[i]);
	}
	for (i = 9; i >= 0; i--)
	{
		printf("%i\n", vetor[i]);
	}

return(0);
}
