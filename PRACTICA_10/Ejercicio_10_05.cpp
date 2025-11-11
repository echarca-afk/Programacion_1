// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Fecha creación: 11/11/2025
// Número de ejercicio: 5
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

void ActualizarPrecio(string NombreArchivo);
void MenuOpciones(string NombreArchivo);

int main() {
    MenuOpciones("productos.txt");
    return 0;
}

void MenuOpciones(string NombreArchivo) {
    int opcion = 0;
    do {
        cout << "\nMENU DE OPCIONES:\n";
        cout << "1. Actualizar precio de un producto\n";
        cout << "0. Salir\n";
        cout << "Ingrese la opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                ActualizarPrecio(NombreArchivo);
                break;
            case 0:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opción inválida. Intente nuevamente.\n";
        }
    } while (opcion != 0);
}

void ActualizarPrecio(string NombreArchivo) {
    ifstream archivoEntrada;
    archivoEntrada.open(NombreArchivo);
    if (!archivoEntrada.is_open()) {
        cout << "Error al abrir el archivo para lectura.\n";
        return;
    }

    vector<string> lineas;
    string linea, producto, productoBuscado;
    float precio, nuevoPrecio;
    bool encontrado = false;

    cin.ignore(); // limpiar buffer
    cout << "Ingrese el nombre del producto a actualizar: ";
    getline(cin, productoBuscado);
    cout << "Ingrese el nuevo precio: ";
    cin >> nuevoPrecio;

    while (getline(archivoEntrada, linea)) {
        stringstream ss(linea);
        ss >> producto >> precio;

        if (producto == productoBuscado) {
            stringstream nuevaLinea;
            nuevaLinea << producto << " " << nuevoPrecio;
            lineas.push_back(nuevaLinea.str());
            encontrado = true;
        } else {
            lineas.push_back(linea);
        }
    }

    archivoEntrada.close();

    if (!encontrado) {
        cout << "El producto \"" << productoBuscado << "\" no se encontró en el archivo.\n";
        return;
    }

    ofstream archivoSalida;
    archivoSalida.open(NombreArchivo);
    if (!archivoSalida.is_open()) {
        cout << "Error al abrir el archivo para escritura.\n";
        return;
    }

    for (int i = 0; i < lineas.size(); i++) {
        archivoSalida << lineas[i] << endl;
    }

    archivoSalida.close();
    cout << "Precio actualizado correctamente.\n";
}