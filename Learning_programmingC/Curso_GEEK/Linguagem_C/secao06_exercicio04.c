#include <stdio.h>
#include <ctype.h>

float altura, peso_ideal;
char sexo;

int main(){
	/*Entrada*/
	printf("Qual a sua altura?");
	fflush(stdin);
	scanf("%f", &altura);
	gets(stdin);

	printf("Qual seu sexo?");
	fflush(stdin);
	scanf("%c", &sexo);

	/*processamento e saída*/
	if(tolower(sexo)=='f'){
		peso_ideal = (62.1*altura)-44.7;
		printf("Seu peso ideal é: %.2fkg", peso_ideal);
		}
	if(tolower(sexo) == 'm'){
		peso_ideal = (72.7*altura)-58;
		printf("seu peso ideal é: %.2fkg", peso_ideal);
		}
	if(tolower(sexo) != 'm' && tolower(sexo) != 'f'){
		printf("\nSexo não identificado!");
		}

	return(0);
}
