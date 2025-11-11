// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Fecha creación: 11/11/2025
// Número de ejercicio: 3
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void RegistrarEstudiantes(string NombreArchivo);
void MostrarEstudiantes(string NombreArchivo);
void MenuOpciones(string NombreArchivo);

int main() {
    MenuOpciones("estudiantes.txt");
    return 0;
}

void MenuOpciones(string NombreArchivo) {
    int opcion = 0;
    do {
        cout << "\nMENU DE OPCIONES:\n";
        cout << "1. Registrar estudiantes\n";
        cout << "2. Mostrar estudiantes\n";
        cout << "0. Salir\n";
        cout << "Ingrese la opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                RegistrarEstudiantes(NombreArchivo);
                break;
            case 2:
                MostrarEstudiantes(NombreArchivo);
                break;
            case 0:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opción inválida. Intente nuevamente.\n";
        }
    } while (opcion != 0);
}

void RegistrarEstudiantes(string NombreArchivo) {
    ofstream archivo;
    archivo.open(NombreArchivo, ios::app); // modo agregar
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo para escritura.\n";
        return;
    }

    int cantidad;
    string nombre;
    int edad;
    float promedio;

    cout << "¿Cuántos estudiantes desea registrar? ";
    cin >> cantidad;
    cin.ignore(); // limpiar buffer

    for (int i = 0; i < cantidad; i++) {
        cout << "\nEstudiante #" << (i + 1) << endl;
        cout << "Nombre: ";
        getline(cin, nombre);
        cout << "Edad: ";
        cin >> edad;
        cout << "Promedio: ";
        cin >> promedio;
        cin.ignore(); // limpiar buffer

        archivo << "Nombre: " << nombre << endl;
        archivo << "Edad: " << edad << endl;
        archivo << "Promedio: " << promedio << endl;
        archivo << endl;
    }

    archivo.close();
    cout << "\nEstudiantes registrados correctamente.\n";
}

void MostrarEstudiantes(string NombreArchivo) {
    ifstream archivo;
    archivo.open(NombreArchivo);
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo para lectura.\n";
        return;
    }

    string linea;
    cout << "\n📖 Información de estudiantes:\n";
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }

    archivo.close();
}