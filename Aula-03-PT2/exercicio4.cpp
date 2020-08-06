#include <iostream>

using namespace std;

int main(){

    int* v = new int[5];	
	
	v[3] = 30;
	
	//v[3] e *(v+3) sao equivalente. Ambos acessam o contedo da terceira posicao do vetor
	cout << "Valor de v[3]: "<< v[3] << " e valor de *(v+3): " << *(v+3) << endl; 
	
	//v[3] e *(v+3) sao equivalente. Ambos acessam o contedo da terceira posicao do vetor
	cout << "Valor de &v[3]: "<< &v[3] << " e valor de v+3: " << v+3 << endl; 

	//&v[3] eh o endereco da terceira posicao do vetor. 
	//E v+3 avanca o ponteiro v em 3 posicoes. 
	//Assim v+3 tambem eh o endereco da terceira posicao do vetor.
	
	delete[] v;

	return 0;

}

