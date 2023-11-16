//En un supermercado, se tiene sólo una caja habilitada para que los clientes puedan pagar
// sus compras. La caja tiene prioridad para mujeres embarazadas. Dada esta situación, se
// pide que se implemente un sistema que calcule la cantidad de productos comprados por cada cliente
// y el monto total gastado, también la cantidad de embarazadas que accedieron a la cola.


#include <iostream>
#include "../Cola/Cola.h"
#include "Cliente.cpp"

int main() {
    // Crear una cola para la caja del supermercado
    Cola<Cliente> colaSupermercado;

    // Variables para el seguimiento de estadísticas
    int cantidadProductosTotal = 0;
    float montoTotalGastado = 0.0;
    int cantidadEmbarazadas = 0;

    // Simular la llegada de clientes al supermercado
    // Solicitar los datos de los clientes por teclado
    char respuesta;
    do {
        std::string nombre;
        int edad;
        bool embarazada;
        int cantidadProductos;
        float montoGastado;

        std::cout << "Ingrese nombre del cliente: ";
        std::cin >> nombre;

        std::cout << "Ingrese edad del cliente: ";
        std::cin >> edad;

        std::cout << "¿Esta embarazada? (1 para si, 0 para no): ";
        std::cin >> embarazada;

        std::cout << "Ingrese cantidad de productos comprados: ";
        std::cin >> cantidadProductos;

        std::cout << "Ingrese monto gastado: $";
        std::cin >> montoGastado;

        Cliente nuevoCliente(nombre, edad, embarazada, cantidadProductos, montoGastado);

        // Agregar el cliente a la cola del supermercado
        colaSupermercado.encolarConPrioridad(nuevoCliente, nuevoCliente.getPrioridad());

        std::cout << "¿Desea ingresar otro cliente? (s/n): ";
        std::cin >> respuesta;
    } while (respuesta == 's' || respuesta == 'S');

    // Procesar la cola del supermercado
    while (!colaSupermercado.esVacia()) {
        // Obtener el cliente de mayor prioridad (mujer embarazada tiene mayor prioridad)
        Cliente clienteActual = colaSupermercado.desencolar();

        // Actualizar estadísticas
        cantidadProductosTotal += clienteActual.getCantidadProductos();
        montoTotalGastado += clienteActual.getMontoGastado();

        if (clienteActual.esEmbarazada()) {
            cantidadEmbarazadas++;
        }
    }

    // Mostrar estadísticas
    std::cout << "Estadísticas del supermercado:" << std::endl;
    std::cout << "Cantidad de productos vendidos en total: " << cantidadProductosTotal << std::endl;
    std::cout << "Monto total gastado por todos los clientes: $" << montoTotalGastado << std::endl;
    std::cout << "Cantidad de mujeres embarazadas atendidas: " << cantidadEmbarazadas << std::endl;

    return 0;
}
