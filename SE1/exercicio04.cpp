#include <iostream>

using namespace std;

struct Vetor{
    float x;
    float y;
    float z;
};

//Funcao que soma dois vetores e retorna um "vetor"
Vetor somaVetor(Vetor vet1, Vetor vet2){

    Vetor vetSoma;
    vetSoma.x = vet1.x + vet2.x;
    vetSoma.y = vet1.y + vet2.y;
    vetSoma.z = vet1.z + vet2.z;

    return vetSoma;

}

int main(){

    //A terceira posicao ira salvar o resultado da soma
    Vetor vetores[3];

    for (int i = 0; i < 2; i++){
        cout << "Entre com os valores do vetor " << i+1 << endl;
        cout << "x: ";
        cin >> vetores[i].x;

        cout << "y: ";
        cin >> vetores[i].y;

        cout << "z: ";
        cin >> vetores[i].z; 
    }
    
    vetores[2] = somaVetor(vetores[0], vetores[1]);
    
    cout << "Resultado da soma:" << endl;
    cout << "x:" << vetores[2].x <<endl;
    cout << "y:" << vetores[2].y <<endl;
    cout << "z:" << vetores[2].z <<endl;

    return 0;
}