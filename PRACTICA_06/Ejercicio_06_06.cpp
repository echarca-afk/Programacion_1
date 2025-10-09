// Materia: Programación I, Paralelo 4
// Autor: Univ. Charca Canaviri Emiliano
// Carnet: 13740843
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 07/10/2025
// Número de ejercicio: 6
#include <iostream>
#include <cstdlib> // Para rand()
#include <ctime>   // Para time()

using namespace std;

int main() {
    int N;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> N;

    int calificaciones[100]; // Vector con capacidad máxima de 100

    // Inicializar aleatoriedad
    srand(time(0));

    // Contadores por rango
    int reprobado = 0, regular = 0, bueno = 0, excelente = 0;

    // Generar calificaciones y contar por rango
    for (int i = 0; i < N; i++) {
        calificaciones[i] = rand() % 101; // Entre 0 y 100
        cout << "Estudiante " << i + 1 << ": " << calificaciones[i] << endl;

        if (calificaciones[i] < 60)
            reprobado++;
        else if (calificaciones[i] < 80)
            regular++;
        else if (calificaciones[i] < 90)
            bueno++;
        else
            excelente++;
    }

    // Mostrar porcentajes
    cout << "\nPorcentajes por rango:\n";
    cout << "Reprobado (0-59): " << (reprobado * 100.0 / N) << "%\n";
    cout << "Regular   (60-79): " << (regular * 100.0 / N) << "%\n";
    cout << "Bueno     (80-89): " << (bueno * 100.0 / N) << "%\n";
    cout << "Excelente (90-100): " << (excelente * 100.0 / N) << "%\n";

    return 0;
}