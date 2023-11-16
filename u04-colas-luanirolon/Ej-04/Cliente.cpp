//
// Created by Luani on 14/9/2023.
//
//
// Created by Luani on 14/9/2023.
//
#include <iostream>

class Cliente {
private:
    std::string nombre;
    int edad;
    bool embarazada;
    int cantidadProductos;
    float montoGastado;

public:
    // Constructor
    Cliente(std::string nombre, int edad, bool embarazada, int cantidadProductos, float montoGastado)
            : nombre(nombre), edad(edad), embarazada(embarazada), cantidadProductos(cantidadProductos), montoGastado(montoGastado) {}

    // Métodos para acceder a los atributos
    std::string getNombre() const {
        return nombre;
    }

    int getEdad() const {
        return edad;
    }

    bool esEmbarazada() const {
        return embarazada;
    }

    int getCantidadProductos() const {
        return cantidadProductos;
    }

    float getMontoGastado() const {
        return montoGastado;
    }

    // Método para obtener la prioridad (0 para embarazadas y 1 para otros)
    int getPrioridad() const {
        return embarazada ? 0 : 1;
    }
};
