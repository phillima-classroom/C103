#include <iostream>

using namespace std;

struct No{
    int dado;
    No* proxNo;
};

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

        void mostraElementoTopo(){
            if(pilhaVazia()){
                cout << "Pilha Vazia:" << endl;
                return;
            }
            cout << topo->dado <<endl;
        }

        int desempilhar(){
            if (pilhaVazia()){
                //Lanca a exception se a pilha estiver vazia
                throw invalid_argument("Pilha Vazia Exception");
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
    pilha.mostraElementoTopo();
   
    for(int i = 0; i < numElementoPilha; i++){
        cout << "Desempilhou:" << endl;
        try{
            pilha.desempilhar();
        }catch(invalid_argument e){
            cout << e.what() <<endl;//Imprimir a exception
        }
        cout << "Elemento do topo: ";
        pilha.mostraElementoTopo();
    }
   
    return 0;
}   