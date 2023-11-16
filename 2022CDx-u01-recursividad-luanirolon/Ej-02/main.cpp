//Implemente una función recursiva que, teniendo
// un array ingresado por teclado, me devuelva la suma de todos sus elementos
#include <iostream>
using namespace std;
#include "sumatoria.h"


int main() {

  int size;
  cout<< "Ingrese el tamanio del array: "<<endl;
  cin>>size;


  int arr[size];
  cout<<"Ingrese los elementos del array: "<< endl;
for(int i = 0; i< size; i++) {
    cin >> arr[i];
}

int total= sumaArrayRecursiva(arr, size, 0);
cout<<"La sumatoria es: "<<total<<endl;


  return 0;
}
