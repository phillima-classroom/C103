#include <iostream>
#include <string>
#include "Pilha.hpp"

using namespace std;
 
int main() {
  
  string expressao;
  Pilha pilha;
  bool erro = false;

  cout << "Digite uma expressao com parenteses" << endl;
  getline(cin, expressao);

  for (int i = 0; i < expressao.size(); i++)   
  {
    if(expressao[i] == '('){
      pilha.push(expressao[i]);
    }else if(expressao[i] == ')'){
      if(pilha.pop() == 'e'){
        erro = true;
        break;
      }
    }
  }
  
  if(erro == false && pilha.pilhaVazia()){
    cout << "Expressão correta!" << endl;
  }else{
    cout << "Expressao incorreta!" << endl;
  }


  return 0;

}