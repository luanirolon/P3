//Escribir segmentos de programa que lleven a cabo de forma recursiva,
// cada una de las siguientes tareas:
//Calcule la parte entera del cociente, cuando el entero a se divide por el entero b.
//Calcule el resto entero, cuando el entero a es dividido por el entero b.
//Utilice los módulos 1. y 2. para escribir una función recursiva que dado un entero no negativo
// lo imprima como una serie de dígitos separados por espacios.
//Ej: dado el entero 1024, debe escribir "1 0 2 4 "

#include <iostream>
#include "digitos.h"
using namespace std;


int main() {
    int a = 1024;
    int b = 5;

    cout << "Parte entera de " << a << " / " << b << " = " << calcularParteEntera(a, b) << endl;
    cout << "Resto de " << a << " / " << b << " = " << calcularRestoEntero(a, b) << endl;

    cout << "Dígitos de " << a << ": ";
    imprimirDigitos(a);
    cout << endl;

    return 0;
}

