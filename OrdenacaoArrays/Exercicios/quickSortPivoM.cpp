#include <iostream>

using namespace std;

//Essa função é responsável por calcular o pivô, e garantir que os elementos a esquerda são menores que o pivô, e a direita maior.
//Assim, duas partições são criadas. E de forma recursiva o algoritmo será executado para ambas as partições.
int particiona(int *V, int inicio, int fim){
   int esq,dir,pivo,aux;
   esq = inicio; //Por padrão a esq começa no início da partição
   dir = fim; //E a direta no final
   
   //Mudanca de meio com inicio
   aux = V[(fim-inicio)/2];
   V[(fim-inicio)/2] = V[inicio];
   V[inicio] = aux;
   
    pivo = V[inicio]; //O pivô é calculado como sendo o primeiro valor da partição. Após a execução, o algoritmo irá coloca-lo na posição mais adequada, garantindo que todos a esquerda são menor. E a direita maior.


    while (esq < dir){//A valor da esquerda é menor que a direita? Se sim, então continuamos a percorrer o vetor
        
        while (V[esq] <= pivo && esq < fim){ //O valor vetor na posição "esq" é menor que o pivô? Se sim, continuamos andando. (incrementa a esq)
            esq++;
        }
        while(V[dir] > pivo){ //O valor do vetor na posição da direita é maior que o pivo? Se sim, continuamos descendo a posição dir (dir --)
            dir--;
        }
        if(esq < dir){ //Se a esq for menor que a direita,significa que o valor na posição dir é menor que o da posição esq, por isso trocamos.
            aux = V[esq];
            V[esq] = V[dir];
            V[dir] = aux;
        }
    }
    V[inicio] = V[dir];//Depois que encontrarmos a posição adequada para o pivô, colocamos o pivô nessa posição
    V[dir] = pivo;
    return dir;//O pivô é a posição da direita
}

//Chamado pela função com o vetor a ser ordenado
void quickSort(int *V, int inicio, int fim){
    int pivo;
    if(fim > inicio){ //Verifica se partição possui ao menos dois elementos
        pivo = particiona(V, inicio, fim); //Calcula o pivo e reorganiza o vetor
        quickSort(V, inicio, pivo-1); //Agora faz o quick sort para a partição a esquerda do pivô
        quickSort(V, pivo+1, fim); //Faz o quick sort para a partição a direita do pivô.
    }
}

int main(){
    
    //Definido o valor do array fora de ordem
    int valores[] = {23,4,67,-8,90,54,21};

    //Calcula o tamanho do array
    int tam = sizeof(valores)/sizeof(valores[0]);
    
    cout << "Valor do array antes da ordenacao." << endl;
    for (int i = 0; i < tam; i++){
        cout << valores[i] << " ";
    }
    cout << endl;

    //Chama a funcao de quick sort, passando o array e o seu tamanho
    quickSort(valores,0, tam-1);

    cout << "Valor do array apos a ordenacao." << endl;
    for (int i = 0; i < tam; i++){
        cout << valores[i] << " ";
    }
    cout << endl;
    
    return 0;
}