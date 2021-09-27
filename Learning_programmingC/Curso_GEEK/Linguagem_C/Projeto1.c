#include <stdio.h>

/*entrada*/
float p1, p2, p3, p4, p5, soma, media;
/*Processamento*/
int main(){
	printf("Informe sua nota 1:");
	fflush(stdin);
	scanf("%f", &p1);

	printf("\nInforme sua nota 2:");
	fflush(stdin);
	scanf("%f", &p2);

	printf("\nInforme sua nota 3:");
	fflush(stdin);
	scanf("%f", &p3);

	printf("\nInforme sua nota 4:");
	fflush(stdin);
	scanf("%f", &p4);

	printf("\nInforme sua nota 5:");
	fflush(stdin);
	scanf("%f", &p5);

		soma=p1+p2+p3+p4+p5;
		media=soma/5;
/*Saída*/
			printf("\nSua nota final é: %.1f", media);

	return(0);
}
