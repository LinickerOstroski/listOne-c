#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
	char DNA[50]; 

    printf("Digite a sequencia de bases nitrogenadas"); printf("\n");
    printf("A = Adenina, T = Timina, C = Citosina, G = Guanina:"); 
    scanf("%s",DNA);

    int tamanho = strlen(DNA), i;
	char complementar[51]; 

    for (i = 0; i < tamanho; i++) {
        if (DNA[i] == 'A') {
            complementar[i] = 'T';
        } else if (DNA[i] == 'T') {
            complementar[i] = 'A';
        } else if (DNA[i] == 'C') {
            complementar[i] = 'G';
        } else if (DNA[i] == 'G') {
            complementar[i] = 'C';
        } else {
           
            complementar[i] = 'X'; 
        }
    }
    complementar[tamanho] = '\0';

    printf("Base nitrogenada complementar:\n %s \n",complementar);

    return 0;
}

