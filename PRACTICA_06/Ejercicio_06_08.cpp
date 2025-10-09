// Materia: Programación I, Paralelo 4
// Autor: Univ. Charca Canaviri Emiliano
// Carnet: 13740843
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 07/10/2025
// Número de ejercicio: 8
#include <iostream>
#include <string>
using namespace std;

bool esCorreoValido(string correo) {
    int arrobaPos = -1;
    int cantidadArrobas = 0;

    // Verificar cantidad de '@' y guardar su posición
    for (int i = 0; i < correo.length(); i++) {
        if (correo[i] == '@') {
            cantidadArrobas++;
            arrobaPos = i;
        }
    }

    // Debe haber exactamente un '@'
    if (cantidadArrobas != 1) {
        return false;
    }

    // Verificar si hay al menos un '.' después del '@'
    for (int i = arrobaPos + 1; i < correo.length(); i++) {
        if (correo[i] == '.') {
            return true;
        }
    }

    return false;
}

int main() {
    string entrada;
    cout << "Ingrese una dirección de correo: ";
    cin >> entrada;

    if (esCorreoValido(entrada)) {
        cout << "Correo electrónico válido" << endl;
    } else {
        cout << "Correo electrónico inválido" << endl;
    }

    return 0;
}