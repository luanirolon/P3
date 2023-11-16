//Crear una función que dada dos listas enlazadas, pasadas como parámetro, devuelva
// una lista enlazada que es la unión de las otras dos.

#include <iostream>
#include "../Lista/Lista.h"
#include "union.h"

using namespace std;

int main() {
    Lista<int> miLista;
    miLista.insertarUltimo(1);
    miLista.insertarUltimo(2);
    miLista.insertarUltimo(3);
    miLista.insertarUltimo(4);
    cout << "Lista original: ";
    miLista.mostrar();

    Lista<int> miListados;
    miListados.insertarUltimo(1);
    miListados.insertarUltimo(2);
    miListados.insertarUltimo(3);
    miListados.insertarUltimo(4);
    cout << "Lista original: ";
    miListados.mostrar();

    Lista<int> listaUnion = unirListas(miLista, miListados);

    cout << "Lista de unión: ";
    listaUnion.mostrar();


  return 0;
}
