#include <iostream>

using namespace std;

int main(){

    int inteiro = 10;
    char caractere = 'c';
    double pontoFlutuante = 10.56;

    int* pInt = &inteiro;
    double* pDouble = &pontoFlutuante;
    char* pChar = &caractere;

    cout << "Antes de modificar:" << endl;
    cout << "Valor do inteiro:" << inteiro <<endl;
    cout << "Valor do caractere:" << caractere <<endl;
    cout << "Valor do ponto flutuante:" << pontoFlutuante <<endl;
    cout << endl << endl << endl;
    //Fazendo as modificacoes

    *pInt = 20;
    *pChar = 'd';
    *pDouble = 20.56; 

    cout << "Após modificar:" << endl;
    cout << "Valor do inteiro:" << inteiro <<endl;
    cout << "Valor do caractere:" << caractere <<endl;
    cout << "Valor do ponto flutuante:" << pontoFlutuante <<endl;

    return 0;
}