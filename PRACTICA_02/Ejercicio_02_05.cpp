// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 09/09/2025
// Número de ejercicio: 5

#include <iostream>
#include <cstdlib>   // Para rand() y srand()
#include <ctime>     // Para time()

using namespace std;

int main() {
    // Inicializa la semilla para números aleatorios
    srand(time(0));

    int cantidadNumeros;
    cout << "Ingrese la cantidad de numeros a generar: ";
    cin >> cantidadNumeros;

    // Variables para cálculos
    int sumaTotal = 0;
    int numeroMayor = 0;
    int numeroMenor = 1000;

    for (int i = 1; i <= cantidadNumeros; i++) {
        int numeroGenerado = rand() % 1000 + 1; // Número entre 1 y 1000
        cout << "Numero " << i << ": " << numeroGenerado << endl;

        // Acumula la suma
        sumaTotal += numeroGenerado;

        // Verifica si es el mayor
        if (numeroGenerado > numeroMayor) {
            numeroMayor = numeroGenerado;
        }

        // Verifica si es el menor
        if (numeroGenerado < numeroMenor) {
            numeroMenor = numeroGenerado;
        }
    }

    // Calcula el promedio
    float promedio = (float)sumaTotal / cantidadNumeros;
    // Muestra resultados
    cout << "\nResultados:" << endl;
    cout << "a. Sumatoria: " << sumaTotal << endl;
    cout << "b. Promedio: " << promedio << endl;
    cout << "c. Mayor valor: " << numeroMayor << endl;
    cout << "d. Menor valor: " << numeroMenor << endl;

    return 0;
}