#include <iostream>

using namespace std;



int main(){

    int inicio,fim,par=0,impar=0;

    cout << "Digite o numero inicial: ";
    cin >> inicio;

    cout << "Digite o numero fim: ";
    cin >> fim;

    if(inicio > fim)
        cout << "O numero final deve ser maior que o inicial." <<endl;
    else{
        for(int i = inicio; i <= fim; i++){
            if(i%2==0){
                cout << i << " eh par."<<endl;
                par++;
            }else{
                cout << i << " eh impar."<<endl;
                impar++;
            }
        }
    }

    cout << "A sequencia contem: " << par << " numeros pares."<<endl;
    cout << "A sequencia contem: " << impar << " numeros impares."<<endl;

    return 0;

}