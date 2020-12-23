#ifndef CLASS_ALUNO
#define CLASS_ALUNO

#include <string>
class Aluno{
    private:
        std::string nome;
        int npa;
        int mat;
    public:
        Aluno(std::string nome, int mat, int npa);
        int getMat();
        int getNpa();
        std::string getNome();
};
#endif