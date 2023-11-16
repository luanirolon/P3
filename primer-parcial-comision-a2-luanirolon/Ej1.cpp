//Implementar una funcion recursiva que determine la suma de los 'n' primeros numeros naturales.
//ej: para n=5 mostrar por pantalla 1+2+3+4+5 y luego el resultado de la suma.
#include <iostream>
using namespace std;

//Esta función calcula la suma de los primeros 'n' números naturales de forma recursiva.
int suma(int n) {
    // Si n es igual a 1, significa que estamos en el caso base.
    // Imprime "1" y retorna 1, ya que la suma de los primeros 1 número natural es 1.
    // En caso contrario (n no es igual a 1), llamamos a la función 'suma' de forma recursiva
    // para calcular la suma de los números desde 1 hasta 'n-1'.
    if (n == 1) {
        cout << "1";
        return 1;
    } else {
        int sumaAnterior = suma(n - 1);
        cout << "+" << n;
        return sumaAnterior + n;
    }
}

int main() {
    int n;
    cout << "Ingrese un numero n: ";
    cin >> n;

    if (n <= 0) {
        cout << "El numero debe ser un numero (mayor que 0)." <<endl;
    } else {
        cout << "La suma de los primeros " << n << " numeros es: ";
        int resultado = suma(n);
        cout << " = " << resultado << endl;
    }

    return 0;
}
