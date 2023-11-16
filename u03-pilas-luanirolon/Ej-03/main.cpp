//Agregar la función peek a la clase pila que permita ver el valor del tope de pila sin sacarlo.

#include <iostream>
#include "../Pila/Pila.h"
using namespace std;


int main() {
  Pila <int> pila;
    for (int i = 0; i < 10; ++i) {
        pila.push(i);
    }

    cout<<"El tope de la pila es: "<<pila.peek()<<endl;


    cout<<"Vaciando pila"<<endl;
    while(!pila.esVacia()){
        cout<<pila.pop()<<endl;
        cout<< "/";
    }
  return 0;
}
