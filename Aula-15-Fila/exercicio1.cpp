#include <iostream>

using namespace std;

struct No{
    double dado;
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

        void enqueue(double dado_){

            if(filaCheia()){
                cout << "A fila esta cheia! Que triste" << endl;
                return;
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

        double dequeue(){
            if(filaVazia()){
                throw invalid_argument("Fila Vazia Exception");
            }

            double valor = inicio->dado;

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

    int tamanhoMax = 3;
    double frenteFila;

    Fila fila(tamanhoMax);

    fila.enqueue(3.4);
    fila.enqueue(5.8);
    fila.enqueue(6.4);

    cout << fila.mostraQtdElementos() << endl;
    
    for (int i = 0; i < tamanhoMax; i++)
    {
        try{
            frenteFila = fila.dequeue();
            cout << frenteFila << endl;
        }catch(invalid_argument e){
            cout << e.what() <<endl;
        }
    }

    //Tenta remover da fila vazia
    try{
        frenteFila = fila.dequeue();
        cout << frenteFila << endl;
    }catch(invalid_argument e){
        cout << e.what() <<endl;
    }
    //Mostra elementos
    cout << fila.mostraQtdElementos() << endl;

    return 0;
}