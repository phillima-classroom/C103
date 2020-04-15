#include <stdlib.h>
#include <stdio.h>

void mostrarVetor(int*v, int tam){
	
	for(int i = 0; i < tam; i++)	
		printf("No endereco v+%d: %p temos o valor: %d\n",i, v+i, *(v+i));
	
}

int main(){
	
	int* v = (int*) malloc(4*sizeof(int));
	v[0] = 4;
	v[1] = 3;
	v[2] = 2;
	v[3] = 1;
	
	mostrarVetor(v,4);
	
	free (v);
	return 0;
}
