// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Fecha creación: 11/11/2025
// Número de ejercicio: 6
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

void FiltrarTemperaturas(string ArchivoEntrada, string ArchivoSalida);
void MenuOpciones(string ArchivoEntrada, string ArchivoSalida);

int main() {
    MenuOpciones("temperaturas.txt", "altas_temperaturas.txt");
    return 0;
}

void MenuOpciones(string ArchivoEntrada, string ArchivoSalida) {
    int opcion = 0;
    do {
        cout << "\nMENU DE OPCIONES:\n";
        cout << "1. Filtrar ciudades con altas temperaturas\n";
        cout << "0. Salir\n";
        cout << "Ingrese la opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                FiltrarTemperaturas(ArchivoEntrada, ArchivoSalida);
                break;
            case 0:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opción inválida. Intente nuevamente.\n";
        }
    } while (opcion != 0);
}

void FiltrarTemperaturas(string ArchivoEntrada, string ArchivoSalida) {
    ifstream archivoIn;
    ofstream archivoOut;
    archivoIn.open(ArchivoEntrada);
    archivoOut.open(ArchivoSalida);

    if (!archivoIn.is_open() || !archivoOut.is_open()) {
        cout << "Error al abrir los archivos.\n";
        return;
    }

    float umbral;
    string linea, ciudad;
    float temperatura;

    cout << "Ingrese el umbral de temperatura (°C): ";
    cin >> umbral;

    while (getline(archivoIn, linea)) {
        stringstream ss(linea);
        ss >> ciudad >> temperatura;

        if (temperatura > umbral) {
            archivoOut << ciudad << " " << temperatura << endl;
        }
    }

    archivoIn.close();
    archivoOut.close();
    cout << "Archivo '" << ArchivoSalida << "' generado correctamente.\n";
}