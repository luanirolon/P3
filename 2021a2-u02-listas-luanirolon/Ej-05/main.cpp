//Escriba la clase CircList para implementar una lista circular

#include <iostream>
#include "CircList.h"
using namespace std;

int main() {
        CircList<int> lista;

        lista.insertarUltimo(1);
        lista.insertarUltimo(2);
        lista.insertarUltimo(3);

        lista.imprimir();
  return 0;
}
