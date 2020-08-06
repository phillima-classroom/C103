#include <iostream>

using namespace std;

struct Aluno{
	string nome;
	int npa, mat;
};



int buscaSequencialOrdenada(Aluno* v, int tam, string elemento){

    for (int i = 0; i < tam; i++){
        if(v[i].nome==elemento){
            return i;
        }else{
            if(elemento < v[i].nome){ //Elemento não se encontra no vetor
                return -1;//A busca eh interrompida
            }
        }
    }
    return -1;//Se o for encerrar significa que o valor nao foi encontrado
}

int main(){

    //Criando 6 alunos
    Aluno al1 = {"Apolonia", 1234,45};
    Aluno al2 = {"Juanito", 4321,65};
    Aluno al3 = {"Neiva", 634,78};
    Aluno al4 = {"Xitaozin", 789, 26};
    Aluno al5 = {"Yolanda", 555,78};
    Aluno al6 = {"Zezin", 543,85};

    //Lembre-se. O vetor deve estar ordenado
    //para a busca sequencial ordenada.
    //Ou voce mesmo pode ordenar :)
    
    //Criando um vetor de 6 alunos, ordenados pelo nome
    Aluno alunos[] = {al1,al2,al3,al4,al5,al6};

    //Calculo do tamanho do vetor
    int tam = sizeof(alunos)/sizeof(Aluno);

    //Buscando o Tinhoso
    int indice = buscaSequencialOrdenada(alunos,tam,"Yolanda");
    if(indice != -1){
        cout << "Aluna Yolanda encontrada na posicao: " << indice << endl;
    }
    else{
        cout << "Aluna Yolanda nao foi encontrada." << endl;
    }

    //Buscando o Pablito
    indice = buscaSequencialOrdenada(alunos,tam,"Pablito");
    if(indice != -1){
        cout << "Aluno Pablito encontrado na posicao: " << indice << endl;
    }
    else{
        cout << "Aluno Pablito nao foi encontrado." << endl;
    }
  
    return 0;

}