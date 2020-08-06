#include <iostream>

using namespace std;

int exponenciacaoRecursiva(int base, int expoente){
    
    if(expoente == 0)
        return 1;
    else{
        return base * exponenciacaoRecursiva(base,expoente-1);
    }
}

int exponenciacaoIterativa(int base, int potencia){
    
    int resultado = 1;
    
    if(potencia == 0)
        return 1;
    for(int i = 0; i < potencia; i++){
        resultado *= base;
    }
    
    return resultado;
}

int main(){
    
    int valorExpoente;
    int valorBase;

    cout << "Calculo de exponenciacao!" << endl;
    cout << "Digite um valor para a base: ";
    cin >> valorBase;

    cout << "Digite um valor para o expoente: ";
    cin >> valorExpoente;

    cout << "Versao iterativa: ";
    cout << exponenciacaoIterativa(valorBase,valorExpoente) << endl;

    cout << "Versao recursiva: ";
    cout << exponenciacaoRecursiva(valorBase, valorExpoente) << endl;
    
    return 0;

}
