#include <stdio.h>
#include <string.h>

int main() {
    
	char text[1000];
    int i, tamanho;
    
    printf("Escreva a mensagem codificada: ");
	gets(text); 

    tamanho = strlen(text);

    for (i = 0; i < tamanho; i++) {
        if (text[i] == 'p' || text[i] == 'P') {
            i++;
        }
        printf("%c", text[i]);
    }

    return 0;
}

/*

	Outro modo que tentei fazer
	
#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	char text[100]; int i, tamanho;
	char caractereAntigo = 'p'; char caractereNovo = ' ';
	
	printf("Escreva a mensagem codificada:");
	gets(text);
	tamanho = strlen(text);
	
	for(i = 0; i < tamanho;i++){
		if(text[i] == caractereAntigo){
			text[i] = caractereNovo;
		}
	}
	
	printf("Mensagem: %s",text);
	
	return 0;
	
}
*/
