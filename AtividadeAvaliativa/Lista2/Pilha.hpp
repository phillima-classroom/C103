struct No{
    char elemento;
    No *proxNo;
};

class Pilha{
    private:
        No* topo;
        int qtdElementos;
    public:
        Pilha();
        void push(char c);//empilhar       
        char pop();//desempilhar
        bool pilhaVazia();  
        char mostraTopo(); 
};