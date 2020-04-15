#include <iostream>

using namespace std;

int main(){

    int inteiro1 = 10, inteiro2 = 20;
    int* pInt1 = &inteiro1;
    int* pInt2 = &inteiro2;

    cout << "Valores dos enderecos:" << endl;
    cout << "Endereco do inteiro1: "<< pInt1 <<endl;
    cout << "Endereco do inteiro2: "<< pInt2 <<endl;
    
    //Comparando os enderecos
    cout << endl << endl;
    if(pInt1 > pInt2)
        cout << "O Endereco do inteiro1 eh maior." << endl;
    else
        cout << "O Endereco do inteiro2 eh maior." << endl;
    
    return 0;
}