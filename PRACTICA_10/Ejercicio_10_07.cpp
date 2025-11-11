// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Fecha creación: 11/11/2025
// Número de ejercicio: 7
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

void CalcularPromedios(string ArchivoEntrada, string ArchivoSalida);
void MenuOpciones(string ArchivoEntrada, string ArchivoSalida);

int main() {
    MenuOpciones("calificaciones.txt", "promedios.txt");
    return 0;
}

void MenuOpciones(string ArchivoEntrada, string ArchivoSalida) {
    int opcion = 0;
    do {
        cout << "\nMENU DE OPCIONES:\n";
        cout << "1. Calcular promedios por estudiante\n";
        cout << "0. Salir\n";
        cout << "Ingrese la opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                CalcularPromedios(ArchivoEntrada, ArchivoSalida);
                break;
            case 0:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opción inválida. Intente nuevamente.\n";
        }
    } while (opcion != 0);
}

void CalcularPromedios(string ArchivoEntrada, string ArchivoSalida) {
    ifstream archivoIn;
    ofstream archivoOut;
    archivoIn.open(ArchivoEntrada);
    archivoOut.open(ArchivoSalida);

    if (!archivoIn.is_open() || !archivoOut.is_open()) {
        cout << "Error al abrir los archivos.\n";
        return;
    }

    string linea, nombre;
    float nota, suma;
    int cantidad;

    while (getline(archivoIn, linea)) {
        stringstream ss(linea);
        ss >> nombre;
        suma = 0;
        cantidad = 0;

        while (ss >> nota) {
            suma += nota;
            cantidad++;
        }

        float promedio = (cantidad > 0) ? suma / cantidad : 0;
        archivoOut << nombre << " " << promedio << endl;
    }

    archivoIn.close();
    archivoOut.close();
    cout << "Archivo 'promedios.txt' generado correctamente.\n";
}