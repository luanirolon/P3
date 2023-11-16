//Implemente una función para potencias enteras con recursividad. Definición recursiva para elevar
// un número a una potencia: Un número elevado a la potencia cero produce la unidad;
// la potencia de un número se obtiene multiplicándolo por sí mismo elevando a la potencia menos uno.
// Por ejemplo:
//32=3*(31)=3*[3*(30)]=3*(3*1)=9

#include <iostream>
#include "potencia.h"
using namespace std;
int main() {

    unsigned int exp, base;

    cout<<"Ingrese una base: "<<endl;
    cin>>exp;
    cout<< "Ingrese un exponente: "<<endl;
    cin>>base;

    cout<<"La potencia de "<<exp<<" a la "<<base<<"es: "<<potencia(exp,base);

}
