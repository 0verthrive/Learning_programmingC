/*Sua organização acaba de contratar um estagiário para trabalhar no Suporte de Informática,
com a intenção de fazer um levantamento nas sucatas encontradas nesta área.
*A primeira tarefa dele é testar todos os, cerca de 200, mouses que encontram lá,
testando e anotando o estado de cada um deles, para verificar o que se pode aproveitar deles.
*Foi requisitado que você desenvolva um programa para registrar este levantamento.
*O programa deverá receber um número indeterminado de entradas, cada um contendo:
*um número de identificação do mouse e o tipo de defeito:
*- necessita da esfera;
*- necessita de limpeza;
*- necessita trocar o cabo ou conector;
*- quebrado ou inutilizado;
*Uma identificação igual a zero encerra o programa.
*Ao final o programa deverá emitir o seguinte relatório:
*Quantidade de mouses:
*Situação/quantidade total/percentual*/

/*biblioteca*/
#include <stdio.h>

/*Variáveis*/
int id, def, esfera = 0, limp = 0, cabo = 0, quebrado = 0, quant_total = 0;

int main()
{
	/*Do vai executar primeiro e verificar por último*/
	do
	{
		/*Entrada*/
	printf("Informe o código de identificação do equipamento:\n");
	fflush(stdin);
	scanf("%i", &id);

	/*Verificação se o código é diferente de 0 antes de executar (exerce a mesma função que o while que se encontra no final da estrutura)*/
	 if(id != 0)
	 {
	quant_total++;
	printf("Informe o defeito do equipamento: \n");
	printf("1 - Necessita da esfera\n2 - Necessita de limpeza\n3 - Necessita troca de cabo ou condutor\n4 - Quebrado ou inutilizado\n0 - encerra o programa\n");
	fflush(stdin);
	scanf("%i", &def);
		/*Em cada caso escolhido será somado +1, para ter a quantidade total no final de cada situação*/
		switch(def)
		{
			case 1 :
			{
				esfera += 1;
			break;
			}
			case 2 :
			{
				limp += 1;
			break;
			}
			case 3 :
			{
				cabo += 1;
			break;
			}
			case 4 :
			{
				quebrado += 1;
			break;
			}
			case 0 :
			{
				id = 0;
			break;
			}
			/*Ele retornará ao menu de opções*/
			default :
			{
				printf("\nOpção inválida, tente novamente.\n");
				break;
			}
		}

	 }
	}
	/*Fim da estrutura do/while, aqui será verificado se o número foi diferente de 0, se igual, encerrará o loop e mostrará o relatório*/
	while(id != 0);

/*Saída*/
	/*Por um bug no eclipse, as linhas alinhadas ficaram desconfiguradas no console*/
	printf("===================================Resultado======================================\n");
	printf("Situação		|	quantidade total	|	percentual \n");
	printf("1- Esfera		|		%i		|	%.2f%%		\n", esfera, (float)(esfera*100)/quant_total);
	printf("2- Limpeza		|		%i		|	%.2f%%		\n", limp, (float)(limp*100)/quant_total);
	printf("3- Cabo/condutor	|		%i		|	%.2f%%		\n", cabo, (float)(cabo*100)/quant_total);
	printf("4- Quebrado		|		%i		|	%.2f%%		\n", quebrado, (float)(quebrado*100)/quant_total);
	printf("===================================================================================\n");
	printf("Quantidade total: %i", quant_total);
	/*(float) transforma o a variável do tipo inteiro em real, pode ser feito o contrário também.*/
return(0);
}
