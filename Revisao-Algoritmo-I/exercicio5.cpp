#include <iostream>

using namespace std;


int fibonacciIterativo(int valor){
   
    if(valor == 0)
        return 0;
    if(valor == 1)
        return 1;

    int f_1 = 1;
    int f_2 = 0;
    int fibonacci = f_1 + f_2;
  
    for(int i = 2; i < valor; i++){
        f_2 = f_1;
        f_1 = fibonacci;
        fibonacci = f_1 + f_2;
    }

    return fibonacci;
}

int main(){

    int valor;
    cout << "Qual valor deseja calcular a sequencia Fibonacci ";
    cin >> valor;
    
    int fb = fibonacciIterativo(valor); 

    cout << "Resultado: " << fb << endl;
    

    return 0;

}