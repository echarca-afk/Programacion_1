// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 09/09/2025
// Número de ejercicio: 6

#include <iostream>
#include <cstdlib>   // Para rand() y srand()
#include <ctime>     // Para time()

using namespace std;

int main() {
    // Inicializa la semilla para generar números aleatorios
    srand(time(NULL));

    int cantidadNumeros; // Cantidad de números a generar
    cout << "Ingrese la cantidad de numeros aleatorios a generar: ";
    cin >> cantidadNumeros;

    int contadorPrimos = 0; // Contador de números primos

    // Generar y evaluar cada número
    for (int i = 1; i <= cantidadNumeros; i++) {
        int numeroAleatorio = rand() % 10000 + 1; // Número entre 1 y 10000
        bool esPrimo = true; // Supone que el número es primo

        // Verifica si el número es menor o igual a 1
        if (numeroAleatorio <= 1) {
            esPrimo = false;
        } else {
            // Verifica si tiene algún divisor entre 2 y su raíz cuadrada
            for (int divisor = 2; divisor * divisor <= numeroAleatorio; divisor++) {
                if (numeroAleatorio % divisor == 0) {
                    esPrimo = false;
                    break; // Ya no es primo, no hace falta seguir
                }
            }
        }

        // Mostrar el número y si es primo
        if (esPrimo) {
            cout << numeroAleatorio << " es primo" << endl;
            contadorPrimos++;
        } else {
            cout << numeroAleatorio << endl;
        }
    }
    // Mostrar resultado final
    cout << "\nCantidad total de numeros primos generados: " << contadorPrimos << endl;

    return 0;
}