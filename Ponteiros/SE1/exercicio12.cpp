#include <iostream>
#include <cstdlib>

using namespace std;

void somaValoresNoVetor(int* vetor, int tamVetor){

    int soma = 0;
    cout << soma << endl;
    for(int i = 0;i < tamVetor; i++){
        soma += vetor[i];
    }

    cout << "Soma dos valores do vetor: " << soma << endl;

}

int main(){

    int tamVetor;

    cout << "Qual sera o tamanho do vetor?: ";
    cin >> tamVetor;
   
    int* vetor = (int*)malloc(tamVetor*sizeof(int));

    //Preenchendo os dados do vetor
    for(int i = 0; i < tamVetor; i++){
        cout << "Digite o valor para ocupar a posica " <<i << ": ";
        cin >> vetor[i];
    }

    somaValoresNoVetor(vetor,tamVetor);

    free(vetor);
       
    return 0;

}