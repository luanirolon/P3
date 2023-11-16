//Escribir un programa que permita eliminar elementos de una lista de números aceptada por teclado,
// el programa pregunta qué elemento borrar considerando que el primero por la izquierda es el 0.
//agregar lista origiinal
#include <iostream>
#include "../Lista/Lista.h"
using namespace std;

int main() {
    Lista<int> Listilla;
    int dato, posicion, op;

    do {
        cout<<"Ingrese un numero: "<<endl;
        cin>>dato;
        Listilla.insertarUltimo(dato);
        cout<<"Ingrese 1 si desea continuar o 0 para finalizar"<<endl;
        cin>>op;

    } while (op==1);

    cout<<"Ingrese la posicion a eliminar: "<<endl;
    cin>>posicion;
    Listilla.remover(posicion);

    Listilla.mostrar();
  return 0;
}
