#include <iostream>

using namespace std;

//Funcao responsável por criar a heap. O objetivo é ter o pai como o maior elemento.
void criaHeap(int *V, int pai, int fim){
    int aux = V[pai]; //Auxiliar guarda o valor do pai inicial
    int filho = 2 * pai + 1; //Calcula o primeiro filho
    while(filho <= fim){ //Um filho se encontra no vetor?
        if(filho < fim){ //E o outro filho?
            if(V[filho] < V[filho+1]){ //Os dois filhos estão presentes. Qual é maior? 
                filho++; //Garante que iremos comparar o valor do pai com o filho maior.
            }
        }
        if(aux < V[filho]){ //Valor do pai é menor que do filho?
            V[pai] = V[filho]; //O filho virá o novo pai, pois ele é maior
            pai = filho; //Filho passa a ser o novo pai, e o processo se repete
            filho = 2 * pai + 1;
        }else{
            //Caso nenhum filho seja maior,
            // incrementamos o valor para sair do loop "while"
            filho = fim + 1; 
        }
    }
    //O pai atual recebe o valor do pai original 
    //(quando essa função foi chamada)
    V[pai] = aux; 
}


void heapSort(int *V, int N){
    int aux;
    //Cria o heap para a primeira metade do vetor. 
    //Os demais elementos são filhos. Ao final desse processo
    // o pai da árvore é o maior elemento
    for(int i = (N-1)/2; i >= 0; i--){
        criaHeap(V, i, N-1);
    }
    //Começa pegar o pai (que é o primeiro elemento) e colocar
    // na última posição. Decrementamos o "i", pois a última posição já estará ordenada.
    for(int i = N-1; i>= 1; i--){
        aux = V[0];
        V[0] = V[i];
        V[i] = aux;
        criaHeap(V, 0, i-1);
        //Depois de trocarmos os valores (colocar o pai no fim do vetor),
        // recriamos a heap, para buscar o maior elemento.
    }
}


int main(){
    //Definido o valor do array fora de ordem
    int valores[] = {23, 4, 67, -8, 90, 54, 21};

    //Calcula o tamanho do array
    int tam = sizeof(valores) / sizeof(int);

    cout << "Valor do array antes da ordenacao." << endl;
    for (int i = 0; i < tam; i++){
        cout << valores[i] << " ";
    }
    cout << endl;

    heapSort(valores, tam);

    cout << "Valor do array apos a ordenacao." << endl;
    for (int i = 0; i < tam; i++){
        cout << valores[i] << " ";
    }
    cout << endl;
}