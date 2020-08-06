#include <iostream>

using namespace std;

struct Aluno{
    string nome;
    int npa;
    int mat;
};

void merge(Aluno *V, int inicio, int meio, int fim){
   
   Aluno *temp; 
   int p1,p2,tamanho;

   bool fim1 = false, fim2 = false;    
   tamanho = fim - inicio+1;
   p1 = inicio;
   p2 = meio+1;
   temp = new Aluno[tamanho]; //Cria vetor temporario para receber os vetores sendo combinado

   if(temp != NULL){
       for(int i = 0; i< tamanho; i++){
           //Se fim1 ou fim2 forem true, eh pq um subvetor ja foi totalmente lido, 
           //e certamente os elementos presentes no outro subvetor sao todos maiores.
           if(!fim1 && !fim2){
                if(V[p1].nome < V[p2].nome)
                    temp[i] = V[p1++];
                else
                    temp[i] = V[p2++];
                if(p1 > meio)
                    fim1 = true;
                if(p2 > fim)
                    fim2 = true;
           }else{//Significa que ja lemos um subvetor completamente, 
                 //entao basta transferir valores do outro subvetor para temp
                if(!fim1)
                    temp[i] = V[p1++];
                else
                    temp[i] = V[p2++];
            }
       }
       //Transfere os elementos de Temp para o Vetor original
       for(int j = 0, k = inicio; j < tamanho; j++,k++)
            V[k] = temp[j];
   }
   delete []temp;   
  
}

void mergeSort(Aluno *V, int inicio, int fim){               
    int meio;
    if(inicio < fim){       
        meio = (inicio+fim)/2;
        mergeSort(V, inicio, meio);
        mergeSort(V, meio+1,fim);
        merge(V,inicio,meio,fim);
    }
}

int main(){

    Aluno al1 = {"Jaum", 66, 1234};
    Aluno al2 = {"Juanito", 70,4321};
    Aluno al3 = {"Jaumzin", 90,345};
    Aluno al4 = {"Apolonio", 32,45645};
    Aluno al5 = {"Chuck Norris", 110, 1};

    Aluno alunos[] = {al1,al2,al3,al4,al5};

    //Calcula o tamanho do array
    int tam = sizeof(alunos)/sizeof(Aluno);
    
    //imprimir este array fora de ordem
    cout << "Valor do array antes ordenação." << endl;
    for (int i = 0; i < tam; i++){
        cout << alunos[i].nome << " : " << alunos[i].npa << " : " << alunos[i].mat << endl;
    }

    //Chama a funcao de mergeSort, passando o array e o seu tamanho
    mergeSort(alunos, 0, tam-1);

    //imprime o array após ser ordenado
    cout << "Valor do array após ordenação." << endl;
    for (int i = 0; i < tam; i++){
        cout << alunos[i].nome << " : " << alunos[i].npa << " : " << alunos[i].mat << endl;
    }
    
    return 0;
    
}