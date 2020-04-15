#include <iostream>

using namespace std;

int fibonacciRecursivo(int valor){
    if(valor == 0)
        return 0;
    if(valor == 1)
        return 1;
    else
        return fibonacciRecursivo(valor-2) + fibonacciRecursivo(valor-1);
}

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
    
    int fibonacci;
    cout << "Digite um valor para calculo da funcao de fibonacci F(x): ";
    cin >> fibonacci;
  
    cout << "Versao iterativa: ";
    cout << fibonacciIterativo(fibonacci) << endl;

    cout << "Versao recursiva: ";
    cout << fibonacciRecursivo(fibonacci) << endl;
    
    return 0;

}
