/*Faça um programa que leia um nome de usuário e a sua senha.
 * E não aceite a senha igual ao nome do usuário, mostrando uma mensagem de erro e voltando a pedir as informações.*/
#include <stdio.h>

/*Variáveis*/
/*No C, o char só reconhece letras, se não for colocado como vetor (para limitar espaço), será capitado apenas a primeira letra*/
char nome[10], senha[10];

int main()
{
/*Entradas*/
	printf("Informe um nome: ");
	fflush(stdin);
	scanf("%s", &nome[10]);
	printf("Informe uma senha: ");
	fflush(stdin);
	scanf("%s", &senha[10]);

/*Verificação e processamento*/
	/*strcmp é a 'string compare' do C, usado para a comparação de frases*/
	while(strcmp(senha, nome) == 0)
	{
		printf("\nEssa senha não é muito segura\nEscolha uma senha diferente do nome de login!\n");
		printf("Informe uma nova senha: ");
		fflush(stdin);
		scanf("%s", &senha[10]);
	}

/*Saída*/
	printf("Cadastro realizado com sucesso!");

return(0);
}
