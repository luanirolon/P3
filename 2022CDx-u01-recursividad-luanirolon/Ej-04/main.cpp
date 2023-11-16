//Algoritmo de Euclides: mostrar que el máximo común divisor (mcd) de a y b, (a > b > 0),
// es igual a a si b es cero, en otro caso es igual al mcd de b y el remanente
//de a dividido por b, si b > 0.

#include <iostream>
using namespace std;
#include "mcd.h"


int main() {
    int num1, num2;
    cout << "Ingresa dos números enteros: ";
    cin >> num1 >> num2;

    int gcd = euclides(num1, num2);
    cout << "El máximo común divisor de " << num1 << " y " << num2 << " es: " << gcd << endl;

    return 0;
}

