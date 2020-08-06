#include <iostream>

using namespace std;

//Definicao do dado que sera salvo na lista
struct Aluno{
    int mat;
    int npa;
    string nome;
};

//Conhecido como node (noh em portugues)
struct Node{
    //Dentro do noh temos um Aluno, e nao apenas um inteiro
    Aluno* dado;
    Node* proxNode;
};

//Definicao da classe lista
class ListaEncadeada{
    //Definicao de membros privados
    private:
        Node *cabeca;
        Node *cauda;
        int numElementos;
        //Esse metodo tambem deixei privado
        //Pois eh chamado somente dentro da classe
        void removeElementoUnico(){
            Node *temp = cabeca;
            delete temp;
            cabeca = NULL;
            cauda = NULL; 
        }
    //Agora os metodos publicos
    public:
        //Construtor
        ListaEncadeada(){
            cabeca = NULL;
            cauda = NULL;
            numElementos = 0;
        }
        //Verifica quantos elementos a lista possui
        int verificaNumElementos(){
            return numElementos;
        }
        //Verifica se a lista esta vazia
        bool listaVazia(){
            if(numElementos != 0){
                return false;
            }else{
                return true; //Lista vazia
            }
        }
        //inserir no inicio
        void insereInicio(Aluno* dado){
            Node *temp = new Node;
            temp->dado = dado;
            if(listaVazia()){
                cabeca = temp;
                cauda = temp;
                cabeca->proxNode = NULL;
            }else{
                temp->proxNode = cabeca;
                cabeca = temp;
            }
            numElementos++;
        }

        //metodo para inserir na lista
        void insereNoFim(Aluno* dado){
            Node *temp = new Node;
            temp->dado = dado;
            temp->proxNode = NULL;

            if(listaVazia()){
                cabeca = temp;
                cauda = temp;
            }else{
                cauda->proxNode = temp;
                cauda = temp;
            }
            numElementos++;
        }
        //metodo para remover do inicio
        void removeInicio(){
            if(listaVazia())
                return;
            if(numElementos==1){
               removeElementoUnico();
            }else{
                Node *temp = cabeca;
                cabeca = cabeca->proxNode;
                delete temp;
            }
            numElementos--;
        }
        //metodo para remover elemento da lista pelo fim
        void removeFim(){
            if(listaVazia())
                return;
            if(numElementos==1){
                removeElementoUnico();
            }
            else{
                Node *temp = cabeca;
                while(temp->proxNode != cauda){
                    temp = temp->proxNode;
                }
                cauda = temp;
                delete temp->proxNode;
                cauda->proxNode = NULL;
            }
            numElementos--;
        }
        //metodo para mostrar os valores da lista
        void mostrarElementos(){
            if(listaVazia()){
                cout << "Lista vazia"<<endl;
            }else{
                Node *temp = cabeca;
                while(temp != cauda->proxNode){
                    cout << "Dados do aluno: " <<temp->dado->nome << endl;
                    cout << "Matricula: " << temp->dado->mat<<endl;
                    cout << "NPA: " <<temp->dado->npa<<endl;
                    temp = temp->proxNode;
                }
            }
        }
};

int main(){

    int numElementoLista;
    //Nao precisar o new
    //So quando a gente quer colocar na Heap
    //Aqui a lista esta sendo criada na stack mesmo
    ListaEncadeada l;
  
    Aluno aluno1 = {1234,100,"Knight Solaire"};
    Aluno aluno2 = {4321,85,"Malfurion"};
    Aluno aluno3 = {321,90,"Arthas"};
    Aluno aluno4 = {555,95,"Varyan"};

    l.insereInicio(&aluno1);
    l.insereInicio(&aluno2);
    l.insereInicio(&aluno3);

    l.mostrarElementos();
    cout << "Num alunos na lista: " << l.verificaNumElementos() << endl;

    cout << "Removendo do fim" << endl;
    l.removeFim();
    l.mostrarElementos();

    cout << "Num elementos na lista: " << l.verificaNumElementos() << endl;

    cout << "Inserindo no final" <<endl;
    l.insereNoFim(&aluno4);
    l.mostrarElementos();

    cout << "Removendo do inicio" <<endl;
    l.removeInicio();
    l.mostrarElementos();

    cout << "Inserindo no Inicio" <<endl;
    l.insereInicio(&aluno1);
    l.mostrarElementos();

    return 0;

}