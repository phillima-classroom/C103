#include <iostream>

using namespace std;

class Aluno{
    private:
        int mat;
        int npa;
        string nome;
    public:
        Aluno(int novaMAT, int novaNPA, string novoNome){
            inserirNome(novoNome);
            inserirMat(novaMAT);
            inserirNPA(novaNPA);
        }
        void inserirMat(int novaMAT){
            if(novaMAT < 0){
                cout << "Matricula negativa" << endl;
                mat = 0;
            }else{
                mat = novaMAT;
            }   
        }
        int lerMat(){
            return mat;
        }

        void inserirNPA(int novaNPA){
            if(novaNPA < 0){
                cout << "NPA negativa" << endl;
                npa = 0;
            }else{
                npa = novaNPA;
            }
        }
        int lerNPA(){
            return npa;
        }

        void inserirNome(string novoNome){
            nome = novoNome;
        }

        string lerNome(){
            return nome;
        }
};

int main(){

    Aluno aluno1(1234,100, "Chuck Norris");
    Aluno aluno2(4321,89,"Capitao Nascimento");

    cout << aluno1.lerNPA() << endl;
    cout << aluno1.lerNome() << endl;
    cout << aluno1.lerMat() << endl;

    cout << aluno2.lerNPA() << endl;
    cout << aluno2.lerNome() << endl;
    cout << aluno2.lerMat() << endl;

    return 0;

}