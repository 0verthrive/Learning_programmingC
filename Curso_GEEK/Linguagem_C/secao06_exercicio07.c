#include <stdio.h>

/*variáveis*/
int indice=0, vetor_n[4], vetor_q[4];

int main(){
/*entrada*/
	while(indice < 4){
	printf("Informe o %iº número: ", indice+1);
	fflush(stdin);
	scanf("%i", &vetor_n[indice]);
	indice++;
	}
	indice=0;
	while(indice < 4){
	vetor_q[indice]= vetor_n[indice]*vetor_n[indice];
	indice++;
	}
	if(vetor_q[2] >= 1000){
	printf("Quadrado do número %i é: %i\n", vetor_n[2], vetor_q[2]);
	}
	else{
	indice=0;
	while(indice < 4){
	printf("Quadrado do número %i é: %i\n", vetor_n[indice], vetor_q[indice]);
	indice++;
	}
	}
	return(0);
}
