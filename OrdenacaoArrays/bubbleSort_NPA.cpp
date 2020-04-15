#include <iostream>
//Exercicio para ordenar com bubble Sort um array de struct de Aluno, pela matricula
using namespace std;

typedef struct aluno{
    int mat;
    int npa;
}Aluno;

//Funcao de ordenação "por bolha" (Bubble Sort)
void bubbleSort(Aluno *V, int N){
    Aluno aux; 
    int fim = N;
    bool continua = false;
    do
    {
        //Essa variavel é um flag.
        //Se nenhuma troca ocorrer, o loop while não será mais executado
        continua = false;
        for (int i = 0; i < fim - 1; i++){
            if(V[i].npa > V[i+1].npa){//Testa se o anterior é menor que o próximo
                    //Faz a troca dos valores
                    aux = V[i];
                    V[i] = V[i+1];
                    V[i+1] = aux;
                    //Marca "continua" como true, para prosseguir o loop while
                    continua = true;
            }
        }
        fim--;//Decrementa o fim, pois conforme o algorimo avança, o fim do vetor já está ordenado
    } while (continua != false);
}

int main(){
    

    Aluno al1 = {1234,65};
    Aluno al2 = {4321,32};
    Aluno al3 = {12345,78};
    Aluno al4 = {4444,63};

    Aluno alunos[] = {al1,al2,al3,al4};



    //Calcula o tamanho do array
    int tam = sizeof(alunos)/sizeof(alunos[0]);
    
    //imprimir este array fora de ordem
    cout << "Valor do array antes ordenação." << endl;
    for (int i = 0; i < tam; i++){
        cout << alunos[i].mat << " : " << alunos[i].npa << endl;
    }

    //Chama a funcao de bubble sort, passando o array e o seu tamanho
    bubbleSort(alunos, tam);

    //imprime o array após ser ordenado
    cout << "Valor do array após ordenação." << endl;
    for (int i = 0; i < tam; i++){
        cout << alunos[i].mat << " : " << alunos[i].npa << endl;
    }
    
    return 0;
}
