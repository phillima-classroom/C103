#include <iostream>

using namespace std;

int main(){

    int inteiro1, inteiro2;
    int* pInt1 = &inteiro1;
    int* pInt2 = &inteiro2;

    cout << "Entre com o valor do primeiro inteiro: ";
    cin >> inteiro1;
    cout << "Entre com o valor do segundo inteiro: ";
    cin >> inteiro2;
    
    //Comparando os enderecos
    cout << endl << endl;
    if(pInt1 > pInt2){
        cout << "O Endereco do inteiro1 eh maior." << endl;
        cout << "Seu conteudo eh: " << *pInt1 <<endl;
    }else{
        cout << "O Endereco do inteiro2 eh maior." << endl;
        cout << "Seu conteudo eh: " << *pInt2<<endl;
    }
    return 0;
}