//
// Created by Luani on 6/9/2023.
//

#ifndef U03_PILAS_LUANIROLON_CONTROL_H
#define U03_PILAS_LUANIROLON_CONTROL_H
#include <iostream>
#include <stack>
using namespace std;

bool estanBalanceados(const string& funcion) {
    stack<char> pila;

    for (char caracter : funcion) {
        if (caracter == '(' || caracter == '[' || caracter == '{') {
            pila.push(caracter);
        } else if (caracter == ')' || caracter == ']' || caracter == '}') {
            if (pila.empty()) {
                return false; // Hay una cerradura sin abertura correspondiente
            }

            char abertura = pila.top();
            pila.pop();

            if ((caracter == ')' && abertura != '(') ||
                (caracter == ']' && abertura != '[') ||
                (caracter == '}' && abertura != '{')) {
                return false; // No coinciden las aberturas y las cerraduras
            }
        }
    }

    return pila.empty(); // La pila debe estar vacía al final si están balanceados
}
#endif //U03_PILAS_LUANIROLON_CONTROL_H
