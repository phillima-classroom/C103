#include <iostream> 
#include <string> 

using namespace std;

//Criando a estrutura para representar Pessoa
struct Pessoa{
    string nome;
    int idade;
    string endereco;
};

int main(){

    Pessoa p1;

    cout << "Digite um nome para a pessoa: ";
    getline(cin, p1.nome); //A funcao getline(), eh capaz de ler uma string do teclado e salvar em uma variavel do tipo std::string. Estamos salvando a string digitada pelo usuario em "p1.nome".

    cout << "Digite um endereco para a pessoa: ";
    getline(cin, p1.endereco);

    cout << "Digite a idade da pessoa: ";
    cin >> p1.idade;

    //Imprimindo a Pessoa
    cout << "Nome: "<< p1.nome << endl;
    cout << "Idade: "<< p1.idade << endl;
    cout << "Endereco: " << p1.endereco << endl;
    
    return 0;
}