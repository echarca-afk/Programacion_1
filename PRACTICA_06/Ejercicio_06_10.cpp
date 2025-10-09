// Materia: Programación I, Paralelo 4
// Autor: Univ. Charca Canaviri Emiliano
// Carnet: 13740843
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 07/10/2025
// Número de ejercicio: 10
#include <iostream>
#include <string>
using namespace std;

int main() {
    string entrada, resultado = "";
    cout << "Ingrese una cadena: ";
    cin >> entrada;

    for (int i = 0; i < entrada.length(); i++) {
        // Verifica si el carácter NO está entre '0' y '9'
        if (entrada[i] < '0' || entrada[i] > '9') {
            resultado += entrada[i];
        }
    }

    cout << "Cadena sin dígitos: " << resultado << endl;
    return 0;
}