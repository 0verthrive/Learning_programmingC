#include <stdio.h>

/*variável*/
int num;

int main(){
/*entrada*/
	printf("Informe um número: ");
	fflush(stdin);
	scanf("%i", &num);

/*processamento e saída*/
	if(num %2 == 0 && num > 0){
		printf("O número %i é par e positivo.\n", num);
	}
	else if (num %2 == 0 && num < 0){
		printf("O número %i é par e negativo.\n", num);
	}
	else if(num %2 != 0 && num > 0){
		printf("O número %i é ímpar e positivo.\n", num);
	}
	else if (num %2 != 0 && num < 0){
		printf("O número %i é ímpar e negativo.\n", num);
	}

	return(0);
}
