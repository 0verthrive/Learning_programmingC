#include <stdio.h>

/*Variável*/
char resp;

int main (){

	printf("Você gosta de bala de cereja? S/N ");
	fflush(stdin);
	scanf("%c", &resp);

	if (resp == 's' || resp == 'S')
	printf("Abra a embalagem, discarte no lixo e chupe.");

	else if (resp == 'n' || resp == 'N')
	printf("Que pena, não poderá chupar está bala");



return(0);
}
