#include <iostream>
#include "../Lista/Lista.h"
#include "noentero.h"

using namespace std;

int main() {
    Lista<double> List;
    double dato;

    while (true) {
        // Mostrar opciones y pedir al usuario que elija
        cout << "Opciones:" << endl;
        cout << "1. Agregar al principio" << endl;
        cout << "2. Agregar en el medio" << endl;
        cout << "3. Agregar al final" << endl;
        cout << "4. Mostrar lista" << endl;
        cout << "5. Salir" << endl;
        int opcion;
        cout << "Elija una opcion: ";
        cin >> opcion;

        if (opcion == 5) {
            break;  // Salir del bucle principal si se elige la opción 5
        }

        // Realizar la operación según la opción elegida
        switch (opcion) {
            case 1: {
                char respuesta;
                do {
                    cout << "Ingrese un numero no entero: ";
                    cin >> dato;
                    if (esNumeroNoEntero(dato)) {
                        List.insertarPrimero(dato);
                        cout << "¿Desea agregar otro numero no entero? (S/N): ";
                        cin >> respuesta;
                    } else {
                        cout << "Error: debe ingresar un número no entero." << endl;
                        respuesta = 'S';
                    }
                } while (respuesta == 'S' || respuesta == 's');
                break;
            }
            case 2: {
                char respuesta;
                do {
                    cout << "Ingrese un numero no entero: ";
                    cin >> dato;
                    if (esNumeroNoEntero(dato)) {
                        List.insertarEnMedio(dato);
                        cout << "¿Desea agregar otro numero no entero? (S/N): ";
                        cin >> respuesta;
                    } else {
                        cout << "Error: debe ingresar un numero no entero." << endl;
                        respuesta = 'S';
                    }
                } while (respuesta == 'S' || respuesta == 's');
                break;
            }
            case 3: {
                char respuesta;
                do {
                    cout << "Ingrese un numero no entero: ";
                    cin >> dato;
                    if (esNumeroNoEntero(dato)) {
                        List.insertarUltimo(dato);
                        cout << "¿Desea agregar otro numero no entero? (S/N): ";
                        cin >> respuesta;
                    } else {
                        cout << "Error: debe ingresar un numero no entero." << endl;
                        respuesta = 'S';
                    }
                } while (respuesta == 'S' || respuesta == 's');
                break;
            }
            case 4: {
                cout << "La lista es: " << endl;
                List.mostrar();
                break;
            }
        }
    }

    return 0;
}
