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

    int numAlunos = 0;
    string nomeAlunoSendoBuscado;
    
    cout << "Quantos alunos deseja cadastrar? ";
    cin >> numAlunos;

    Aluno alunos[numAlunos];

    //Preenchendo o vetor alunos
    for (int i = 0; i < numAlunos; i++){
        cout << "Digite o nome do aluno: ";
        cin >> alunos[i].nome;

        cout << "Digite a npa: ";
        cin >> alunos[i].npa;

        cout << "Digite a matricula: ";
        cin >> alunos[i].mat;
    }
    
    cout << "Qual aluno deseja buscar? ";
    cin >> nomeAlunoSendoBuscado;

    //Buscar um aluno
    int indice = buscaSequencialOrdenada(alunos, numAlunos, nomeAlunoSendoBuscado);

    //Se o indice for diferente de -1 significa que o aluno foi encontrado
    if(indice != -1){
        cout << "Aluno " << nomeAlunoSendoBuscado << " encontrado na posicao: " << indice << endl;
    }
    else{
        cout << "Aluno " << nomeAlunoSendoBuscado << " nao encontrado." << endl;
    }
   
    return 0;

}