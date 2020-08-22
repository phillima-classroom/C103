#include <iostream>

using namespace std;

int main(){

    int maior = -1000000,numero,qtd=15;

    cout << "Programa para indicar o mairo numero dentro " << qtd << " numeros." <<endl;
    for(int i = 0; i < qtd; i++){
        cout << "Digite o numero na posicao " << (i+1) << " :";
        cin >> numero;
        if(numero>maior)
            maior = numero;
    }

    cout << "O maior numero eh: " << maior<<endl;
    
    return 0;
}