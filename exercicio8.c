#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int i, n, cont,vec[100];
	
	printf("n = numero de vezes que o dado foi lancado\n");
	printf("Digite um numero para n");
	scanf("%d",&n);
	
	for(i = 0; i < n; i++){

		printf("Resultado do dado no [%d] lancamento: ",i);
		scanf("%d",&vec[i]);
		
		if(vec[i] > 6)
			vec[i] = 6;
	}
		for(i = 0; i < n; i++){

		printf("O resultado do dado no lancamento [%d] foi: [%d]\n",i,vec[i]);
	}
	
	return 0;
}
