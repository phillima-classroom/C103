#include "Reta.hpp"

Reta::Reta(Ponto* p1, Ponto* p2){
    this->p1 = p1;
    this->p2 = p2;
}

float Reta::calculaCoeficienteAngular(){
    
    float cAngular;

    cAngular = (p1->devolvePy() - p2->devolvePy())/(p1->devolvePx() - p2->devolvePx());

    return cAngular;

}

float Reta::calculaCoeficienteLinear(){
    float cLinear;

    cLinear = p1->devolvePy() - calculaCoeficienteAngular()*p1->devolvePx();

    return cLinear;
}