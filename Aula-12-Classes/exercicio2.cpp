#include <iostream>

using namespace std;

class PontoEspaco{

    private:
        float x,y,z;
    public:
        PontoEspaco(float _x, float _y, float _z){
            x = _x;
            y = _y;
            z = _z;
        }

        //Metodos para ler as coordenadas do ponto
        float lerPontoX(){
            return x;
        }

        float lerPontoY(){
            return y;
        }

        float lerPontoZ(){
            return z;
        }

        void lerPonto(float* pontoCoordenada){
            pontoCoordenada[0] = x;
            pontoCoordenada[1] = y;
            pontoCoordenada[2] = z;
        }
        //Metodos para inserir valores de coordenadas para o ponto
        void inserirCoordenadaX(float _x){
            x = _x;
        }

        void inserirCoordenadaY(float _y){
            y = _y;
        }

        void inserirCoordenadaZ(float _z){
            z = _z;
        }

        void inserirCoordenadas(float* coordenadas){
            x = coordenadas[0];
            y = coordenadas[1];
            z = coordenadas[2];
        }
};

int main(){

    //Criando um ponto no espaco com coordenadas (1,2,3)
    PontoEspaco pontoEspaco(1,2,3);

    float pontos[3];

    //Lendo as coordenadas e salvando no vetor pontos
    pontoEspaco.lerPonto(pontos);


    cout << "Coordenada X: " << pontos[0] << endl;
    cout << "Coordenada Y: " << pontos[1] << endl;
    cout << "Coordenada Z: " << pontos[2] << endl;

    
    //Criando um novo vetor com as coordenadas
    float pontos2[] = {5,6,7};

    //Salvando as coordenadas do vetor pontos2
    pontoEspaco.inserirCoordenadas(pontos2);

    //Lendo as coordenadas e salvando no vetor pontos
    pontoEspaco.lerPonto(pontos);
    cout << "Coordenada X: " << pontos[0] << endl;
    cout << "Coordenada Y: " << pontos[1] << endl;
    cout << "Coordenada Z: " << pontos[2] << endl;

    return 0;
}