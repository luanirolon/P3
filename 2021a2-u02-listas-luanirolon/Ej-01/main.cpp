//Implementar la función fnInvierte(lista). Esta función invertirá el orden original de
// los elementos en la lista, de tal forma que el último elemento será ahora el primero,
// el penúltimo será el segundo, y así hasta que el primero sea el último. Considere que la lista no
// está vacía y que no se construirá una nueva, sólo se invertirá el orden de los elementos
// de la lista original.
#include <iostream>

#include "../Lista/Lista.h"
#include "fnInvierte.h"
using namespace std;

int main() {
    Lista<int> miLista;
    miLista.insertarUltimo(1);
    miLista.insertarUltimo(2);
    miLista.insertarUltimo(3);
    miLista.insertarUltimo(4);

    cout << "Lista original: ";
    miLista.mostrar();

    miLista.invertir();

    cout << "Lista invertida: ";
    miLista.mostrar();

    return 0;
}
