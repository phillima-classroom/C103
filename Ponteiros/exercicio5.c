#include <stdlib.h>
#include <stdio.h>

void funcao(int*v, int n){
	
	int *c;
	
	for(c = v; c < v+n; c++) //imprime os primeiros n elementos armazenados em v
		printf("%d\n", *c);
	
}

int main(){
	
	int x[] = {1,2,3,4,5,6};
	
	funcao(x,3);
	
	return 0;
}
