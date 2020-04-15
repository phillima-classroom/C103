#include <iostream>
#include <chrono>
#include <cstring>

using namespace std;

void selectionSort(int *V, int N){
   
    int menor, aux;
    for (int i = 0; i < N - 1; i++){
        menor = i;
        for(int j = i + 1; j < N; j++){
            if(V[j] < V[menor]){
                menor = j; 
            }
        }
        if(menor != i){ 
            aux = V[i];
            V[i] = V[menor];
            V[menor] = aux;
        }
    }
}

void insertionSort(int *V, int N){

    int atual,j;
    for (int i = 1; i < N; i++){
        atual = V[i]; 
        for(j = i; (j > 0) && (atual < V[j-1]); j--){
            V[j] = V[j-1];
        }
        V[j] = atual;
    }
}

void bubbleSort(int *V, int N){
    int aux, fim = N;
    bool continua = false;
    do
    {
        continua = false;
        for (int i = 0; i < fim - 1; i++){
            if(V[i] > V[i+1]){
                aux = V[i];
                V[i] = V[i+1];
                V[i+1] = aux;
                continua = true;
            }
        }
        fim--;
    } while (continua != false);
}

int main(){

    double tempoMedioBubble = 0;
    double tempoMedioInsertion = 0;
    double tempoMedioSelection = 0;

    int numIter = 10;
    int numElementos = 10000;

    //Declara vetor com numElementos posicoes
    int* vetor1 = new int [numElementos*sizeof(int)];
    int* vetor2 = new int [numElementos*sizeof(int)];
    int* vetor3 = new int [numElementos*sizeof(int)];

    //Utilizando o malloc()
    //Outra opcao
    //int* vetor1 = (int*)malloc(numElementos*sizeof(int));
    //int* vetor2 = (int*)malloc(numElementos*sizeof(int));
    //int* vetor3 = (int*)malloc(numElementos*sizeof(int));

    auto start = chrono::steady_clock::now();
    auto end = chrono::steady_clock::now();
    for(int i = 0; i < numIter; i++){

        srand(time(0));//Gera uma semente nova!
        //preenche vetor com numElementos inteiros aleatorios
        for(int i = 0; i < numElementos; i++){
            vetor1[i] = rand();
        }

        //Fazendo a copia
        memcpy(vetor2, vetor1, numElementos*sizeof(int));
        memcpy(vetor3, vetor1, numElementos*sizeof(int));

        //Bubble
        start = chrono::steady_clock::now();
        bubbleSort(vetor1,numElementos);
        end = chrono::steady_clock::now();
        //Salva tempo bubble
        tempoMedioBubble += chrono::duration_cast<chrono::microseconds>(end - start).count();
        
        //Selection
        //marca inicio
        start = chrono::steady_clock::now();
        selectionSort(vetor2,numElementos);
        end = chrono::steady_clock::now();
        //Salva tempo selection
        tempoMedioSelection += chrono::duration_cast<chrono::microseconds>(end - start).count();

        //Insertion
        start = chrono::steady_clock::now();
        insertionSort(vetor3,numElementos);
        end = chrono::steady_clock::now();
        //Salva tempo insertion
        tempoMedioInsertion += chrono::duration_cast<chrono::microseconds>(end - start).count();
       
    }

    tempoMedioBubble = tempoMedioBubble/10;
    tempoMedioSelection = tempoMedioSelection/10;
    tempoMedioInsertion = tempoMedioInsertion/10;


    cout << "Tempos medios finais:" << endl;
    cout << "Tempo medio para executar o bubble sort: " << tempoMedioBubble << endl;
    
    cout << "Tempo medio para executar o selection sort: " << tempoMedioSelection << endl;
    
    cout << "Tempo medio para executar o insertion sort: " << tempoMedioInsertion << endl;
    
    delete[] vetor1;
    delete[] vetor2;
    delete[] vetor3;

    return 0;
}