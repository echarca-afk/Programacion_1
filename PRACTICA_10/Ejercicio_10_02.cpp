// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Fecha creación: 11/11/2025
// Número de ejercicio: 2
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

void ContarPalabras(string NombreArchivo);
void MenuOpciones(string NombreArchivo);

int main() {
    MenuOpciones("texto.txt");
    return 0;
}

void MenuOpciones(string NombreArchivo) {
    int opcion = 0;
    do {
        cout << "\nMENU DE OPCIONES:\n";
        cout << "1. Contar palabras en el archivo\n";
        cout << "0. Salir\n";
        cout << "Ingrese la opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                ContarPalabras(NombreArchivo);
                break;
            case 0:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opción inválida. Intente nuevamente.\n";
        }
    } while (opcion != 0);
}

void ContarPalabras(string NombreArchivo) {
    ifstream archivo;
    archivo.open(NombreArchivo);
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo.\n";
        return;
    }

    string linea, palabra;
    int contador = 0;

    while (getline(archivo, linea)) {
        stringstream ss(linea);
        while (ss >> palabra) {
            contador++;
        }
    }

    archivo.close();
    cout << "El archivo contiene " << contador << " palabras.\n";
}