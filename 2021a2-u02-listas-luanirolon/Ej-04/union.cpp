//
// Created by Luani on 6/9/2023.
//
#include "../Lista/Lista.h"
#include "union.h"

#ifndef U02_LISTAS_EJ_04_UNION_H_
#define U02_LISTAS_EJ_04_UNION_H_

template <class T>
Lista<T> unirListas(const Lista<T>& lista1, const Lista<T>& lista2) {
    Lista<T> listaUnion;

    // Copiar elementos de la primera lista
    int tamanio1 = lista1.getTamanio();
    for (int i = 0; i < tamanio1; i++) {
        listaUnion.insertarUltimo(lista1.getDato(i));
    }

    // Copiar elementos de la segunda lista
    int tamanio2 = lista2.getTamanio();
    for (int i = 0; i < tamanio2; i++) {
        listaUnion.insertarUltimo(lista2.getDato(i));
    }

    return listaUnion;
}


#endif // U02_LISTAS_EJ_04_UNION_H_
