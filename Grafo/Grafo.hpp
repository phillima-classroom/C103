#include <vector>

using namespace std;
class Grafo{
    private:
        bool digrafo; //se eh um digrafo
        int numVertices; //ordem do grafo
        vector< vector<int> > listaAdj; //lista de adj
        vector<bool> visitados; //vetor para auxiliar na busca
        bool removeAresta(int,int,bool);
        void buscaProfundidadeInterna(int vInicial);
    public:
        Grafo(bool digrafo, int numVertices);
        bool insereAresta(int origem,int destino);
        bool removeAresta(int origem,int destino);
        void mostraArestas();
        void buscaProfundidade(int vInicial);
        void buscaLargura(int vInicial);
}; 