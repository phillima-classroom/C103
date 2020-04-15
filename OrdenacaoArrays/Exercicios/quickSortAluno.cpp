#include <iostream>

using namespace std;

typedef struct aluno{
    string nome;
    int npa;
    int mat;
}Aluno;

//Essa função é responsável por calcular o pivô, e garantir que os elementos a esquerda são menores que o pivô, e a direita maior.
//Assim, duas partições são criadas. E de forma recursiva o algoritmo será executado para ambas as partições.
int particiona(Aluno *V, int inicio, int fim){
   int esq,dir;
   Aluno pivo,aux;
   esq = inicio; //Por padrão a esq começa no início da partição
   dir = fim; //E a direta no final
   
   pivo = V[inicio]; //O pivô é calculado como sendo o primeiro valor da partição. Após a execução, o algoritmo irá coloca-lo na posição mais adequada, garantindo que todos a esquerda são menor. E a direita maior.


    while (esq < dir){//A valor da esquerda é menor que a direita? Se sim, então continuamos a percorrer o vetor
        
        while (V[esq].nome <= pivo.nome && esq < fim){ //O valor vetor na posição "esq" é menor que o pivô? Se sim, continuamos andando. (incrementa a esq)
            esq++;
        }
        while(V[dir].nome > pivo.nome){ //O valor do vetor na posição da direita é maior que o pivo? Se sim, continuamos descendo a posição dir (dir --)
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
void quickSort(Aluno *V, int inicio, int fim){
    int pivo;
    if(fim > inicio){ //Verifica se partição possui ao menos dois elementos
        pivo = particiona(V, inicio, fim); //Calcula o pivo e reorganiza o vetor
        quickSort(V, inicio, pivo-1); //Agora faz o quick sort para a partição a esquerda do pivô
        quickSort(V, pivo+1, fim); //Faz o quick sort para a partição a direita do pivô.
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

    //Chama a funcao de quick sort, passando o array e o seu tamanho
    quickSort(alunos,0, tam-1);

    //imprime o array após ser ordenado
    cout << "Valor do array após ordenação." << endl;
    for (int i = 0; i < tam; i++){
        cout << alunos[i].nome << " : " << alunos[i].npa << " : " << alunos[i].mat << endl;
    }
    cout << endl;
    
    return 0;
}