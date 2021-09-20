#include <stdio.h>

/*variável*/
float altura, peso_ideal;

int main(){
	/*entrada*/
	printf("Informe sua altura: ");
	fflush(stdin);
	scanf("%f", &altura);

	/*processamento*/
	peso_ideal = (72.7 * altura) - 58;

	/*saída*/
	printf("O seu peso ideal seria: %2.fkg", peso_ideal);

	return(0);
}
