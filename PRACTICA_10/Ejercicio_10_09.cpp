// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Fecha creación: 11/11/2025
// Número de ejercicio: 9
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void CifrarArchivo(string ArchivoEntrada, string ArchivoSalida);
char CifrarCaracter(char c, int desplazamiento);
void MenuOpciones(string ArchivoEntrada, string ArchivoSalida);

int main() {
    MenuOpciones("mensaje.txt", "mensaje_cifrado.txt");
    return 0;
}

void MenuOpciones(string ArchivoEntrada, string ArchivoSalida) {
    int opcion = 0;
    do {
        cout << "\nMENU DE OPCIONES:\n";
        cout << "1. Cifrar archivo con César +3\n";
        cout << "0. Salir\n";
        cout << "Ingrese la opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                CifrarArchivo(ArchivoEntrada, ArchivoSalida);
                break;
            case 0:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opción inválida. Intente nuevamente.\n";
        }
    } while (opcion != 0);
}

void CifrarArchivo(string ArchivoEntrada, string ArchivoSalida) {
    ifstream archivoIn;
    ofstream archivoOut;
    archivoIn.open(ArchivoEntrada);
    archivoOut.open(ArchivoSalida);

    if (!archivoIn.is_open() || !archivoOut.is_open()) {
        cout << "Error al abrir los archivos.\n";
        return;
    }

    string linea;
    int desplazamiento = 3;

    while (getline(archivoIn, linea)) {
        string lineaCifrada = "";
        for (int i = 0; i < linea.length(); i++) {
            lineaCifrada += CifrarCaracter(linea[i], desplazamiento);
        }
        archivoOut << lineaCifrada << endl;
    }

    archivoIn.close();
    archivoOut.close();
    cout << "Archivo cifrado correctamente en 'mensaje_cifrado.txt'.\n";
}

char CifrarCaracter(char c, int desplazamiento) {
    if (c >= 'A' && c <= 'Z') {
        return 'A' + (c - 'A' + desplazamiento) % 26;
    } else if (c >= 'a' && c <= 'z') {
        return 'a' + (c - 'a' + desplazamiento) % 26;
    } else {
        return c; // no se cifra si no es letra
    }
}