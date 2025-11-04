// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Fecha creación: 02/11/2025
// Número de ejercicio: 3
#include <iostream>
using namespace std;

const int MAX_ALUMNOS = 100;

struct Alumno {
    int cedula;
    char nombre[50];
    char apellido[50];
    int edad;
    char profesion[50];
    char lugar_nacimiento[50];
    char direccion[100];
    int telefono;
};

// Función para registrar un alumno
void registrarAlumno(Alumno& a) {
    cout << "\nIngrese la cédula: ";
    cin >> a.cedula;
    cin.ignore(); // limpiar buffer

    cout << "Ingrese el nombre: ";
    cin.getline(a.nombre, 50);

    cout << "Ingrese el apellido: ";
    cin.getline(a.apellido, 50);

    cout << "Ingrese la edad: ";
    cin >> a.edad;
    cin.ignore();

    cout << "Ingrese la profesión: ";
    cin.getline(a.profesion, 50);

    cout << "Ingrese el lugar de nacimiento: ";
    cin.getline(a.lugar_nacimiento, 50);

    cout << "Ingrese la dirección: ";
    cin.getline(a.direccion, 100);

    cout << "Ingrese el teléfono: ";
    cin >> a.telefono;
}

// Función para mostrar los datos de un alumno
void mostrarAlumno(const Alumno& a) {
    cout << "\n--- Datos del alumno ---\n";
    cout << "Cédula: " << a.cedula << endl;
    cout << "Nombre: " << a.nombre << endl;
    cout << "Apellido: " << a.apellido << endl;
    cout << "Edad: " << a.edad << endl;
    cout << "Profesión: " << a.profesion << endl;
    cout << "Lugar de nacimiento: " << a.lugar_nacimiento << endl;
    cout << "Dirección: " << a.direccion << endl;
    cout << "Teléfono: " << a.telefono << endl;
}

int main() {
    int n;
    Alumno alumnos[MAX_ALUMNOS];

    cout << "¿Cuántos alumnos desea registrar? (máximo " << MAX_ALUMNOS << "): ";
    cin >> n;

    if (n <= 0 || n > MAX_ALUMNOS) {
        cout << "Cantidad inválida.\n";
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "\n--- Registro del alumno #" << (i + 1) << " ---";
        registrarAlumno(alumnos[i]);
    }

    cout << "\n Mostrando todos los alumnos registrados:\n";
    for (int i = 0; i < n; i++) {
        mostrarAlumno(alumnos[i]);
    }

    return 0;
}