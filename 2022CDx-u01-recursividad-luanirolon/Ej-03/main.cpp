//Algoritmo de Ackerman -> Número de Combinaciones Recursivamente, podemos definir el número
// de combinaciones de m objetos tomados de n, denotado: Notacin Ackermann

#include <iostream>
#include "./ackerman.h"
using namespace std;


int main() {
    int m = 3;
    int n = 4;

    int result = ackermann(m, n);
    cout << "Ackermann(" << m << ", " << n << ") = " << result << endl;

    return 0;
}

