#include <iostream>

using namespace std;

int buscaSequencialOrdenada(int* v, int tam, int elemento){

    for (int i = 0; i < tam; i++){
        if(v[i]==elemento){
            return i;
        }else{
            if(elemento < v[i]){ //Elemento não se encontra no vetor
                return -1;//A busca eh interrompida
            }
        }
    }
    return -1;//Se o for encerrar significa que o valor nao foi encontrado
}

int main(){

    //Lembre-se. O vetor deve estar ordenado
    //para a busca sequencial ordenada.
    //Ou voce mesmo pode ordenar :)
    int vetor[] = {1,8,12,22,43,65,72};

    //Calculo do tamanho do vetor
    int tam = sizeof(vetor)/sizeof(int);

    //Buscando o 23
    int indice = buscaSequencialOrdenada(vetor,tam,23);
    if(indice != -1){
        cout << "Valor 23 encontrado na posicao: " << indice << endl;
    }
    else{
        cout << "Valor 23 nao foi encontrado." << endl;
    }
  
    return 0;

}