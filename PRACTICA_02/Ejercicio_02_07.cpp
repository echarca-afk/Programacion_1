// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 09/09/2025
// Número de ejercicio: 7

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int lanzamientos, caras = 0;
    cout << "Cantidad de lanzamientos: ";
    cin >> lanzamientos;

    srand(time(0)); // Semilla aleatoria

    for (int i = 1; i <= lanzamientos; ++i) {
        bool esCara = rand() % 2;
        caras += esCara;
        cout << "Lanzamiento " << i << ": " << (esCara ? "Cara" : "Cruz") << endl;
    }

    int cruces = lanzamientos - caras;
    cout << "\nResultados:\n";
    cout << "Caras: " << caras << " (" << (caras * 100.0 / lanzamientos) << "%)\n";
    cout << "Cruces: " << cruces << " (" << (cruces * 100.0 / lanzamientos) << "%)\n";

    return 0;
}