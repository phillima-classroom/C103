#include <cstdio> //para usar a funcao printf no C++

//Criando a estrutura para representar Hora
typedef struct hora{
    int hora;
    int minuto;
    int segundo;
}Hora;

//Criando a estrutura para representar hora
typedef struct data{
    int dia;
    int mes;
    int ano;
}Data;

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
    printf("O horário 1. Hora: %d Minuto: %d Segundo: %d\n",horario1.hora,horario1.minuto,horario1.segundo);

    printf("O horário 2. Hora: %d Minuto: %d Segundo: %d\n",horario2.hora,horario2.minuto,horario2.segundo);

    printf("A Data 1. Dia: %d Mes: %d ano: %d\n", data1.dia, data1.mes, data1.ano);

    printf("A Data 2. Dia: %d Mes: %d ano: %d\n", data2.dia, data2.mes, data2.ano);

    return 0;
}