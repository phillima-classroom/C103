#include <iostream>

using namespace std;

int buscaMaiorIterativo(int* vetor, int tam){
    
    //Define um valor inicial negativo.
    int maior = -1;
    for(int i = 0; i < tam; i++){
        if(vetor[i] > maior)
            maior = vetor[i];
    }
    return maior;
}

int buscaMaiorRecursivo(int *vetor, int tam, int maior, int i){
   
    if(tam == 1)
        return vetor[0];
    else if(i == tam)
        return maior;
    else if(vetor[i] > maior)
        return buscaMaiorRecursivo(vetor,tam,vetor[i],i+1);
    else 
        return buscaMaiorRecursivo(vetor,tam,maior,i+1);
}

int main(){

    int vetor[] = {2,7,78,34,12,34,90,7,67,23,56};

    int tam = sizeof(vetor)/sizeof(int);

    cout << "Versao iterativa: ";
    cout << buscaMaiorIterativo(vetor, tam) << endl;

    cout << "Versao recursiva: ";
    cout << buscaMaiorRecursivo(vetor, tam, -1, 0) << endl;
    
    return 0;

}
