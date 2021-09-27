#include <stdio.h>
/*variável*/
int num;

int main(){

	printf("Informe um número:");
	fflush(stdin);
	scanf("%i", &num);
	if(num < 100)
		printf("0");

	else
		printf("%i", num);


	return(0);
}
