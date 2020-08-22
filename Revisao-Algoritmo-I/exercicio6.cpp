#include <iostream>

using namespace std;



int main(){

    int inicio,fim;

    cout << "Digite o numero inicial: ";
    cin >> inicio;

    cout << "Digite o numero fim: ";
    cin >> fim;

    if(inicio > fim)
        cout << "O numero final deve ser maior que o inicial." <<endl;
    else{
        for(int i = inicio; i <= fim; i++){
            if(i%2==0)
                cout << i << endl;
        }
    }

    return 0;

}