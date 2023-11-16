#include "./sumatoria.h"


int sumaArrayRecursiva(int arr[], int size, int index) {
    // Caso base: cuando el índice llega al final del array
    if (index == size) {
        return 0;
    } else {
        // Caso recursivo: elemento actual + suma de los elementos restantes
        return arr[index] + sumaArrayRecursiva(arr, size, index + 1);
    }
}