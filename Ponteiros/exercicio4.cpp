#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int* v = (int*) malloc(5 * sizeof(int));
	
	v[3] = 30;
	
	cout << "Valor de v[3]: "<< v[3] << " e valor de *(v+3): " << *(v+3) << endl; //v[3] e *(v+3) sao equivalente. Ambos acessam o contedo da terceira posicao do vetor
	
	cout << "Valor de &v[3]: "<< &v[3] << " e valor de v+3: " << v+3 << endl; //v[3] e *(v+3) sao equivalente. Ambos acessam o contedo da terceira posicao do vetor

	//&v[3] eh o endereco da terceira posicao do vetor. E v+3 avanca o ponteiro v em 3 posicoes. Assim v+3 tambem eh o endereco da terceira posicao do vetor.
	
	free(v);

	return 0;

}

