#include <iostream>

using namespace std;

int fatorialRecursivo(int valor){
    if(valor == 0 || valor == 1)
        return 1;
    else{
        return valor * fatorialRecursivo(valor-1);
    }
}

int fatorialIterativo(int valor){
    int fat = 1;
    if(valor == 0 || valor == 1)
        return 1;
    for(int i = 0; i < valor-1; i++){
        fat *= (valor-i);
    }
    
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