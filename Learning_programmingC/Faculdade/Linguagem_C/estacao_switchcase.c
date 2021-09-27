#include <stdio.h>
#include <stdlib.h>

 int estacao;

 int main(){
	 /*ENTRADA*/
	 printf("Escolha o mês que se encontra: ");
	 fflush(stdin);
	 scanf("%i", &estacao);

	switch(estacao){
	case 1:
		printf("Você se encontra no Verão desde às 12h:59min do dia 21/12");
	break;
	case 2:
		printf("Você se encontra no Verão desde às 12h:59min do dia 21/12");
	break;
	case 3:
		printf("Você se encontra no Verão desde às 12h:59min do dia 21/12\n");
		printf("Mas a partir das 6h:38min do dia 20/03, será Outono");
	break;
	case 4:
		printf("Você se encontra no Outono desde às 6h:38min do dia 20/03");
	break;
	case 5:
		printf("Você se encontra no Outono desde às 6h:38min do dia 20/03");
	break;
	case 6:
		printf("Você se encontra no Outono desde às 6h:38min do dia 20/03\n");
		printf("Mas a partir das 0h:32min do dia 21/06, será Inverno");
	break;
	case 7:
		printf("Você se encontra no Inveno desde às 0h:32min do dia 21/06");
	break;
	case 8:
		printf("Você se encontra no Inverno desde às 0h:32min do dia 21/06");
	break;
	case 9:
		printf("Você se encontra no Inverno desde às 0h:32min do dia 21/06\n");
		printf("Mas a partir das 16h:31min do dia 22/09, será Primavera");
	break;
	case 10:
		printf("Você se encontra na Primavera desde às 16h:31min do dia 22/09");
	break;
	case 11:
		printf("Você se encontra na Primavera desde às 16h:31min do dia 22/09");
	break;
	case 12:
		printf("Você se encontra na Primavera desde às 16h:31min do dia 22/09\n");
		printf("Mas a partir das 12h:59min do dia 21/12, será Verão");
	break;
	default:
		printf("Opção inválida.");
	break;
}
}
