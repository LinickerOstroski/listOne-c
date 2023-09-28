#include<stdio.h>
//#include<stdlib.h>

int somando(int x[],int y){
	int soma,i;
	for(i = 0; i < y; i++){
		soma += x[i];
	}
	return soma;
}


int main(){
	int n,i,vetor[100];
	printf("Digite um valor para N:\n");
	scanf("%d",&n);
	for (i = 0; i < n; i++){
		printf("[INDEX %d]Digite um numero: ",i);
		scanf("%d",&vetor[i]);	
	}
	printf("Resultado: %d",somando(vetor,n));
	return 0;
}
