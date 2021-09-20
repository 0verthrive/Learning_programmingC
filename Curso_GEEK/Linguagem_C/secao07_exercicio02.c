#include <stdio.h>

int main (){
	for(int contador=1; contador < 101; contador++){
			printf("%i\n", contador);

		if(contador %10 == 0){
			printf("%i é multiplo de 10\n", contador);
		}
	}
	return(0);
}
