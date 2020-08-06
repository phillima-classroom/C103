#include <iostream>

using namespace std;

struct Aluno{
    int mat;
    int npa;
    string nome;
};

struct No{
    Aluno* dado;
    No* proxNo;
};

class Fila{

    private:
        No* inicio;
        No* fim;
        int qtdElementos;
        int tamanhoMax;
    public:
        Fila(int tamanhoMax_){
            inicio = NULL;
            fim = NULL;
            qtdElementos = 0;
            tamanhoMax = tamanhoMax_;
        }

        void enqueue(Aluno* dado_){

            if(filaCheia()){
                throw invalid_argument("Fila Cheia Exception");
            }

            No* temp = new No;
            temp->dado = dado_;
            temp->proxNo = NULL;

            if(filaVazia()){
                inicio = temp;
                fim = temp;
            }else{
                fim->proxNo = temp;
                fim = temp;
            }

            qtdElementos++;

        }

        Aluno dequeue(){
            if(filaVazia()){
                throw invalid_argument("Fila Vazia Exception");
            }

            Aluno valor = *(inicio->dado);

            No* temp = inicio;

            inicio = inicio->proxNo;

            delete temp;

            if(inicio == NULL)
                fim = NULL;

            qtdElementos--;

            return valor;
        }

        int mostraQtdElementos(){
            return qtdElementos;
        }

        bool filaCheia(){
            if(qtdElementos == tamanhoMax)
                return true;
            else
                return false;
        }

        bool filaVazia(){
            if(qtdElementos == 0)
                return true;
            else
                return false;
        }
};

int main(){

    //Programador definiu o valor 5
    const int tamanhoMax = 3;
    Aluno frenteFila;

    string restoLinha;

    Fila fila(tamanhoMax);

    cout << "Numero de alunos que devem ser cadastrados "<<tamanhoMax<<endl;
       

    //Cadastro dos alunos;
    for (int i = 0; i < tamanhoMax; i++)
    {   
        Aluno* aluno = new Aluno;
        cout << "Nome do aluno: ";
        getline(cin,aluno->nome);
        cout << "Matricula: ";
        cin >> aluno->mat;
        cout << "NPA: ";
        cin >> aluno->npa;
        getline(cin,restoLinha);

        //Essa exception nunca sera lancada aqui pois
        //ja protegemos o codigo antes.
        //Mas podera ser lancada em outros trechos do codigo
        try{
            fila.enqueue(aluno);
        }catch(invalid_argument e){
            cout << e.what() <<endl;
        }
    }
    

    cout << fila.mostraQtdElementos() << endl;
    
    //Tirar da fila
    cout<< "----Dequeu iniciando----" << endl;
    for (int i = 0; i < tamanhoMax; i++)
    {
        try{
            frenteFila = fila.dequeue();
            //Dados do aluno removido
            cout << "Nome: " << frenteFila.nome << endl;
            cout << "Mat: " << frenteFila.mat << endl;
            cout << "NPA: " << frenteFila.npa << endl;
        }catch(invalid_argument e){
            cout << e.what() <<endl;
        }
    }

    //Tenta remover da fila vazia
    try{
        frenteFila = fila.dequeue();
        //Dados do aluno removido
        cout << "Nome: " << frenteFila.nome << endl;
        cout << "Mat: " << frenteFila.mat << endl;
        cout << "NPA: " << frenteFila.npa << endl;
    }catch(invalid_argument e){
        cout << e.what() <<endl;
    }
    //Mostra elementos
    cout << fila.mostraQtdElementos() << endl;

    return 0;
}