#include <iostream>

using namespace std;

class PontoPlano{

    private:
        float x,y;
    public:
        PontoPlano(float _x, float _y){
            x = _x;
            y = _y;
        }

        //Metodos para ler as coordenadas do ponto
        float lerPontoX(){
            return x;
        }

        float lerPontoY(){
            return y;
        }
   
        void lerPonto(float* _x, float* _y){
           *_x = x;
           *_y = y;
        }
        //Metodos para inserir valores de coordenadas para o ponto
        void inserirCoordenadaX(float _x){
            x = _x;
        }

        void inserirCoordenadaY(float _y){
            y = _y;
        }

        void inserirCoordenadas(float _x, float _y){
            x = _x;
            y = _y;
        }

        void determinarQuadrante(){
            if( x > 0 && y > 0 )
                cout << "1 Quadrante" << endl;
            else if(x > 0 && y < 0) 
                cout << "4 Quadrante" << endl;
            else if( x < 0 && y > 0)
                cout << "2 Quadrante" << endl;
            else if(x < 0 && y < 0)
                cout << "3 Quadrante" << endl;
            else
                cout << "Esta em algum eixo" << endl;
        }
};

int main(){

    //Criando um ponto no espaco com coordenadas (1,2)
    PontoPlano pontoPlano(2,0);

    pontoPlano.determinarQuadrante();

    pontoPlano.inserirCoordenadas(3,5);

    pontoPlano.determinarQuadrante();

    pontoPlano.inserirCoordenadas(-3,-2);

    pontoPlano.determinarQuadrante();

    pontoPlano.inserirCoordenadas(-3,5);

    pontoPlano.determinarQuadrante();

    pontoPlano.inserirCoordenadas(3,-12);

    pontoPlano.determinarQuadrante();

    float pontoX, pontoY;

    pontoPlano.lerPonto(&pontoX,&pontoY);

    cout << pontoX << " " << pontoY << endl;

    return 0;
}