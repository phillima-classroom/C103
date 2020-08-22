#include <iostream>

using namespace std;

int main(){

    double media,numero,acumulado,qtd=15;

    cout << "Programa para calcular a media aritmetica de " << qtd << " numeros." <<endl;
    for(int i = 0; i < qtd; i++){
        cout << "Digite o numero na posicao " << (i+1) << " :";
        cin >> numero;
        acumulado+= numero;
    }
    media = acumulado/qtd;
    cout << "A media eh: " << media<<endl;
    
    return 0;
}