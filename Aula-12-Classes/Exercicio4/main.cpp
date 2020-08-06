#include <iostream>
#include "Reta.hpp"

using namespace std;

int main(){

    Ponto p1(2,3);
    Ponto p2(1,-1);

    Reta reta(&p1,&p2);

    cout << reta.calculaCoeficienteAngular() << endl;
    cout << reta.calculaCoeficienteLinear() << endl;

    return 0;
}