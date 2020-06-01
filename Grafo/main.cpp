#include "Grafo.hpp"
#include <iostream>

int main(){

    Grafo grafo(true,5); //Criando um digrafo com 5 arestas

    grafo.insereAresta(1,1);
    grafo.insereAresta(2,3);
    grafo.insereAresta(3,4);
    grafo.insereAresta(2,4);
    grafo.insereAresta(5,5);

    grafo.mostraArestas();

    cout << "Removendo Arestas" << endl;

    grafo.removeAresta(3,4);
    grafo.removeAresta(1,1);
    grafo.removeAresta(1,1);

    grafo.mostraArestas();

    return 0;
}