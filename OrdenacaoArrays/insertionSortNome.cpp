#include<iostream>

using namespace std;

typedef struct aluno{
    string nome;
    int npa;
    int mat;
}Aluno;

//Funcao de ordenacao por insercao
void insertionSort(Aluno *V, int N){
   
    //mantem salvo o valor que estamos buscando a posição correta para "inserir".
    Aluno atual;
    //variavel auxiliar 
    int j; 

    //Percorrendo o array, iniciando pela segunda posição
    for (int i = 1; i < N; i++){
        atual = V[i]; //salva o valor que vamos "inserir" na posição correta

        //Enquanto os elementos a esquerda de "atual" for menor que ele deslocamos esses números para a direita, 
        //até que "atual" seja inserido na posição correta. Caso o vetor chegue no fim (j = 0) também paramos a busca. O que 
        //ocorrer primeiro
        for(j = i; (j > 0) && (atual.nome < V[j-1].nome); j--){
            V[j] = V[j-1];//Deslocando os valores a esquerda de "atual" para a direita.
        }
        V[j] = atual; //Inserindo o "atual" na posição correta
    }
}

int main(){
    
    Aluno al1 = {"Jaum", 66, 1234};
    Aluno al2 = {"Juanito", 70,4321};
    Aluno al3 = {"Jaumzin", 90,345};
    Aluno al4 = {"Apolonio", 32,45645};

    Aluno alunos[] = {al1,al2,al3,al4};

    //Calcula o tamanho do array
    int tam = sizeof(alunos)/sizeof(Aluno);
    
    //imprimir este array fora de ordem
    cout << "Valor do array antes ordenação." << endl;
    for (int i = 0; i < tam; i++){
        cout << alunos[i].nome << " : " << alunos[i].npa << endl;
    }

    //Chama a funcao de insertion sort, passando o array e o seu tamanho
    insertionSort(alunos, tam);

    //imprime o array após ser ordenado
    cout << "Valor do array após ordenação." << endl;
    for (int i = 0; i < tam; i++){
        cout << alunos[i].nome << " : " << alunos[i].npa << endl;
    }
    
    return 0;
}