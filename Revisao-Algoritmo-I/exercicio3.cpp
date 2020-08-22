#include <iostream>

using namespace std;


int main(){

    int idade; 
    double valorProduto, desconto, precoFinal;
    
    cout << "Digite sua idade: ";
    cin >> idade;

    cout << "Digite o valor do produto: ";
    cin >> valorProduto;

    if(idade < 30 && idade >= 0)
        desconto = 0.2;
    else if (idade >= 30 && idade <= 60)
        desconto = 0.3;
    else
        desconto = 0.4;
    
    precoFinal = valorProduto*(1-desconto);

    cout << "O valor do produto antes do desconto: " << valorProduto <<endl;
    cout << "Aplicando desconto de: " << (desconto*100) << endl;
    cout << "O valor do produto apos o desconto: " << precoFinal <<endl;
    
    return 0;

}