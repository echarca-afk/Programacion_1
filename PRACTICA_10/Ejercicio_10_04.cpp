// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Fecha creación: 11/11/2025
// Número de ejercicio: 4
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void BuscarTexto(string NombreArchivo);
void MenuOpciones(string NombreArchivo);

int main() {
    MenuOpciones("datos.txt");
    return 0;
}

void MenuOpciones(string NombreArchivo) {
    int opcion = 0;
    do {
        cout << "\nMENU DE OPCIONES:\n";
        cout << "1. Buscar palabra o frase\n";
        cout << "0. Salir\n";
        cout << "Ingrese la opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                BuscarTexto(NombreArchivo);
                break;
            case 0:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opción inválida. Intente nuevamente.\n";
        }
    } while (opcion != 0);
}

void BuscarTexto(string NombreArchivo) {
    ifstream archivo;
    archivo.open(NombreArchivo);
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo.\n";
        return;
    }

    string palabraBuscada;
    string linea;
    int contador = 0;

    cin.ignore(); // limpiar buffer
    cout << "Ingrese la palabra o frase a buscar: ";
    getline(cin, palabraBuscada);

    while (getline(archivo, linea)) {
        size_t pos = 0;
        while ((pos = linea.find(palabraBuscada, pos)) != string::npos) {
            contador++;
            pos += palabraBuscada.length(); // avanzar para evitar contar la misma aparición
        }
    }

    archivo.close();
    cout << "La palabra o frase \"" << palabraBuscada << "\" aparece " << contador << " veces en el archivo.\n";
}