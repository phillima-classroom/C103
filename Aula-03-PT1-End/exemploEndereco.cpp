#include <iostream>

using namespace std;

struct Ponto{
    int x,y;
};
int main(){
    int x = 1;
    int vetor[3] = {1,2,3};
    Ponto p1;
    //Enderecos com operador & e tamanho com a funcao sizeof()
    cout << "Endereço de x: " << &x << " .Tamanho de x: " << sizeof(int)<<endl;
    cout << " " <<endl;
    cout << "Endereço do ponto p1: " << &p1 << " .Tamanho de p1: " << sizeof(Ponto)<<endl;
    cout << "Endereço do p1.x: " << &p1.x << " .Tamanho de p1.x: " << sizeof(p1.x)<<endl;
    cout << "Endereço do p1.y: " << &p1.y << " .Tamanho de p1.y: " << sizeof(p1.y)<<endl;
    cout << " " <<endl;
    cout << "Endereço da posicao vetor : " << &vetor << " Tamanho do vetor: " << sizeof(vetor)<<endl;
    cout << "Endereço do vetor[1]: " << &vetor[1] << " .Tamanho do vetor[1]: " << sizeof(vetor[1])<<endl;
    cout << "Endereço do vetor[2]: " << &vetor[2] << " .Tamanho do vetor[2]: " << sizeof(vetor[2])<<endl;
    cout << " " <<endl;

    return 0;
}