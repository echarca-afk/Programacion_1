// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 09/09/2025
// Número de ejercicio: 3

#include <iostream>
#include <cstdlib>   // Para rand() y srand()
#include <ctime>     // Para time()

using namespace std;

int main() {
    // Inicializa la semilla para generar números aleatorios
    srand(time(0));

    // Genera un número aleatorio entre 1 y 10
    int numero = rand() % 10 + 1;
    cout << "Numero aleatorio generado: " << numero << endl;

    // Calcula el factorial del número
    int factorial = 1;
    for (int i = 1; i <= numero; i++) {
        factorial = factorial * i;
    }

    // Muestra el resultado
    cout << "El factorial de " << numero << " es: " << factorial << endl;

    return 0;
}