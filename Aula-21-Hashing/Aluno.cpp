#include "Aluno.hpp"

Aluno::Aluno(std::string nome, int mat, int npa){
    this->nome = nome;
    this->mat = mat;
    this->npa = npa;
}

int Aluno::getMat(){
    return mat;
}

int Aluno::getNpa(){
    return npa;
}

std::string Aluno::getNome(){
    return nome;
}