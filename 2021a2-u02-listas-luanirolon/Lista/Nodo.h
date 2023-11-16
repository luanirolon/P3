//
// Created by Luani on 17/8/2023.
//

#ifndef INC_2021A2_U02_LISTAS_LUANIROLON_NODO_H
#define INC_2021A2_U02_LISTAS_LUANIROLON_NODO_H


template<class T>
class Nodo{
private:
    T dato;
    Nodo<T> *siguiente;

public:
    T getDato(){
        return dato;
    }

    void setDato(T d){
        dato = d;
    }

    Nodo<T> *getSiguiente(){
        return siguiente;
    }

    void setSiguiente(Nodo<T> *siguiente){
        this->siguiente = siguiente;
    }


};


#endif //INC_2021A2_U02_LISTAS_LUANIROLON_NODO_H

//-implementar una funcion recursiva que dado un numero entero lo muestre de fomma
//invertida ej:10523, debe mostrar 32501. dar aviso de error en caso de numeros negativos
//
//-implementar una funcion que pida por marametro una lista y un dato n de tipo entero, la funcion debe eleiminar de la lista todos los datos iguales al parametro n:
//ejemplo:  2->4->3->8->5->3->4->9->nullptr
//eleminar(3)
//2->4->8->5->4->9->nulptr;
//
//-implementar una funcion que reciba una cola y una pila vacía por parametro, debera mover los nodos de la posiciones par a la pila, considerar la primera posicion como 1.
//eje:
//cola: 1->2->8->4->2->6->7->8->nullpe
//-moverpos(cola, pila)
//cola->2->4->6->8->null
//pila->1->8->2->7-nulprt