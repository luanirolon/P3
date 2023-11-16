//Agregue un método a la clase cola para insertar un nodo según un valor entero de prioridad.
// El valor 0 es la máxima prioridad. Este método debe colocar el nodo
// lo mas próximo al frente de la cola, pero atrás del ultimo nodo con la misma prioridad.
#include <iostream>
#include "../Cola/Cola.h"

int main() {
    // Crear una cola
    Cola<int> cola;

    // Insertar elementos con prioridad
    cola.encolarConPrioridad(1, 2); // Insertar el elemento 1 con prioridad 2
    cola.encolarConPrioridad(2, 0); // Insertar el elemento 2 con prioridad 0 (máxima prioridad)
    cola.encolarConPrioridad(3, 1); // Insertar el elemento 3 con prioridad 1

    // Acceder a los elementos de la cola (puedes usar desencolar para sacarlos uno por uno)
    std::cout << "Elementos en la cola: ";
    while (!cola.esVacia()) {
        std::cout << cola.desencolar() << " ";
    }
    std::cout << std::endl;

    return 0;
}
