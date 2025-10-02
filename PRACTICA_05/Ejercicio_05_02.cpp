// Materia: Programación I, Paralelo 4
// Autor: Charca Canaviri Emiliano
// Carnet: 13740843
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 02/10/2025
// Número de ejercicio: 2

#include <iostream>
using namespace std;
void despliegue(double voltios[9]);
int main() {
    // Declaración e inicialización del arreglo
    double voltios[9] = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};
    void despliegue(double voltios[9]);
    // Despliegue de los valores, tres por línea
    for (int i = 0; i < 9; i++) {
        cout << voltios[i] << " ";
        if ((i + 1) % 3 == 0) {
            cout << endl;
        }
    }

    return 0;
}
void despliegue(double voltios[9]){
// Despliegue de los valores, tres por línea
    for (int i = 0; i < 9; i++) {
        cout << voltios[i] << " ";
        if ((i + 1) % 3 == 0) {
            cout << endl;
        }
    }
}