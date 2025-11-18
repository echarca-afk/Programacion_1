// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Fecha creación: 18-11-2025
// Número de ejercicio: 1
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct structEstudiante {
    char ci[10];
    char nombres[30];
    char apellidos[30];
};

struct structNotas {
    char ci[10];
    char materia[30];
    int nota;
};

// Prototipos
void menu();
void ingresarEstudiante();
bool existeEstudiante(const char ci[]);
bool existeNota(const char ci[], const char materia[]);
void ingresarNota();
void mostrarReporte();

int main() {
    menu();
    return 0;
}
void menu() {
    int opcion;
    do {
        system("cls");
        cout << "MENU PRINCIPAL\n";
        cout << "==============\n";
        cout << "1. Ingreso de datos estudiantes\n";
        cout << "2. Ingreso de materias y notas\n";
        cout << "3. Reporte de estudiantes y notas\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1: ingresarEstudiante(); break;
            case 2: ingresarNota(); break;
            case 3: mostrarReporte(); break;
            case 0: break;
            default: cout << "Opcion invalida.\n"; system("pause");
        }
    } while (opcion != 0);
}
void ingresarEstudiante() {
    structEstudiante est;
    cout << "Ingrese CI: ";
    cin.getline(est.ci, 10);

    if (existeEstudiante(est.ci)) {
        cout << "Estudiante ya registrado.\n";
        system("pause");
        return;
    }

    cout << "Ingrese nombres: ";
    cin.getline(est.nombres, 30);
    cout << "Ingrese apellidos: ";
    cin.getline(est.apellidos, 30);

    ofstream archivo("Estudiantes.bin", ios::binary | ios::app);
    archivo.write((char*)&est, sizeof(est));
    archivo.close();
    cout << "Estudiante registrado exitosamente.\n";
    system("pause");
}
bool existeEstudiante(const char ci[]) {
    structEstudiante est;
    ifstream archivo("Estudiantes.bin", ios::binary);
    while (archivo.read((char*)&est, sizeof(est))) {
        if (strcmp(est.ci, ci) == 0) {
            archivo.close();
            return true;
        }
    }
    archivo.close();
    return false;
}
void ingresarNota() {
    structNotas nota;
    cout << "Ingrese CI del estudiante: ";
    cin.getline(nota.ci, 10);

    if (!existeEstudiante(nota.ci)) {
        cout << "Estudiante no existe.\n";
        system("pause");
        return;
    }

    cout << "Ingrese materia: ";
    cin.getline(nota.materia, 30);

    if (existeNota(nota.ci, nota.materia)) {
        cout << "Nota ya registrada para esta materia.\n";
        system("pause");
        return;
    }

    cout << "Ingrese nota: ";
    cin >> nota.nota;
    cin.ignore();

    ofstream archivo("Notas.bin", ios::binary | ios::app);
    archivo.write((char*)&nota, sizeof(nota));
    archivo.close();
    cout << "Nota registrada exitosamente.\n";
    system("pause");
}
bool existeNota(const char ci[], const char materia[]) {
    structNotas nota;
    ifstream archivo("Notas.bin", ios::binary);
    while (archivo.read((char*)&nota, sizeof(nota))) {
        if (strcmp(nota.ci, ci) == 0 && strcmp(nota.materia, materia) == 0) {
            archivo.close();
            return true;
        }
    }
    archivo.close();
    return false;
}
void mostrarReporte() {
    structEstudiante est;
    structNotas nota;

    ifstream archivoEst("Estudiantes.bin", ios::binary);
    if (!archivoEst.good()) {
        cout << "No se pudo abrir Estudiantes.bin\n";
        return;
    }

    while (archivoEst.read((char*)&est, sizeof(est))) {
        cout << "\nCI: " << est.ci << "\n";
        cout << "Nombre: " << est.nombres << " " << est.apellidos << "\n";
        cout << "Notas:\n";

        ifstream archivoNotas("Notas.bin", ios::binary);
        while (archivoNotas.read((char*)&nota, sizeof(nota))) {
            if (strcmp(est.ci, nota.ci) == 0) {
                cout << " - " << nota.materia << ": " << nota.nota << "\n";
            }
        }
        archivoNotas.close();
    }
    archivoEst.close();
    system("pause");
}