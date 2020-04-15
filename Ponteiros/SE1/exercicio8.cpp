#include <iostream>

using namespace std;

void trocaValores(int*,int*);


int main(){

    int inteiro1, inteiro2;
 
    cout << "Entre com o valor do primeiro inteiro: ";
    cin >> inteiro1;
    cout << "Entre com o valor do segundo inteiro: ";
    cin >> inteiro2;
    
    trocaValores(&inteiro1,&inteiro2);
    
    cout << "Apos a troca de valores:" << endl;
    cout << "O primeiro inteiro contem: " << inteiro1 << endl;
    cout << "O segundo inteiro contem: " << inteiro2 << endl;

    return 0;
}

void trocaValores(int* p1, int* p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

}