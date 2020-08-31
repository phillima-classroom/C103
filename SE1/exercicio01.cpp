#include <iostream>

using namespace std;

//Criando a estrutura para representar Hora
struct Hora{
    int hora;
    int minuto;
    int segundo;
};

//Criando a estrutura para representar hora
struct Data{
    int dia;
    int mes;
    int ano;
};

int main(){

    //Comecando com a estrutura Hora.
    //Perceba que seria equivalente se escrevessemos
    //"struct hora horario1 = {23,45,34};"
    //Inicializando na mesma linha
    Hora horario1 = {23,45,34}; 

    //Inicializando utilizando o operador "." 
    //para acessar os campos.
    //Seria equivalente a "Hora horario2 = {12,34,45};""
    Hora horario2;
    horario2.hora = 12;
    horario2.minuto = 34;
    horario2.segundo = 45;

    //Agora a estrutura Data
    Data data1 = {20,1,1963};
    Data data2 = {25,2,2020};

    //Imprimindo os valores
    cout << "O horário 1. Hora: "<< horario1.hora << " Minuto: " << horario1.minuto << " Segundo: " << horario1.segundo << endl;

    cout << "O horário 2. Hora: "<< horario2.hora << " Minuto: " << horario2.minuto << " Segundo: " << horario2.segundo << endl;
    
    cout << "A Data 1. Dia: "<< data1.dia << " Mes: " << data1.mes << " Ano: " << data1.ano << endl;

    cout << "A Data 2. Dia: "<< data2.dia << " Mes: " << data2.mes << " Ano: " << data2.ano << endl;

    return 0;
}