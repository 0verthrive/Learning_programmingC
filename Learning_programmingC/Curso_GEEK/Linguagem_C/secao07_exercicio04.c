/*Construa um algoritmo que leia 10 valores inteiros e positivos e:
a) Encontre o maior valor;
b) Encontre o menor valor;
c) Calcule a média dos números lidos.*/
#include <stdio.h>

/*variáveis*/
int aux, maior = 0, menor = 99999999, indice, soma = 0;
float media, num;

int main()
{
	/*Entrada*/
	printf("Informe 10 valores inteiros e positivos.\n");

	/*Entradas e processamento*/
	for(indice = 1; indice < 11; indice++)
	{
		printf("Valor %d/10: ", indice);
		fflush(stdin);
		scanf("%f", &num);
		/*Auxiliar para receber o valor informado e transformar em tipo inteiro*/
		aux = num;

		/*Checando se é positivo*/
			if(aux < 0)
			{
				printf("Valor informado não é positivo, tente novamente!\n");
				indice--;
			}
		/*Checando se é inteiro*/
			else if(aux != num)
			{
				printf("Valor informado não é inteiro, tente novamente!\n");
				indice--;
			}
		/*Atribuindo valor para o maior*/
			else if(aux > maior)
			{
				maior = aux;
				soma = soma + aux;
			}
		/*Atribuindo valor para o menor*/
			else if(aux < menor)
			{
				menor = aux;
				soma = soma + aux;
			}
	}
		media = soma/10;
	/*Saída*/
		printf("O menor valor informado:%d \nO maior valor informado:%d \nA media dos valores:%.2f \n", menor, maior, media);

		return(0);
}
