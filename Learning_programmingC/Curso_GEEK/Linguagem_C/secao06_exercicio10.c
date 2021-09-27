#include <stdio.h>
/*variável*/
int idade, espera=0;

int main(){
/*Entrada*/
	printf("Para saber sua classe competitiva, informe a sua idade: ");
	fflush(stdin);
	scanf("%i", &idade);

/*Processamento e saída*/
	if(idade >= 5 && idade <= 7){
		printf("A classe competitiva para a idade %i é: infantil-a", idade);
	}
	else if(idade >= 8 && idade <= 11){
		printf("A classe competitiva para a idade %i é: infantil-b", idade);
	}
	else if(idade >= 12 && idade <= 13){
		printf("A classe competitiva para a idade %i é: juvenil-a", idade);
	}
	else if(idade >= 14 && idade <= 17){
		printf("A classe competitiva para a idade %i é: juvenil-b", idade);
	}
	else if(idade >= 18){
		printf("A classe competitiva para a idade %i é: adulto", idade);
	}
	else{
		espera = 5 - idade;
		printf("Não permitido a participação de menores de 5 anos. Daqui %i anos, poderá participar!", espera);
	}
	return(0);
}
