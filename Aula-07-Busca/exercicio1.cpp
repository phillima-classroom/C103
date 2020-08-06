#include <iostream>

using namespace std;

int buscaSequencial(int* v, int tam, int elemento){

    for (int i = 0; i < tam; i++){
        if(v[i]==elemento){
            return i;
        }
    }
    return -1;//Se o for encerrar significa que o valor nao foi encontrado
}

int main(){

    int vetor[] = {10,9,65,34,15,46,90,3,2};

    //Calculo do tamanho do vetor
    int tam = sizeof(vetor)/sizeof(int);

    //Buscando o 15
    int indice = buscaSequencial(vetor,tam,15);
    if(indice != -1){
        cout << "Valor 15 encontrado na posicao: " << indice << endl;
    }
    else{
        cout << "Valor 15 nao foi encontrado." << endl;
    }

    //Buscando o 23
    indice = buscaSequencial(vetor,tam,23);
    if(indice != -1){
        cout << "Valor 23 encontrado na posicao: " << indice << endl;
    }
    else{
        cout << "Valor 23 nao foi encontrado." << endl;
    }
    return 0;

}