#include <iostream>

using namespace std;

int buscaBinaria(int* v, int tam, int elemento){

    int meio, inicio, fim;
    inicio = 0;
    fim = tam-1;
    
    while(inicio <= fim){
        meio = (inicio + fim)/2;
        if(v[meio]==elemento){
            return meio;
        }else if(v[meio] > elemento){//Elemento do meio eh maior. Busca na metade inferior do vetor
            fim = meio - 1; 
        }else{//Elemento do meio eh menor. Busca na metade superior do vetor
            inicio = meio + 1;
        }
    }

    return -1;//Se o for encerrar significa que o valor nao foi encontrado
}

int main(){

    //Lembre-se. O vetor deve estar ordenado
    //para a busca binaria.
    //Ou voce mesmo pode ordenar :)
    int vetor[] = {1,8,12,22,43,65,72};

    //Calculo do tamanho do vetor
    int tam = sizeof(vetor)/sizeof(int);

    //Buscando o 23
    int indice = buscaBinaria(vetor,tam,23);
    if(indice != -1){
        cout << "Valor 23 encontrado na posicao: " << indice << endl;
    }
    else{
        cout << "Valor 23 nao foi encontrado." << endl;
    }
  
    return 0;
}