#include "TabelaHash.hpp"
#include <iostream>


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
int TabelaHash::funcaoHash(int chave){

    return chave % getTamTabela();

}

void TabelaHash::inserir(Aluno* aluno){
    int pos = funcaoHash(aluno->getMat());
    tabelaHash.at(pos) = aluno;

    qtdElementos++;
}

Aluno* TabelaHash::buscar(int mat){
    int pos = funcaoHash(mat);
    return tabelaHash.at(pos);
}

void TabelaHash::remover(Aluno* aluno){

    int pos = funcaoHash(aluno->getMat());
    tabelaHash.erase(tabelaHash.begin() + pos);
    qtdElementos--;

}