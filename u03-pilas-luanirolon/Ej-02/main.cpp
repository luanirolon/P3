#include <iostream>
using namespace std;

#include "../Pila/Pila.h"

int main() {
    Pila<int> Pilauno;
    Pila<int> Pilados;
    int dato;
    int cont1 = 0;
    int cont2 = 0;

    cout << "Ingrese los datos de la pila 1, ingrese '-1' para finalizar la lista" << endl;

    while (cin >> dato && dato != -1) {
        Pilauno.push(dato);
        cont1++;
    }

    cout << "Ingrese los datos de la pila 2, ingrese '-1' para finalizar la lista" << endl;

    while (cin >> dato && dato != -1) {
        Pilados.push(dato);
        cont2++;
    }

    if (cont1 != cont2) {
        cout << "Son distintas" << endl;
    } else {
        bool iguales = true;

        while (!Pilauno.esVacia() && !Pilados.esVacia()) {
            if (Pilauno.peek() != Pilados.peek()) {
                iguales = false;
                break;
            }
            Pilauno.pop();
            Pilados.pop();
        }

        if (iguales) {
            cout << "Las pilas son iguales" << endl;
        } else {
            cout << "Las pilas son distintas" << endl;
        }
    }

    return 0;
}
