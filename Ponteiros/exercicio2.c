#include <stdio.h>
#include <stdlib.h>

int main() {

	int y, *p, x;
	
	y = 0;
	p = &y; //p recebe o endereco de y
	x = *p; //x recebeo o conteudo apontado por p, ou seja, o valor de y
	x = 4; 
	(*p)++; //acessa o valor do conteudo apontado por p, 0, e depois incrementa. Resultado y = 1.
	x--; //decerementa x. 
	(*p) += x; //O conteudo apontador por p, o valor de y, eh somado com x. Resultado y = y + x, y = 1 + 3, y = 4.
	printf("y = %d\n", y);
	return 0;
}
