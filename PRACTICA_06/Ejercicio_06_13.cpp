// Materia: Programación I, Paralelo 4
// Autor: Univ. Charca Canaviri Emiliano
// Carnet: 13740843
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 07/10/2025
// Número de ejercicio: 13
#include <iostream>
#include <string>
using namespace std;

string capitalizarManual(string texto) {
    bool nuevaPalabra = true;

    for (int i = 0; i < texto.length(); i++) {
        char c = texto[i];

        // Detectar inicio de palabra
        if (c == ' ') {
            nuevaPalabra = true;
        } else if (nuevaPalabra && c >= 'a' && c <= 'z') {
            // Convertir a mayúscula manualmente
            texto[i] = c - ('a' - 'A');
            nuevaPalabra = false;
        } else {
            nuevaPalabra = false;
        }
    }

    return texto;
}
int main() {
    string frase;
    cout << "Ingrese una frase: ";
    getline(cin, frase);

    string resultado = capitalizarManual(frase);
    cout << "Resultado: " << resultado << endl;

    return 0;
}