#include<stdio.h>
#include<stdlib.h>

int mult(int vetor1[], int vetor2[], int n1, int n2){ // função para fazer a multiplicação
	
	int mult;
	
	mult = n1 * n2;

	return mult;
}

int main(void){
	
	int vet1[] = {0}, vet2[] = {0},vet3[] = {0},n1,n2, i,ind1,ind2,x,y,valor,tamanho = 0,resultado; // variáveis
	int repetePrograma = 1;
	
	
	while(repetePrograma = 1){
	
	printf("%d",tamanho);
	
	printf("Digite o valor do tamanho de vet1:"); scanf("%d",&n1); 
	printf("\n");
	printf("Digite o valor do tamanho de vet2:"); scanf("%d",&n2); printf("\n");
	
	for(i = 0; i < n1;++i){
		printf("Digite o valor de vet1 em index [%d]: ",i);
		scanf("%d",&vet1[i]);
	}
	printf(" PROXIMO VETOR \n");
	for(i = 0; i < n2;++i){
		printf("Digite o valor de vet2 em index [%d]: ",i);
		scanf("%d",&vet2[i]);
	}
	
	printf("Qual index de vet1 quer multiplicar?:"); scanf("%d",&ind1); printf("\n");
	x = vet1[ind1];
	printf("Qual index de vet2 quer multiplicar?:"); scanf("%d",&ind2);
	y = vet2[ind2]; printf("multiplica %d por %d: ",x,y);

	resultado = mult(vet1,vet2,x,y);
	printf("%d",resultado);
	
	printf("\n"); printf("TERCEIRO VETOR:");printf("\n"); 	//terceira variável aqui
	
	valor = mult(vet1,vet2,x,y); // valor = multiplicação
	vet3[tamanho] = valor; tamanho = tamanho + 1; // Terceiro Vetor no index tamanho será = valor.
	
	for(i = 0; i < tamanho;++i){
		printf("VETOR 3 index[%d] = [%d]\n",i,vet3[i]);
	}
	
	printf("\n\n\n");
	
}
	return 0;
}
