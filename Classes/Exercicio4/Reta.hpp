#include "Ponto.hpp"

class Reta{
    private:
        Ponto* p1;
        Ponto* p2;
    public :
        Reta(Ponto* p1, Ponto* p2);
        float calculaCoeficienteLinear();
        float calculaCoeficienteAngular();
};