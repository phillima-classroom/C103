#include "Grafo.hpp"
#include <iostream>

using namespace std;

int main(){

    Grafo grafo(false,7); //Criando um digrafo com 5 arestas

    grafo.insereAresta(0,1);
    grafo.insereAresta(0,2);
    grafo.insereAresta(0,4);
    grafo.insereAresta(1,3);
    grafo.insereAresta(1,5);
    grafo.insereAresta(2,6);
    grafo.insereAresta(5,4);

    cout << "Busca em Profundidade:" <<endl;

    grafo.buscaProfundidade(0);

    cout << "Busca em Largura:" <<endl;

    grafo.buscaLargura(0);

    grafo.mostraArestas();

    return 0;
}