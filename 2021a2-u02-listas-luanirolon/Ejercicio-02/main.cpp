//
// Created by Luani on 20/9/2023.
//
//-implementar una funcion que pida por marametro una lista y un dato n de tipo entero, la
// funcion debe eleiminar de la lista todos los datos iguales al parametro n:
//ejemplo:  2->4->3->8->5->3->4->9->nullptr
//eleminar(3)
//2->4->8->5->4->9->nulptr;
//
#include <iostream>
#include "../Lista/Lista.h"
using namespace std;

void eliminar(Lista<int>&Listaparcial, int dato){
    int tam=Listaparcial.getTamanio();
    int pos=0;
    for (int i = 0; i < tam; ++i) {
        if (Listaparcial.getDato(pos)==dato){
            Listaparcial.remover(pos);
            pos--;
    }
    }

    Listaparcial.print();
}
int main(){

    Lista<int>Listaparcial;
    int dato, op, num;

    do {
        cout<<"Ingrese un dato: "<<endl;
        cin>>dato;
        Listaparcial.insertarUltimo(dato);
        cout<<"Ingrese 1 si desea continuar o 0 para finalizar"<<endl;
        cin>>op;
    }while (op==1);

    cout<<"Ingrese el numero que desea eliminar: "<<endl;
    cin>>num;

   eliminar(Listaparcial, num);




    return 0;
}