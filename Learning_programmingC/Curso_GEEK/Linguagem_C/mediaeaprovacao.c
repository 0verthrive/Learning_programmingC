#include <stdio.h>

/*variáveis*/

 float p1, p2, p3, p4, media;

 /*corpo do programa*/
 int main(){

/*entrada*/
	 printf("Qual o valor da prova 1:");
	 fflush(stdin);
	 scanf("%f", &p1);

	 printf("Qual o valor da prova 2:");
	 fflush(stdin);
	 scanf("%f", &p2);

	 printf("Qual o valor da prova 3:");
	 fflush(stdin);
	 scanf("%f", &p3);

	 printf("Qual o valor da prova 4:");
	 fflush(stdin);
	 scanf("%f", &p4);

/*processamento*/
	 media = (p1+p2+p3+p4)/4;

/*saída*/
	 printf("A média do estudante é: %.2f", media);
	 	 if(media >= 5)
	 		 printf("\nEstudante aprovado!");
	 	 else if (media < 5)
	 		 printf("\nEstudante reprovado!");

return(0);
 }
