#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int* vetorInteiros = (int*)malloc(5*sizeof(int));
    
    for(int i = 0; i < 5; i++){
        cout << "Digite o inteiro para a posicao " << i << ":";
        cin >> *(vetorInteiros+i);
    }

    cout << endl << endl << "Mostrando os valores digitados." << endl;
    for (int i = 0; i < 5; i++){
        cout << "Valor na posicao " << i << " com []: " << vetorInteiros[i] << ", e com artimetica de ponteiro: " << *(vetorInteiros+i) << endl;
    }
    

    free (vetorInteiros);

    return 0;

}