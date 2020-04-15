#include <stdio.h>
#include <stdlib.h>



int main() {
	
	//Variavel inteira, com valor 20;
	int x = 22;
	
	//p eh um ponteiro que guarda o endereco onde armazenamos a variavel x
	int* p = &x;
	
	printf("O valor de x: %d\n", x); //imprime o valor de x
	
	printf("O endereco onde x esta salvo: %x\n",p);// imprime o endereco de x, salvo no ponteiro p
	
	
	(*p)++; //Primeiro iremos pegar o conteudo de p, e depois iremos incementar esse valor. Resultado sera 23
	
	printf("Novo conteudo apontado p %d\n", *p);
	
	
	p++; //incrementar o valor de p. Como p eh um ponteiro para inteiro, ira incrementar 4 posicoes de memoria 4bytes
	
	printf("O valor de p++ %x\n", p);
	
	
	*(p++); //iremos incrementar o valor de p (endereco), depois iremos acessar o conteúdo.
			//Porém como estamos acessando uma área desconhecida, o valor do conteudo pode ser imprevisivel


	return 0;
	
	
}
