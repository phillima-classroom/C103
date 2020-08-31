#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct aluno{
    string nome;
    int matricula,npa;
}Aluno;

int main(){

    int numAlunos;

    cout << "Quantos alunos deseja cadastrar?: ";
    cin >> numAlunos;
    cin.ignore(256,'\n');

    Aluno* alunos = (Aluno*)malloc(numAlunos*sizeof(Aluno));

    //Preenchendo os dados do aluno
    for(int i = 0; i < numAlunos; i++){
        cout << "Digite o nome do aluno: ";
        getline(cin,alunos[i].nome);

        cout << "Digite a matricula: ";
        cin >> alunos[i].matricula;

        cout << "Digite a npa: ";
        cin >> alunos[i].npa;
        cin.ignore(256,'\n');
    }

    for(int i = 0; i < numAlunos; i++){
        cout << "Nome do aluno: ";
        cout << alunos[i].nome <<endl;

        cout << "Matricula: ";
        cout << alunos[i].matricula << endl;

        cout << "NPA: ";
        cout << alunos[i].npa << endl;
    }
    

    free(alunos);
       
    return 0;

}

