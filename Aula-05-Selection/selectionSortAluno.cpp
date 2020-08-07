#include <iostream>

using namespace std;

struct Aluno{
    int mat;
    int npa;
};

//Chama 
void selectionSort(Aluno *V, int N){
   
    int menor;
    Aluno aux;
    for (int i = 0; i < N - 1; i++){
        //indice do menor valor. Estamos "selecionando" 
        //no array o melhor valor para ficar nessa posição
        menor = i; 
        for(int j = i + 1; j < N; j++){
            if(V[j].npa < V[menor].npa){
                //A posição do valor menor que "menor" atual. 
                //Salvamos essa posição.
                menor = j; 
            }
        }
        //Se "menor" for diferente de "i" quer 
        //dizer que encontramos no vetor um valor menor que o da posição "i"
        if(menor != i){
            //Fazemos a troca desses valores. 
            //Ou seja, "selecionamos" o valor na 
            //posição "menor" e colocamos ele na posição "i". 
            aux = V[i]; 
            V[i] = V[menor];
            V[menor] = aux;
        }
    }
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
    cout << "Valor do array antes ordenacao." << endl;
    for (int i = 0; i < tam; i++){
        cout << alunos[i].mat << " : " << alunos[i].npa << endl;
    }

    selectionSort(alunos, tam);

    //imprime o array após ser ordenado
    cout << "Valor do array apos ordenacao." << endl;
    for (int i = 0; i < tam; i++){
        cout << alunos[i].mat << " : " << alunos[i].npa << endl;
    }
}