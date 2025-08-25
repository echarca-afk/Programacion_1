// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 24/08/2025
// Número de ejercicio: 7

#include <iostream>
using namespace std;

int main() {
    char letra;

    cout << "Ingrese un caracter: ";
    cin >> letra;

    //VOCALES
    switch (letra) {
        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
            cout << "Es una vocal." << endl;
            break;

        //CONSONANTES
        case 'b': case 'B': case 'c': case 'C': case 'd': case 'D':
        case 'f': case 'F': case 'g': case 'G': case 'h': case 'H':
        case 'j': case 'J': case 'k': case 'K': case 'l': case 'L':
        case 'm': case 'M': case 'n': case 'N': case 'p': case 'P':
        case 'q': case 'Q': case 'r': case 'R': case 's': case 'S':
        case 't': case 'T': case 'v': case 'V': case 'w': case 'W':
        case 'x': case 'X': case 'y': case 'Y': case 'z': case 'Z':
            cout << "Es una consonante." << endl;
            break;

        default:
            cout << "Es un carácter especial." << endl;
    }

    return 0;
}

