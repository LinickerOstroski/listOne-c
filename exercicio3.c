#include <stdio.h>

int Maior(int vetor[], int tamanho) {
    int maior = vetor[0], i;  
    
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];  
        }
    }
    return maior;
}

int main() {
	
	int vetor[] = {9,2,3,8,5,6},tamanho,maiorNumero;

	tamanho = sizeof(vetor) / sizeof(vetor[0]);

  	maiorNumero = Maior(vetor, tamanho);
    
    printf("\nO maior valor no vetor: %d", maiorNumero);
    
    return 0;
}
