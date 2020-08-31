#include <iostream>

using namespace std;

//prototipo da funcao
void mostraVetorFloat(float*);

int main(){

    float vetorFloat[5];

    for(int i = 0; i < 5; i++){
        cout << "Entre com o valor do float para a posicao:" << i << " : ";
        cin >> vetorFloat[i]; 
    }
    
    mostraVetorFloat(vetorFloat);

    return 0;
}

void mostraVetorFloat(float* vetorFloat){
    
    
    for (int i = 0; i < 5; i++){
        cout << "Valor do vetor na posicao " << i << ": " << vetorFloat[i] << endl;
        cout << "Endereco da posicao " << i << ": " << vetorFloat+i << endl;
    }
    
}