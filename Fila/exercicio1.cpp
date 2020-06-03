#include <iostream>

using namespace std;

typedef struct no{
    double dado;
    struct no* proxNo;
}No;

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
                cout << "Fila Vazia! Horrivel" << endl;
                return -1;
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

    Fila fila(3);

    fila.enqueue(3.4);
    fila.enqueue(5.8);
    fila.enqueue(6.4);

    cout << fila.mostraQtdElementos() << endl;
  

    cout << fila.dequeue() << endl;

    

    cout << fila.dequeue() << endl;

    cout << fila.dequeue() << endl;

    fila.dequeue();

    cout << fila.mostraQtdElementos() << endl;

    return 0;
}