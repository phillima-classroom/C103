#include <iostream>

using namespace std;

void mostrarVetor(int*v, int tam){
	
	for(int i = 0; i < tam; i++)	
		cout << "No endereco v+" << i << ": " << v+i << " temos o valor " << *(v+i) << endl;
	
}

int main(){
	
	int* v = new int[4];
	v[0] = 4;
	v[1] = 3;
	v[2] = 2;
	v[3] = 1;
	
	mostrarVetor(v,4);
	
    delete[] v;
    
	return 0;
}