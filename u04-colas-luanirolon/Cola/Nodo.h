template <class T>
class Nodo {
private:
    T dato;
    int prioridad; // Nuevo campo de prioridad
    Nodo<T> *siguiente;

public:
    Nodo() : prioridad(0), siguiente(nullptr) {} // Constructor por defecto

    // Constructor con dato y prioridad
    Nodo(T d, int p) : dato(d), prioridad(p), siguiente(nullptr) {}

    T getDato() {
        return dato;
    }

    int getPrioridad() {
        return prioridad;
    }

    void setDato(T d) {
        dato = d;
    }

    Nodo<T> *getSiguiente() {
        return siguiente;
    }

    void setSiguiente(Nodo<T> *siguiente) {
        this->siguiente = siguiente;
    }
};
