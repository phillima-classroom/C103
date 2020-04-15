#include <iostream>

using namespace std;

typedef struct aluno{
    string nome;
    int npa;
    int mat;
}Aluno;

//Funcao responsável por criar a heap. O objetivo é ter o pai como o maior elemento.
void criaHeap(Aluno *V, int pai, int fim){
    Aluno aux = V[pai]; //Auxiliar guarda o valor do pai inicial
    int filho = 2 * pai + 1; //Calcula o primeiro filho
    while(filho <= fim){ //Um filho se encontra no vetor?
        if(filho < fim){ //E o outro filho?
            if(V[filho].nome < V[filho+1].nome){ //Os dois filhos estão presentes. Qual é maior? 
                filho++; //Garante que iremos comparar o valor do pai com o filho maior.
            }
        }
        if(aux.nome < V[filho].nome){ //Valor do pai é menor que do filho?
            V[pai] = V[filho]; //O filho virá o novo pai, pois ele é maior
            pai = filho; //Filho passa a ser o novo pai, e o processo se repete
            filho = 2 * pai + 1;
        }else{
            filho = fim + 1; //Caso nenhum filho seja maior, incrementamos o valor para sair do loop "while"
        }
    }
    V[pai] = aux; //O pai atual recebe o valor do pai original (quando essa função foi chamada)
}


void heapSort(Aluno *V, int N){
    Aluno aux;
    for(int i = (N-1)/2; i >= 0; i--){//Cria o heap para a primeira metade do vetor. Os demais elementos são filhos. Ao final desse processo o pai da árvore é o maior elemento
        criaHeap(V, i, N-1);
    }
    for(int i = N-1; i>= 1; i--){//Começa pegar o pai (que é o primeiro elemento) e colocar na última posição. Decrementamos o "i", pois a última posição já estará ordenada.
        aux = V[0];
        V[0] = V[i];
        V[i] = aux;
        criaHeap(V, 0, i-1);//Depois de trocarmos os valores (colocar o pai no fim do vetor), recriamos a heap, para buscar o maior elemento.
    }
}


int main(){

    Aluno al1 = {"Jaum", 66, 1234};
    Aluno al2 = {"Juanito", 70,4321};
    Aluno al3 = {"Jaumzin", 90,345};
    Aluno al4 = {"Apolonio", 32,45645};
    Aluno al5 = {"Chuck Norris", 110, 1};

    Aluno alunos[] = {al1,al2,al3,al4,al5};

    //Calcula o tamanho do array
    int tam = sizeof(alunos)/sizeof(Aluno);
    
    //imprimir este array fora de ordem
    cout << "Valor do array antes ordenação." << endl;
    for (int i = 0; i < tam; i++){
        cout << alunos[i].nome << " : " << alunos[i].npa << " : " << alunos[i].mat << endl;
    }
    cout << endl;

    heapSort(alunos, tam);

    //imprime o array após ser ordenado
    cout << "Valor do array após ordenação." << endl;
    for (int i = 0; i < tam; i++){
        cout << alunos[i].nome << " : " << alunos[i].npa << " : " << alunos[i].mat << endl;
    }
    cout << endl;
}