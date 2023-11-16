//Implementar una funcion llamada printInverso que imprima los elementos de una lista enlazada
// no vacia de numeros enteros a partir de una posicion 'p'. No va a eliminar o reemplazar
//elementos de la lista original. Se debe mostrar la lista original y luego la invertida.


#include <iostream>
#include "Estructuras/Lista.h"
using namespace std;


int main() {
    int pos;

    Lista<int> Listaparcial;
    cout << "Ingrese un dato(terminar con '-1'): " ;
    int dato;
    cin>>dato;
    while (dato != -1){
        Listaparcial.insertarUltimo(dato);
        cin>>dato;
    }
    Listaparcial.mostrar();

    cout<<"Ingrese una posicion: "<<endl;
    cin>>pos;

    Lista<int> aux; //lista aux
    int tam= Listaparcial.getTamanio();
    if(pos>0){
        for (int i = tam-1; i>=pos ; --i) { //recorre la lista del final a la posicion y la pone en una lista aux;
            aux.insertarUltimo(Listaparcial.getDato(i));
        }

        aux.mostrar();
    }else
    {cout<<"Error";}


    return 0;
}
