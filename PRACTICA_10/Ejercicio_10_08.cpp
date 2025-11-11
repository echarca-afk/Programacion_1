// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Fecha creación: 11/11/2025
// Número de ejercicio: 7
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

void ContarLineasPalabrasCaracteres(string NombreArchivo);
void MenuOpciones(string NombreArchivo);

int main() {
    MenuOpciones("documento.txt");
    return 0;
}

void MenuOpciones(string NombreArchivo) {
    int opcion = 0;
    do {
        cout << "\nMENU DE OPCIONES:\n";
        cout << "1. Contar líneas, palabras y caracteres\n";
        cout << "0. Salir\n";
        cout << "Ingrese la opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                ContarLineasPalabrasCaracteres(NombreArchivo);
                break;
            case 0:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opción inválida. Intente nuevamente.\n";
        }
    } while (opcion != 0);
}

void ContarLineasPalabrasCaracteres(string NombreArchivo) {
    ifstream archivo;
    archivo.open(NombreArchivo);
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo.\n";
        return;
    }

    string linea, palabra;
    int totalLineas = 0;
    int totalPalabras = 0;
    int totalCaracteres = 0;

    while (getline(archivo, linea)) {
        totalLineas++;
        totalCaracteres += linea.length() + 1; // +1 por el salto de línea
        stringstream ss(linea);
        while (ss >> palabra) {
            totalPalabras++;
        }
    }

    archivo.close();

    cout << "\n📊 Resultados:\n";
    cout << "Líneas: " << totalLineas << endl;
    cout << "Palabras: " << totalPalabras << endl;
    cout << "Caracteres (incluyendo saltos de línea): " << totalCaracteres << endl;
}