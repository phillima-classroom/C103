#include <iostream>

using namespace std;

/*Declarando a assinatura da funcao no inicio
Isso eh necessario caso a funcao seja defininda apos a "main"
No cabecalho nao precisamos passar o nome dos parametros,
apenas o seu tipo!*/
void somaAeB(double**,double**);

int main(){

    //Numeros hipoteticos
    double a = 1.2;
    double b = 3.6;
    
    double* pa = &a;
    double* pb = &b;
    
    somaAeB(&pa,&pb);
       
    return 0;

}

//Podemos declarar funcoes apos a "main"
//mas precisamos colocar o seu cabecalho no inicio.
void somaAeB(double** pa, double** pb){

    double c = **pa + **pb;
    cout << "Valor da soma: " << c <<endl;

}