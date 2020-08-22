#include <iostream>

using namespace std;

int main(){

    int valor, fatorial=1;
    cout << "Qual valor deseja calcular o fatorial ";
    cin >> valor;
    
    for (int i = 1; i <= valor; i++){
        fatorial*=i;
    }
    
    cout << "Resultado: " << fatorial << endl;
    
    return 0;

}