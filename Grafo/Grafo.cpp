#include "Grafo.hpp"
#include <iostream>
#include <queue>

Grafo::Grafo(bool digrafo, int numVertices){
    this->numVertices = numVertices;
    this->listaAdj.resize(this->numVertices);
    this->digrafo = digrafo;
    this->visitados.resize(this->numVertices);
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

//Busca em profundidade. Chamada publica
void Grafo::buscaProfundidade(int vInicial){

    for(int i = 0; i < this->visitados.size(); i++ )
        this->visitados.at(i) = false;
    buscaProfundidadeInterna(vInicial);
    std::cout << std::endl;
 
}
//Busca em profundidade. Chamada interna
void Grafo::buscaProfundidadeInterna(int vInicial){
 
    this->visitados.at(vInicial) = true;
    std::cout << vInicial << " ";
    for(int i = 0; i < this->listaAdj.at(vInicial).size(); i++){
        if(!this->visitados.at(this->listaAdj.at(vInicial).at(i))){
            buscaProfundidadeInterna(this->listaAdj.at(vInicial).at(i));
        }
    }
}

void Grafo::buscaLargura(int vInicial){
    
    //Ninguem ainda foi visitado
    for(int i = 0; i < this->visitados.size(); i++ )
        this->visitados.at(i) = false;
  
    queue<int> filaVisitados;//Estrutura fila para auxiliar
    filaVisitados.push(vInicial);//Coloca o vertice inicial na fila
    this->visitados.at(vInicial) = true; //Marca ele como visitado
    cout << vInicial << " "; //Imprime o vertice inicial
    while(!filaVisitados.empty()){
        int vertice = filaVisitados.front();
        filaVisitados.pop();//Remove proximo elemento da fila
        //Percorrer os vizinhos de vertice
        for(int i = 0; i < this->listaAdj.at(vertice).size(); i++){
            if(!this->visitados.at(this->listaAdj.at(vertice).at(i))){
                filaVisitados.push(this->listaAdj.at(vertice).at(i));
                cout << this->listaAdj.at(vertice).at(i) << " ";
                this->visitados.at(this->listaAdj.at(vertice).at(i)) = true;
            }
        }
    }
    cout << endl;
}