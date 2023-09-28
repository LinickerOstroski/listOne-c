#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    srand(time(NULL));
    
    int tamanhoVetor; 
    
    printf("\n\t\t\t\t\t\t ### Atividade 6 ### \n");
    printf("Digite o tamanho do vetor:");
    scanf("%d",&tamanhoVetor);
    
    int vetor[tamanhoVetor], i, numeroProcurado,tamanho; 
    int encontrado = 0;


    for (i = 0; i < tamanhoVetor; i++) {
        vetor[i] = rand() % 100 + 1; // numeros aleatorios de 0 a 100.
    }

    printf("Vetor gerado com %d elementos:\n",tamanhoVetor);
    for (i = 0; i < tamanhoVetor; i++) {
        printf("%d ", vetor[i]); 
    }
    
    tamanho = sizeof(vetor) / sizeof(vetor[0]);
    
    printf("\n");
  	printf("Digite algum numero:");
  	scanf("%d",&numeroProcurado);
    
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] == numeroProcurado) {
            encontrado = 1;
            break; // saiu do loop.
        }
    }
    
     if (encontrado) {
     	printf("\n");
        printf("#### O numero %d se encontra no vetor ####\n", numeroProcurado);
    } else {
    	printf("\n");
        printf("#### O numero %d ausente no vetor ####\n", numeroProcurado);
    }
    
    return 0;
    system ("PAUSE");
}

