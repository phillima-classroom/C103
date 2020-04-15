#include <iostream>

using namespace std;

//Chama 
void selectionSort(int *V, int N){
   
    int menor, aux;
    for (int i = 0; i < N - 1; i++){
        menor = i; //indice do menor valor. Estamos "selecionando" no array o melhor valor para ficar nessa posição
        for(int j = i + 1; j < N; j++){
            if(V[j] < V[menor]){
                menor = j; //A posição do valor menor que "menor" atual. Salvamos essa posição.
            }
        }
        if(menor != i){ //Se "menor" for diferente de "i" quer dizer que encontramos no vetor um valor menor que o da posição "i"
            aux = V[i]; //Fazemos a troca desses valores. Ou seja, "selecionamos" o valor na posição "menor" e colocamos ele na posição "i".
            V[i] = V[menor];
            V[menor] = aux;
        }
    }
}

int main(){
    //Definido o valor do array fora de ordem
    int valores[] = {67,72,13,1,2};

    //Calcula o tamanho do array
    int tam = sizeof(valores)/sizeof(valores[0]);
    
    //imprimir este array fora de ordem
    cout << "Valor do array antes ordenacao." << endl;
    for (int i = 0; i < tam; i++){
        cout << valores[i] << endl;
    }

    selectionSort(valores, tam);

    //imprime o array após ser ordenado
    cout << "Valor do array apos ordenacao." << endl;
    for (int i = 0; i < tam; i++){
        cout << valores[i] << endl;
    }
}