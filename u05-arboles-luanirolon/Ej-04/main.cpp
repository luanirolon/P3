#include <iostream>
#include "../Arbol/ArbolBinario.h"

int main() {
    ArbolBinario<int> arbol;

    // Agrega elementos al árbol (por ejemplo)
    arbol.put(5);
    arbol.put(3);
    arbol.put(7);
    arbol.put(2);
    arbol.put(4);
    arbol.put(6);
    arbol.put(8);

    // Muestra el árbol original
    std::cout << "Arbol original:" << std::endl;
    arbol.print();

    // Aplica la operación espejo
    arbol.espejo();

    // Muestra el árbol después de aplicar la operación espejo
    std::cout << "Arbol despues de la operacion espejo:" << std::endl;
    arbol.print();

    return 0;
}
