#include<stdio.h>


void Impares(int vetor[], int tamanho){
	printf("Valores impares:");
	int i;
	
	for(i = 0;i < tamanho;i++){
		if (vetor[i] % 2 !=0){
			printf("%d ",vetor[i]);
		}
	}
}

int main(){

	int vetor[5], i;
	
	printf("Digite seu vetor de 5 valores:\n");
	for(i = 0; i < 5; i++){
		printf("Digite o valor do vetor em valor %d: ",i);
		scanf("%d",&vetor[i]);
	}
	
	int tamanho = sizeof(vetor) / sizeof(vetor[0]);
	
	Impares(vetor,tamanho);
	
	
	system ("Pause");
	return 0;
	

}
