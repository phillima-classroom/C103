#include <iostream>

using namespace std;

double somar(double operando1, double operando2){
    return operando1 + operando2;
}

double subtrair(double operando1, double operando2){
    return operando1 - operando2;
}

double multiplicar(double operando1, double operando2){
    return operando1 * operando2;
}

double dividir(double operando1, double operando2){
    return operando1/operando2;
}
int main(){

    int operacao, operando1,operando2;
    double resultado;
    bool operacaoValida = true;
    
    cout << "Informe qual operacao deseja realizar"<<endl;
    cout << "1- Soma, 2 – Subtração, 3 – Multiplicação, 4 – Divisão" << endl;
    cin >> operacao;

    cout << "Informe o Operando1:";
    cin >> operando1;

    cout << "Informe o Operando2:";
    cin >> operando2;

    switch (operacao)
    {
    case 1:
        resultado = somar(operando1,operando2);
        break;
    case 2:
        resultado = subtrair(operando1,operando2);
        break;
    case 3:
        resultado = multiplicar(operando1,operando2);
        break;
    case 4:
        if(operando2==0){
            cout << "Nao eh permitida a divisao por zero. Operador2 invalido."<<endl;
            operacaoValida = false;
        }
        else
            resultado = dividir(operando1,operando2); 
        break;
    default:
        cout << "Operacao invalida"<<endl;
        operacaoValida = false;
        break;
    }

    if(operacaoValida)
        cout << "O resultado da operacao foi: " << resultado << endl;
    return 0;

}