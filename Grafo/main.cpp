#include "Grafo.hpp"
#include <queue>
#include <iostream>

using namespace std;

int main(){

    Grafo grafo(true,5); //Criando um digrafo com 5 arestas

    grafo.insereAresta(0,1);
    grafo.insereAresta(1,3);
    grafo.insereAresta(1,2);
    grafo.insereAresta(2,4);
    grafo.insereAresta(3,0);
    grafo.insereAresta(3,4);
    grafo.insereAresta(4,1);

    cout << "Busca em Profundidade:" <<endl;

    grafo.buscaProfundidade(0);

    cout << "Busca em Largura:" <<endl;

    grafo.buscaLargura(0);

    //grafo.mostraArestas();

    return 0;
}