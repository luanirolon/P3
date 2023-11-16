#ifndef U04_COLAS_COLA_COLA_H_
#define U04_COLAS_COLA_COLA_H_
#include <iostream>
#include "Nodo.h"
using namespace std;
/**
 * Clase que implementa una Cola generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */
template <class T> class Cola {
private:
    Nodo<T> * tope, *fondo;
public:
  Cola();

  ~Cola();

  void encolar(T dato);

  T desencolar();

  bool esVacia();

  T peek();

  void encolarConPrioridad(T dato, int prioridad);
};

/**
 * Constructor de la clase Cola
 * @tparam T
 */
template <class T> Cola<T>::Cola() {
    tope= nullptr;
    fondo= nullptr;

}

/**
 * Destructor de la clase Cola, se encarga de liberar la memoria de todos los
 * nodos utilizados en la Cola
 * @tparam T
 */
template <class T> Cola<T>::~Cola() {
    while (!esVacia()){
        desencolar();
    }

    delete tope;
    delete fondo;
}

/**
 * Inserta un dato en la Cola
 * @tparam T
 * @param dato  dato a insertar
 */
template <class T> void Cola<T>::encolar(T dato) {
    Nodo<T> *nuevo=new Nodo<T>;
    nuevo-> setDato(dato);
    nuevo->setSiguiente(nullptr);

    if(esVacia()){
        tope=nuevo;
    }else{ fondo->setSiguiente(nuevo);}
    fondo = nuevo;
}

/**
 * Obtener el dato de la Cola
 * @tparam T
 * @return dato almacenado en el nodo
 */
template <class T> T Cola<T>::desencolar() {
    if(esVacia()){
        throw 404;
    }

    T dato=tope->getDato();
    Nodo<T> *aBorrar=tope;
    tope= tope->getSiguiente();

    if (tope==nullptr){
        fondo= nullptr;
    }

    delete aBorrar;
    return dato;
}

/**
 * Responde si la Cola se encuentra Vacía
 * @tparam T
 * @return
 */
template <class T> bool Cola<T>::esVacia() {
    return tope== nullptr;
}

template <class T> T Cola<T>::peek() {
    if (esVacia()) {
        throw 404;
    }
    return tope->getDato();
}
// Agregar un método para insertar un nodo con prioridad
template <class T>
void Cola<T>::encolarConPrioridad(T dato, int prioridad) {
    Nodo<T> *nuevo = new Nodo<T>(dato, prioridad);
    nuevo->setSiguiente(nullptr);

    // Si la cola está vacía o la nueva prioridad es mayor o igual a la de tope,
    // simplemente coloca el nuevo nodo al final de la cola
    if (esVacia() || prioridad >= tope->getPrioridad()) {
        if (esVacia()) {
            tope = nuevo;
        } else {
            fondo->setSiguiente(nuevo);
        }
        fondo = nuevo;
    } else {
        // Busca el último nodo con la misma prioridad
        Nodo<T> *anterior = nullptr;
        Nodo<T> *actual = tope;
        while (actual && actual->getPrioridad() == prioridad) {
            anterior = actual;
            actual = actual->getSiguiente();
        }

        // Inserta el nuevo nodo después del último nodo con la misma prioridad
        if (anterior) {
            anterior->setSiguiente(nuevo);
        } else {
            tope = nuevo; // Si no hay nodos con la misma prioridad, el nuevo nodo se convierte en el tope
        }
        nuevo->setSiguiente(actual);
    }
}


#endif // U04_COLAS_COLA_COLA_H_
