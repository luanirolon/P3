//Utilizando una pila y una cola, realizar una función que reciba una cadena y devuelva el
// valor lógico verdadero si dicha cadena es un palidromo.
// No se deben tener en cuenta los espacios y signos de puntuación.
//
//Ejemplos de palidromo:
//
//anita lava la tina
//la ruta natural
//la ruta nos aporto otro paso natural
#include <iostream>

#include "../Cola/Cola.h"
#include <string>
#include <queue>
#include <stack>
#include <cctype>

bool esPalindromo(const std::string& cadena) {
    // Eliminar espacios y signos de puntuación de la cadena original
    std::string cadenaDepurada;
    for (char c : cadena) {
        if (std::isalpha(c)) {
            cadenaDepurada += std::tolower(c); // Convertir a minúsculas
        }
    }

    // Llenar una cola y una pila con los caracteres de la cadena depurada
    std::queue<char> cola;
    std::stack<char> pila;

    for (char c : cadenaDepurada) {
        cola.push(c);
        pila.push(c);
    }

    // Comparar los caracteres extraídos de la pila y la cola
    while (!cola.empty() && !pila.empty()) {
        if (cola.front() != pila.top()) {
            return false; // No es un palíndromo
        }
        cola.pop();
        pila.pop();
    }

    return true; // Es un palíndromo
}

int main() {
    std::string cadena;
    std::cout << "Ingrese una cadena: ";
    std::getline(std::cin, cadena);

    if (esPalindromo(cadena)) {
        std::cout << "Es un palindromo." << std::endl;
    } else {
        std::cout << "No es un palindromo." << std::endl;
    }

    return 0;
}
