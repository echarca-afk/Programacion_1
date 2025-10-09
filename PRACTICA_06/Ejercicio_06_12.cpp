// Materia: Programación I, Paralelo 4
// Autor: Univ. Charca Canaviri Emiliano
// Carnet: 13740843
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 07/10/2025
// Número de ejercicio: 12
#include <iostream>
#include <string>
using namespace std;

// Función auxiliar para limpiar el texto
string limpiarTexto(string texto) {
    string limpio = "";

    for (int i = 0; i < texto.length(); i++) {
        char c = texto[i];

        // Convertir a minúscula manualmente
        if (c >= 'A' && c <= 'Z') {
            c = c + ('a' - 'A');
        }

        // Conservar solo letras minúsculas
        if (c >= 'a' && c <= 'z') {
            limpio += c;
        }
    }

    return limpio;
}

// Función principal para verificar si es palíndromo
bool esPalindromo(string texto) {
    string limpio = limpiarTexto(texto);
    int izquierda = 0;
    int derecha = limpio.length() - 1;

    while (izquierda < derecha) {
        if (limpio[izquierda] != limpio[derecha]) {
            return false;
        }
        izquierda++;
        derecha--;
    }

    return true;
}
int main() {
    string frase;
    cout << "Ingrese una frase: ";
    getline(cin, frase);

    if (esPalindromo(frase)) {
        cout << "Es un palíndromo." << endl;
    } else {
        cout << "No es un palíndromo." << endl;
    }

    return 0;
}