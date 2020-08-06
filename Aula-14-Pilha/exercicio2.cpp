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

class Pilha{
    
    private:
        No* topo; //Aponta para o topo
        int qtdElementos; //Armazena numero de elementos na pilha
    public:
        Pilha(){ //Construtor para inicializar a pilha
            topo = NULL;
            qtdElementos = 0;
        }

        bool pilhaVazia(){
            if(qtdElementos == 0)
                return true;
            else
                return false;
        }

        int verificaNumElementos(){
            return qtdElementos;
        }

        void empilhar(Aluno* dado_){
           
            No* temp = new No;
            temp->dado = dado_;

            if(pilhaVazia()){
                temp->proxNo = NULL;
                topo = temp;
            }else{
                temp->proxNo = topo;
                topo = temp;
            }
            
            qtdElementos++;            
        }

        void mostraElementoTopo(){
            if(pilhaVazia()){
                cout << "Pilha Vazia:" << endl;
                return;
            }
            cout << "Mostrando dados do Aluno do topo" <<endl;
            cout << "Nome: " << topo->dado->nome <<endl;
            cout << "Mat: " << topo->dado->mat <<endl;
            cout << "NPA: " << topo->dado->npa <<endl;
        }

        Aluno desempilhar(){
            if (pilhaVazia()){
                //Lanca a exception se a pilha estiver vazia
                throw invalid_argument("Pilha Vazia Exception");
            }

            No *temp = topo;

            topo = topo->proxNo;

            //Armazena um copia do aluno do topo
            Aluno aluno = *(temp->dado);
            delete temp;
            qtdElementos--;
            return aluno;
        }
};

int main(){

    Aluno aluno1 = {1234,100,"Knight Solaire"};
    Aluno aluno2 = {4321,85,"Malfurion"};
    Aluno aluno3 = {321,90,"Arthas"};
    Aluno aluno4 = {555,95,"Varyan"};

    Pilha pilha;
    pilha.empilhar(&aluno1);
    pilha.empilhar(&aluno2);
    pilha.empilhar(&aluno3);
    pilha.empilhar(&aluno4);

    int elementosNaPilha = pilha.verificaNumElementos();
    
    pilha.mostraElementoTopo();
    cout << "----Comecando a Desempilhar-----"<<endl;
    for(int i = 0; i < elementosNaPilha; i++){
        try{
            pilha.desempilhar();
            cout << "Desempilhou:" << endl;
        }catch(invalid_argument e){
            cout << e.what() <<endl;//Imprimir a exception
        }
        pilha.mostraElementoTopo();
    }

    //Tentando desempilhar com a pilha vazia
    try{
        pilha.desempilhar();
    }catch(invalid_argument e){
        cout << e.what() <<endl;//Imprimir a exception
    }
    return 0;
}   