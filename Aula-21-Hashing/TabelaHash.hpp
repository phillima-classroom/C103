#include "Aluno.hpp"
#include <vector>

class TabelaHash{
    private:
        std::vector<Aluno*> tabelaHash;
        int qtdElementos;
        int funcaoHash(int chave);
    public:
        TabelaHash(int tamTabela);
        int getQtdElementos();
        int getTamTabela();
        void inserir(Aluno* aluno);
        void remover(Aluno* aluno);
        Aluno* buscar(int mat);
};