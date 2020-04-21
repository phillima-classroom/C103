#include <iostream>

using namespace std;

typedef struct no{
    int dado;
    struct no* proxNo;
}No;

class Pilha{
    
    private:
        No* topo; //Aponta para o topo
        int numMax; //Armazena numero maximo de elementos
        int qtdElementos; //Armazena numero de elementos na pilha
    public:
        Pilha(int numMax_){ //Construtor para inicializar a pilha
            topo = NULL;
            qtdElementos = 0;
            numMax = numMax_;
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

        bool pilhaCheia(){
            if(qtdElementos == numMax)
                return true;
            else
                return false;
        }

        void empilhar(int dado_){
            
            if(pilhaCheia()){
                cout << "Pilha Cheia:" << endl;
                return;
            }

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

        int mostraElementoTopo(){
            if(pilhaVazia()){
                cout << "Pilha Vazia:" << endl;
                return -1;
            }
            return topo->dado;
        }

        int desempilhar(){
            if (pilhaVazia()){
                cout << "Pilha Vazia:" << endl;
                return -1;
            }

            No *temp = topo;

            topo = topo->proxNo;

            int valor = temp->dado;
            delete temp;
            qtdElementos--;
            return valor;
          
        }

};

int main(){

    int numElementoPilha;
    cout << "Digite quantos valores deseja inserir na pilha: ";
    cin >> numElementoPilha;

    Pilha pilha(numElementoPilha);
    for (int i = 0; i < numElementoPilha; i++)
    {
        int dado;
        cout << "Digite um inteiro positivo: ";
        cin >> dado;
        pilha.empilhar(dado);
    }
    cout << endl;
    cout << "Mostrando elemento do topo:";
    cout << pilha.mostraElementoTopo() << endl;
   
   

    for(int i = 0; i < numElementoPilha; i++){
        cout << "Desempilhou:" << endl;
        pilha.desempilhar();
        cout << "Elemento do topo: " << pilha.mostraElementoTopo() << endl;
    }

    return 0;
}   