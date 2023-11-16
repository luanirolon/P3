#include <iostream>
#include "../Arbol/ArbolBinario.h"


int main() {
    ArbolBinario<int> arbol;


    arbol.put(5);
    arbol.put(3);
    arbol.put(7);
    arbol.put(2);
    arbol.put(4);
    arbol.put(6);
    arbol.put(8);

    std::cout << "Arbol completo:" << std::endl;
    arbol.print();

    int nivelDeseado = 2;
    int nodosEnNivel = arbol.contarPorNivel(nivelDeseado);
    std::cout << "Numero de nodos en el nivel " << nivelDeseado << ": " << nodosEnNivel << std::endl;

    return 0;
}