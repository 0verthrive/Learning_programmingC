#include <stdio.h>

int main(){
	for(int contador = 100; contador < 201; contador++){
		if(contador %2 != 0){
			printf("%i\n", contador);
		}
	}
	return(0);
}
