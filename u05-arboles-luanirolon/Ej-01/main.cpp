#include <iostream>
#include <cstdlib>
#include "../Arbol/ArbolBinario.h"
using namespace std;

int main() {
    // Inicializo
    srand(time(0));

    // Creo array
    int numeros[30];
    for (int i = 0; i < 30; ++i) {
        numeros[i] = rand() % 401 + 100; // Genera números entre 100 y 500
    }

    // Imprimo
    cout << "Numeros generados aleatoriamente:" <<endl;
    for (int i = 0; i < 30; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    // Creo arbol
    ArbolBinario<int> arbol;
    for (int i = 0; i < 30; ++i) {
        arbol.put(numeros[i]);
    }

    // Imprimo
    cout << "Arbol binario de busqueda:" << endl;
    arbol.inorder();

    return 0;
}
