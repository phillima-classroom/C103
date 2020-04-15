#include<stdio.h>
#include<stdlib.h>

//cabecalho da funcao que faz a troca de valores de endereco. Ela recebe dois "ponteiros de ponteiros"
void troca(int**,int**);

int main(){
	
	int a = 1, b = 2;
	int* pa = &a;
	int* pb = &b;
	
	//Imprimindo os valores de a e b pelos ponteiros
	printf("Valor de a: %d e b: %d\n", *pa,*pb);
	
	//Chama a funcao "troca" passando o endereco do ponteiro pa e pb 
	troca(&pa,&pb);
	
	puts("Valores de enderecos trocados");
	
	printf("Valor de a: %d e b: %d\n", *pa,*pb);
	
	return 0;
}

void troca(int** end1, int** end2){
	
	int* endTemp = *end1;
	
	*end1 = *end2;
	*end2 = endTemp;
	
	
}
