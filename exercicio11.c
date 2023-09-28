#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // estou utilizando o INT max e min para achar o maior e menor valor.

int main(void){
	
	float notas[5],somaFinal,menorValor = INT_MAX,maiorValor = INT_MIN, VM;
	int i;
	
	printf("\t\t### Atidade 11 ###\n");
	printf("Digite as cinco notas\n");
	
	for (i=0;i<5;i++){
		printf("Nota [%d]:",i);scanf("%f",&notas[i]);	
	}
	
	for(i=0;i<5;i++){
		if (notas[i] < menorValor){
            menorValor = notas[i];
        }
	}
	for(i=0;i<5;i++){
		if (notas[i] > maiorValor){
            maiorValor = notas[i];
        }
	}


	VM = maiorValor + menorValor;
	somaFinal = notas[0] + notas[1] + notas[2] + notas[3] + notas[4] - VM;
	printf("NOTA FINAL: %.1f\n",somaFinal);
	
	//printf("%.1f\n",menorValor);
	//printf("%.1f\n",maiorValor);
	
	return 0;
}
