#include <iostream>

using namespace std;

int buscaBinariaIterativa(int* vetor, int valor, int tam){
    
    int inicio = 0;
    int fim = tam - 1;
    int meio;
    while(inicio <= fim){
        meio = (inicio + fim)/2;
        if(vetor[meio]== valor)
            return meio;
        else if (vetor[meio] > valor)
            fim = meio - 1;
        else
            inicio = meio + 1;
    }

    return -1;

}

int buscaBinariaRecursiva(int* vetor, int valor, int inicio, int fim){
   
    if(inicio > fim)
        return -1;
    int meio = (inicio + fim)/2;
    if(vetor[meio]==valor)
        return meio;
    else if(vetor[meio] > valor)
        return buscaBinariaRecursiva(vetor, valor,inicio,meio - 1);
    else
        return buscaBinariaRecursiva(vetor, valor, meio +1, fim);
}

int main(){
    
    int vetor[] = {2,7,12,34,56,67,72,88,93};
    int tam = sizeof(vetor)/sizeof(int);
    
    int valorParaBuscar = 67;
   
    cout << "Versao iterativa: ";
    cout << buscaBinariaIterativa(vetor,valorParaBuscar, tam) << endl;

    cout << "Versao recursiva: ";
    cout << buscaBinariaRecursiva(vetor,valorParaBuscar, 0, tam) << endl;
    
    return 0;

}
