#include <iostream>

using namespace std;

//cabecalho da funcao que faz a troca de valores de endereco. 
//Ela recebe dois "ponteiros de ponteiros"
void troca(int**,int**);

int main(){

    int a = 1, b = 2;
	int* pa = &a;
	int* pb = &b;
	
	//Imprimindo os valores de a e b pelos ponteiros
	cout<<  "Valor de a: "<< *pa << " e b :" << *pb << endl; 
	
	//Chama a funcao "troca" passando o endereco do ponteiro pa e pb 
	troca(&pa,&pb);
	
	cout << "Valores de enderecos trocados!" << endl;
	
	cout<<  "Valor de a: "<< *pa << " e b :" << *pb << endl; 
	
	return 0;
}

void troca(int** end1, int** end2){
    int* endTemp = *end1;
	
	*end1 = *end2;
	*end2 = endTemp;
}