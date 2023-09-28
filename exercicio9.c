#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	
	char vec[100]; int tamanho, i;
	
	printf("Digite qualquer coisa: ");
	gets(vec); tamanho = strlen(vec);
	
	printf("%s possui %d caracteres",vec,tamanho); printf("\n");
	printf("%s ao contrario:",vec);
	
	for (i = tamanho; i >= 0; i--) { // se i = numero de caracteres, enquanto i for maior ou igual a zero, i = i - 1
        printf("%c", vec[i]); 
    }
	
	printf("\n");
	system ("PAUSE");
	return 0;
}
