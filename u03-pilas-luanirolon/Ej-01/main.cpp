//Escriba un programa que introduzca una palabra y utilice una pila para imprimir la misma palabra invertida.

#include <iostream>
#include "../Pila/Pila.h"
using namespace std;


int main() {
  char nletra= ' ';
  Pila<char>pInvertida;

  cout<<"Ingrese la palabra a inverti, para salir presione '.' "<<endl;
  cout<<"Palabra a invertir: ";

  while(nletra!= '.'){
      cin>>nletra;
      pInvertida.push(nletra);
  }
  cout<<endl;
  cout<<"La palabra invertida es: "<<endl;
  pInvertida.pop();

  while(!pInvertida.esVacia()){
      cout<<pInvertida.pop();
  }
  return 0;
}
