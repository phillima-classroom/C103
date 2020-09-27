#include <iostream>

using namespace std;

int fatorialRecursivo(int valor){
    if(valor == 0 || valor == 1)
        return 1;
    else{
        return valor * fatorialRecursivo(valor-1);
    }
}

int fatorialIterativo(int n){
    int fat = 1;
    for(int i = n; i >= 1; i--)
        fat *= i;
    return fat;
}

int main(){
    
    int valorParaCalFat;
    cout << "Digite um valor para calcular fatorial: ";
    cin >> valorParaCalFat;
    cout << "Versao iterativa: ";
    cout << fatorialIterativo(valorParaCalFat) << endl;

    cout << "Versao recursiva: ";
    cout << fatorialRecursivo(valorParaCalFat) << endl;
    
    return 0;

}