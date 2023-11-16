#ifndef U01_RECURSIVIDAD_EJ_05_DIGITOS_H_
#define U01_RECURSIVIDAD_EJ_05_DIGITOS_H_

#include <iostream>
using namespace std;

// Calcula la parte entera del cociente (a/b) de forma recursiva
int calcularParteEntera(int a, int b) {
    if (a < b) {
        return 0;
    } else {
        return 1 + calcularParteEntera(a - b, b);
    }
}

// Calcula el resto entero (a%b) de forma recursiva
int calcularRestoEntero(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return calcularRestoEntero(a - b, b);
    }
}

// Imprime un entero como una serie de dígitos separados por espacios
void imprimirDigitos(int n) {
    if (n < 10) {
        cout << n << " ";
    } else {
        imprimirDigitos(n / 10);
        cout << n % 10 << " ";
    }
}

#endif // U01_RECURSIVIDAD_EJ_05_DIGITOS_H_

