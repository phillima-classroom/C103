#include <iostream>

using namespace std;


int main(){

    int numero; 
    
    cout << " Programa para dizer se o numero eh par ou impar. " << endl;
    

    do{
        cout << "Digite um número inteiro, ou 888 para sair: ";
        cin >> numero;
        if(numero==888)
            break;
        else if(numero%2==0)
            cout << "O numero " << numero << " eh par." <<endl;
        else
            cout << "O numero " << numero << " eh impar." <<endl;
    }while(numero != 888);
        
    return 0;

}