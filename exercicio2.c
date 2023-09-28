#include <stdio.h>

int Menor(int vetor[], int tamanho) {
    int menor = vetor[0], i;  
    
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];  
        }
    }
    return menor;
}

int main() {
	
	int vetor[] = {8,2,3,4,5,6},tamanho,menorNumero;

	tamanho = sizeof(vetor) / sizeof(vetor[0]);
   
   	printf("O tamanho do vetor é: %d\n",tamanho);
  	menorNumero = Menor(vetor, tamanho);
    
    printf("\nO valor mais baixo no vetor: %d", menorNumero);
    
    return 0;
}

