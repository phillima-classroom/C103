#include <iostream>

using namespace std;

int main(){

    int numero;

    cout << "Digite um numero para calcular sua tabuada: ";
    cin >> numero;

    for(int i = 1; i <= 10; i++){
        cout << numero << " X " << i << " = " << (i*numero) << endl;
    }

    
    return 0;

}