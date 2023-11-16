//Implementar una funcion que reciba una cola de numeros enteros y una pila entera vacia, y separe
//los elementos de la cola de tal manera que los elementos pares de la cola permanezcan en la cola,
// y los elementos impares formen parte de la pila.
//Al insertar los elementos en la pila, deberan aparecer en orden inverso a como estaban en la cola:
//el elemento de la posicion 1 de la cola estara al fondo de la pila, el de la posicion 3
//sera el segundo desde el fondo,etc.
// si ,la cola estuviera vacia mostrar mensaje de error.

#include <iostream>
#include "Estructuras/Pila.h"
#include "Estructuras/Cola.h"

using namespace std;

void separarColaYPila(Cola<int>& cola, Pila<int>& pila) {
    while (!cola.esVacia()) {
        int elemento = cola.desencolar();
        if (elemento % 2 != 0) {
            // Es impar, se agrega a la pila
            pila.push(elemento);
        }
        // No necesitas hacer nada si es par, simplemente lo ignoras
    }
}


int main() {
    Cola<int> cola;
    Pila<int> pila;

    int num, pos;

    cout<<"Ingrese el tamanio de la cola: "<<endl;
    cin>>pos;

    for (int i = 0; i < pos; ++i) {
        cout << "Ingrese números:" << endl;
        cin>>num;
        cola.encolar(num);
    }



    // Llamar a la función para separar los elementos
    separarColaYPila(cola, pila);

    cout << "Elementos pares en la cola:" << endl;
    while (!cola.esVacia()) {
        cout << cola.desencolar() << " ";
    }

    cout << endl;

    cout << "Elementos impares en la pila (en orden inverso):" << endl;
    while (!pila.esVacia()) {
        cout << pila.pop() << " ";
    }

    return 0;
}

