#include <stdio.h>

int contarRepeticoes(int tamanho, int vetor[tamanho], int numero) {
    int contador = 0, i;
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] == numero) {
            contador++;
        }
    }
    return contador;
    
}

int main() {
    int vetor[] = {5, 2, 8, 1, 5, 4, 5, 8}, i, num;
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    
     printf("Vetor: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
	printf("Digite qual numero deseja procurar desse vetor:");
	scanf("%d",&num);
	
	printf("\n");

    int repeticoes = contarRepeticoes(tamanho, vetor, num);

    printf("O numero %d repetiu %d vezes no vetor\n", num, repeticoes);

    return 0;
}

