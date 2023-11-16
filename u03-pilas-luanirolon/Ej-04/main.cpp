//Escriba un programa que ingresada una función matemática,
// informe si la cantidad de (, [, { que abren están balanceados con los que cierran.

#include <iostream>
#include "../Pila/Pila.h"
#include "control.h"

using namespace std;


int main() {
    string funcion;
    cout << "Ingrese una funcion matematica: ";
    cin >> funcion;

    if (estanBalanceados(funcion)) {
        cout << "Los parentesis estan balanceados." << endl;
    } else {
        cout << "Los parentesis no estan balanceados." << endl;
    }
  return 0;
}
