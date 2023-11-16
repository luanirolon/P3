//Diseñe un programa que sea capaz de leer dos colas y mediante un mensaje
//indicar si son iguales. Nota: los elementos constitutivos de las colas son caracteres.
#include <iostream>
#include "../Cola/Cola.h"
using namespace std;


int main() {
    // Crear dos colas
    Cola<char> cola1;
    Cola<char> cola2;

    // Llenar la primera cola
    cout << "Ingrese elementos para la primera cola (terminar con '#'): ";
    char elemento;
    while ((elemento = cin.get()) && elemento != '#') {
        cola1.encolar(elemento);
    }

    // Llenar la segunda cola
   cin.clear(); // Limpiar el estado de cin
   cout << "Ingrese elementos para la segunda cola (terminar con '#'): ";
    while ((elemento = cin.get()) && elemento != '#') {
        cola2.encolar(elemento);
    }

    // Comparar las colas
    bool sonIguales = true;

    while (!cola1.esVacia() && !cola2.esVacia()) {
        if (cola1.desencolar() != cola2.desencolar()) {
            sonIguales = false;
            break;
        }
    }

    // Verificar si las colas son iguales
    if (sonIguales && cola1.esVacia() && cola2.esVacia()) {
        cout << "Las colas son iguales." <<endl;
    } else {
        cout << "Las colas NO son iguales." << endl;
    }

    return 0;
}


