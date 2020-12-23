#include <iostream>
#include "Aluno.hpp"
#include "TabelaHash.hpp"

int main(){

    Aluno aluno("Capiroto",666,66);
    Aluno aluno2("Coringa",1234,97);

    TabelaHash tabelaHash(11);

    tabelaHash.inserir(&aluno);
    tabelaHash.inserir(&aluno2);

    Aluno* alunoBuscado = tabelaHash.buscar(666);

    std::cout << tabelaHash.getTamTabela() << std::endl;
    std::cout << alunoBuscado->getNome() << std::endl;
    std::cout << alunoBuscado->getNpa() << std::endl;

    tabelaHash.remover(&aluno);

    alunoBuscado = tabelaHash.buscar(666);

    std::cout << tabelaHash.getTamTabela() << std::endl;
    std::cout << alunoBuscado->getNome() << std::endl;
    std::cout << alunoBuscado->getNpa() << std::endl;

    return 0;
}