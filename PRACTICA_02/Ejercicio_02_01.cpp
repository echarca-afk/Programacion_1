// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 07/09/2025
// Número de ejercicio: 1

#include <iostream>
#include <cstdlib>   // Para rand() y srand()
#include <ctime>     // Para time()
using namespace std;
int main() {
    int cantidadLanzamientos;
    cout << "Ingrese la cantidad de lanzamientos del dado: ";
    cin >> cantidadLanzamientos;

    // Inicializar la semilla para generar números aleatorios
    srand(time(0));

    // Contador de caras pares (2, 4, 6)
    int cantidadCarasPares = 0;

    for (int numeroLanzamiento = 1; numeroLanzamiento <= cantidadLanzamientos; ++numeroLanzamiento) {
        int valorCaraDado = rand() % 6 + 1; // Valor entre 1 y 6
        cout << "Lanzamiento " << numeroLanzamiento << ": " << valorCaraDado << std::endl;

        if (valorCaraDado % 2 == 0) {
            ++cantidadCarasPares;
        }
    }
    cout << "\nCantidad de caras pares obtenidas (2, 4, 6): " 
              << cantidadCarasPares << " de " << cantidadLanzamientos << " lanzamientos." << std::endl;

    return 0;
}