#include "TabelaHash.hpp"
#include <iostream>
#include <math.h>


TabelaHash::TabelaHash(int tamTabela){
    this->tabelaHash.resize(tamTabela);
    qtdElementos = 0;
}

int TabelaHash::getQtdElementos(){
    return qtdElementos;
}

int TabelaHash::getTamTabela(){
    return tabelaHash.size();
}

//Funcao que usa metodo da divisao
int TabelaHash::funcaoHashDiv(int chave){
    return chave % getTamTabela();
}
//Funcao que usa o metodo da multiplicacao
int TabelaHash::funcaoHashMulti(int chave){

    double A = 0.3123;
    double temp = A * chave;
    double parteInt;
    double parteFrac = modf(temp,&parteInt);

    int posicao = parteFrac * getTamTabela();

    std::cout << "A posicao foi " << posicao << std::endl;

    return posicao;

}

void TabelaHash::inserir(Aluno* aluno){
    int pos = funcaoHashMulti(aluno->getMat());
    tabelaHash.at(pos) = aluno;

    qtdElementos++;
}

Aluno* TabelaHash::buscar(int mat){
    int pos = funcaoHashMulti(mat);
    return tabelaHash.at(pos);
}

void TabelaHash::remover(Aluno* aluno){

    int pos = funcaoHashMulti(aluno->getMat());
    tabelaHash.erase(tabelaHash.begin() + pos);
    qtdElementos--;

}