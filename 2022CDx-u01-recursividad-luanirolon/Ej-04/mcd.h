#ifndef U01_RECURSIVIDAD_EJ_04_MCD_H_
#define U01_RECURSIVIDAD_EJ_04_MCD_H_

// Función recursiva para calcular el MCD utilizando el algoritmo de Euclides
int euclides(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return euclides(b, a % b);
    }
}

#endif // U01_RECURSIVIDAD_EJ_04_MCD_H_
