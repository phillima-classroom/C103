#include <iostream>

using namespace std;

typedef struct aluno{
    string nome;
    int mat,npa;
}Aluno;

void selectionSort(Aluno *V, int N){
   
    int maior;
    Aluno aux;
    for (int i = 0; i < N - 1; i++){
        maior = i; 
        for(int j = i + 1; j < N; j++){
            if(V[j].nome > V[maior].nome){
                maior = j; 
            }
        }
        if(maior != i){ 
            aux = V[i]; 
            V[i] = V[maior];
            V[maior] = aux;
        }
    }
}


int buscaBinaria(Aluno* v, int tam, string elemento){

    int meio, inicio, fim;
    inicio = 0;
    fim = tam-1;
    
    while(inicio <= fim){
        meio = (inicio + fim)/2;
        if(v[meio].nome==elemento){
            return meio;
        }else if(v[meio].nome < elemento){//Elemento do meio eh menor. Busca na metade inferior do vetor
            fim = meio - 1; 
        }else{//Elemento do meio eh maior. Busca na metade superior do vetor
            inicio = meio + 1;
        }
    }

    return -1;//Se o for encerrar significa que o valor nao foi encontrado
}

int main(){

    Aluno al1 = {"Jaum",1234,35};
    Aluno al2 = {"Uaissô",12345,12};
    Aluno al3 = {"Apolonio",543,23};
    Aluno al4 = {"Xikito",124,49};
    Aluno al5 = {"Vicentin",878,45};
    Aluno al6 = {"Frozen",1478,83};
    Aluno al7 = {"Fredy",189,78};
    Aluno al8 = {"Jack",464,92};
    Aluno al9 = {"Capiroto",534,89};
    Aluno al10 = {"Zezin",1263,90};

    //Usando o malloc()
    //Lembre-se de incluir o cabecalho <cstdlib>
    //Aluno* alunos = (Aluno*)malloc(sizeof(Aluno)*10);

    Aluno* alunos = new Aluno[sizeof(Aluno)*10];

    alunos[0] = al1;
    alunos[1] = al2;
    alunos[2] = al3;
    alunos[3] = al4;
    alunos[4] = al5;
    alunos[5] = al6;
    alunos[6] = al7;
    alunos[7] = al8;
    alunos[8] = al9;
    alunos[9] = al10;
    
    selectionSort(alunos,10);

    int indice = buscaBinaria(alunos,10,"Xikito");

    cout << "Aluno Xikito na posicao: " << indice << endl;

    indice = buscaBinaria(alunos,10,"Capirotin");

    if(indice == -1)
        cout << "Aluno Capirotin no encontrado." << endl;
    
    delete[] alunos;
    return 0;
    
}