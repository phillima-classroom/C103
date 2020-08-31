#include <iostream>

using namespace std;

void somaValoresNoVetor(int* vetor, int tamVetor){

    int soma = 0;
    for(int i = 0;i < tamVetor; i++){
        soma += vetor[i];
    }

    cout << "Soma dos valores do vetor: " << soma << endl;

}

int main(){

    int tamVetor;

    cout << "Qual sera o tamanho do vetor?: ";
    cin >> tamVetor;
   
    int* vetor = new int[tamVetor];

    //Preenchendo os dados do vetor
    for(int i = 0; i < tamVetor; i++){
        cout << "Digite o valor para ocupar a posica " <<i << ": ";
        cin >> vetor[i];
    }

    somaValoresNoVetor(vetor,tamVetor);

    delete[] vetor;
       
    return 0;

}