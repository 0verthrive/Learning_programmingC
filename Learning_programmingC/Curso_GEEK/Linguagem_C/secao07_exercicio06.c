/*Desenvolva um gerador de tabuada, capaz de gerar a tabuada de qualquer número inteiro entre 1 e 10.
 * O usuário deve informar de qual número ele deseja ver a tabuada.*/
#include<stdio.h>

/*Variáveis*/
int num, tab, i=1;

int main() {
/*Entrada*/
    printf("informe o qual valor deseja ver a tabuada: ");
    fflush(stdin);
    scanf("%i", &num);
/*Verificação da entrada, respeitando as restrições*/
    while(num <= 0 || num >10)
    {
    	printf("Número informado inválido, valor mínimo aceito é 1 e máximo 10.\n");
		printf("Tente novamente: ");
		fflush(stdin);
		scanf("%i", &num);
    }
/*Processamento e saída de dados*/
    while(i <= 10)
    {
    	tab = num*i;
    	printf("%i x %i = %i\n", num, i, tab);

    	i++;
    }

    return 0;
}
