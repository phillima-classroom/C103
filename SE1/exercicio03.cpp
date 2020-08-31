#include <iostream> //para usar cin e cout
#include <string> //para usar o tipo string

using namespace std;

//Criando a estrutura para representar Aluno
struct Aluno{
    string nome;
    int mat;
    string curso;
};

int main(){
    Aluno alunos[5];
    
    for (int i = 0; i < 5; i++){
        cout << "Entrando com os dados do aluno: " << i+1 << endl;

        cout << "Digite um nome para o aluno: ";
        getline(cin, alunos[i].nome); 

        cout << "Digite uma matricula para o aluno: ";
        cin >> alunos[i].mat;
        cin.ignore(256, '\n'); //O objetivo dessa linha eh ignorar a linha nova.

        cout << "Digite um curso para o aluno: ";
        getline(cin, alunos[i].curso); 
    }
    //cout << endl << endl; //pular duas linhas
    
    //Imprimindo o resultado
    for(int i = 0; i < 5; i++){
        cout << "Dados do aluno: " << i+i <<endl;        
        cout << "Nome: " << alunos[i].nome << endl;
        cout << "Curso: " << alunos[i].curso << endl;
        cout << "Matricula: " << alunos[i].mat << endl;
    }
    return 0;
}