#include <iostream>

using namespace std;

int somatorioRecursivoa(int valor){
    
    if(valor == 0)
        return 0;
    else{
        return valor + somatorioRecursivoa(valor-1);
    }
}

int somatorioIterativo(int valor){
    int soma = 0;
    
    for(int i = 0; i < valor; i++){
        soma += (valor-i);
    }
    
    return soma;
}

int main(){
    
    int valorParaCalSomatorio;
    cout << "Digite um valor para calcular somatorio: ";
    cin >> valorParaCalSomatorio;
    cout << "Versao iterativa: ";
    cout << somatorioIterativo(valorParaCalSomatorio) << endl;

    cout << "Versao recursiva: ";
    cout << somatorioRecursivoa(valorParaCalSomatorio) << endl;
    
    return 0;

}
