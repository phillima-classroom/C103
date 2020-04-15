#include <iostream>

using namespace std;

void merge(int *V, int inicio, int meio, int fim){
   
   int *temp, p1,p2,tamanho;

   bool fim1 = false, fim2 = false;    
   tamanho = fim - inicio+1;
   p1 = inicio;
   p2 = meio+1;
   temp = new int[tamanho]; //Cria vetor temporario para receber os vetores sendo combinado

   if(temp != NULL){
       for(int i = 0; i< tamanho; i++){
           //Se fim1 ou fim2 forem true, eh pq um subvetor ja foi totalmente lido, 
           //e certamente os elementos presentes no outro subvetor sao todos maiores.
           if(!fim1 && !fim2){
                if(V[p1] > V[p2])
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

void mergeSort(int *V, int inicio, int fim){               
    int meio;
    if(inicio < fim){       
        meio = (inicio+fim)/2;
        mergeSort(V, inicio, meio);
        mergeSort(V, meio+1,fim);
        merge(V,inicio,meio,fim);
    }
}

int main(){

    int vetor[] = {67,72,13,1,2,91,23,97};
    
    int tam = sizeof(vetor)/sizeof(int);

    cout << "Valor do array antes da ordenacao." << endl;
    for (int i = 0; i < tam; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;

    mergeSort(vetor, 0, tam-1);

    cout << "Valor do array apos a ordenacao." << endl;
    for (int i = 0; i < tam; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
    
}