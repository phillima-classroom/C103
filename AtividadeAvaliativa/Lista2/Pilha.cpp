#include "Pilha.hpp"
#include <iostream>

Pilha::Pilha(){
    this->topo = NULL;
    this->qtdElementos = 0;
}

bool Pilha::pilhaVazia(){
    if(this->qtdElementos == 0)
        return true;
    else
        return false;
}

void Pilha::push(char c){
    No* temp = new No;
    temp->elemento = c;
        
    if(Pilha::pilhaVazia()){
        temp->proxNo = NULL;    
    }else{
        temp->proxNo = topo;
    }

    topo = temp;
    this->qtdElementos++;
}

char Pilha::pop(){
    if(Pilha::pilhaVazia()){
        std::cout << "Pilha vazia" << std::endl;
        return 'e';//e para simbolizar erro
    }
    char elemento = topo->elemento;
    No* temp = topo;
    topo = topo->proxNo;
    delete temp;

    this->qtdElementos--;
    return elemento;
}

char Pilha::mostraTopo(){
    if(Pilha::pilhaVazia()){
        std::cout << "Pilha vazia" << std::endl;
        return 'e';//e para simbolizar erro
    }
    return topo->elemento;
}