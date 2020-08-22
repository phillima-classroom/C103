#include <iostream>

using namespace std;


int main(){

    double a,b,c;

    cout << "Uma equacao do segundo grau possui o formato: axˆ2 + bx + c = 0."<<endl;
    cout << "Entre com a constante a: ";
    cin >> a;
    cout << "Entre com a constante b: ";
    cin >> b;
    cout << "Entre com a constante c: ";
    cin >> c;


    double discriminante = (b)*(b) - 4*a*c;

    cout << "O discriminante eh: " << discriminante << endl;

    if(discriminante > 0)
        cout << "A equacao possui duas raizes reais e distintas" <<endl;
    else if(discriminante == 0)
        cout << "A equacao possui duas raízes reais e iguais" <<endl;
    else
        cout << "A equacao nao possui raizes reais" <<endl;


    return 0;

}