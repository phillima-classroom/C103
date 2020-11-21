#include "Grafo.hpp"
#include <iostream>

Grafo::Grafo(bool digrafo, int numVertices){
    this->numVertices = numVertices;
    this->listaAdj.resize(this->numVertices);
    this->digrafo = digrafo;
}

bool Grafo::insereAresta(int origem, int destino){

    if(origem < 0 || origem >= this->numVertices)
        return false;

    if(destino < 0 || origem >= this->numVertices)
        return false;

    this->listaAdj[origem].push_back(destino);

    if(!this->digrafo && (origem!=destino)){
        this->listaAdj[destino].push_back(origem);
    }

    return true;
}

bool Grafo::removeAresta(int origem, int destino, bool inverteAresta){
    
    if(origem < 0 || origem >= this->numVertices)
        return false;

    if(destino < 0 || origem >= this->numVertices)
        return false;

    //Percorrendo a lista de adjcencia para remover a aresta
    for(int i = 0; i < this->listaAdj.at(origem).size(); i++){
        if(this->listaAdj.at(origem).at(i) == destino){//encontrou
            this->listaAdj.at(origem).erase(
                this->listaAdj.at(origem).begin() + i);
            cout << "Aresta Encontrada e Removida" << endl;
            if(!this->digrafo && inverteAresta){
                removeAresta(destino,origem,false);
            }
            return true;
        }
    }

    cout << "Aresta nao encontrada!" << endl;
    return false;
}

bool Grafo::removeAresta(int origem, int destino){
    return removeAresta(origem,destino,true);
}

void Grafo::mostraArestas(){
    for (int i = 0; i < this->listaAdj.size(); i++)
    {
        for(int j = 0; j < this->listaAdj.at(i).size(); j++){
            cout << "Aresta Origem: " << i 
            << " Aresta Destino: " << this->listaAdj.at(i).at(j) << endl; 
        }
    }
} 