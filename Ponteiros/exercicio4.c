#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int* v = (int*) malloc(5 * sizeof(int));
	
	v[3] = 30;
	
	printf("Valor de v[3]: %d e *(v+3): %d\n", v[3], *(v+3)); //v[3] e *(v+3) sao equivalente. Ambos acessam o contedo da terceira posicao do vetor
	
	printf("Valor de &v[3]: %p e v+3: %p\n", &v[3], v+3);
	
	//&v[3] eh o endereco da terceira posicao do vetor. E v+3 avanca o ponteiro v em 3 posicoes. Assim v+3 tambem eh o endereco da terceira posicao do vetor.
	
	free (v);
	return 0;
}
