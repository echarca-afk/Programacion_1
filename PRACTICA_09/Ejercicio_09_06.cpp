// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Fecha creación: 02/11/2025
// Número de ejercicio: 6
#include <iostream>
using namespace std;

const int MAX_EMPLEADOS = 100;

struct Empleado {
    char nombre[50];
    int id;
    float sueldo;
    int antiguedad;
};

// Función para registrar un empleado
void registrarEmpleado(Empleado& e) {
    cin.ignore();
    cout << "\nIngrese el nombre: ";
    cin.getline(e.nombre, 50);

    cout << "Ingrese el ID: ";
    cin >> e.id;

    cout << "Ingrese el sueldo: ";
    cin >> e.sueldo;

    cout << "Ingrese la antigüedad (en años): ";
    cin >> e.antiguedad;
}

// Función para mostrar los datos de un empleado
void mostrarEmpleado(const Empleado& e) {
    cout << "\n Nombre: " << e.nombre << endl;
    cout << "ID: " << e.id << endl;
    cout << " Sueldo: " << e.sueldo << endl;
    cout << " Antigüedad: " << e.antiguedad << " años" << endl;
}

// Función que cuenta cuántos empleados tienen sueldo mayor a un valor dado
int contarSueldosMayores(Empleado empleados[], int n, float valor) {
    int contador = 0;
    for (int i = 0; i < n; i++) {
        if (empleados[i].sueldo > valor) {
            contador++;
        }
    }
    return contador;
}

// Función que calcula el promedio de antigüedad
float promedioAntiguedad(Empleado empleados[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += empleados[i].antiguedad;
    }
    return static_cast<float>(suma) / n;
}

int main() {
    int n;
    Empleado empleados[MAX_EMPLEADOS];

    cout << "¿Cuántos empleados desea registrar? (máximo " << MAX_EMPLEADOS << "): ";
    cin >> n;

    if (n <= 0 || n > MAX_EMPLEADOS) {
        cout << "Cantidad inválida.\n";
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "\n--- Registro del empleado #" << (i + 1) << " ---";
        registrarEmpleado(empleados[i]);
    }

    cout << "\n Mostrando todos los empleados registrados:\n";
    for (int i = 0; i < n; i++) {
        mostrarEmpleado(empleados[i]);
    }

    float sueldoReferencia;
    cout << "\n Ingrese un valor de sueldo para comparar: ";
    cin >> sueldoReferencia;

    int cantidad = contarSueldosMayores(empleados, n, sueldoReferencia);
    cout << " Hay " << cantidad << " empleados con sueldo mayor a " << sueldoReferencia << ".\n";

    float promedio = promedioAntiguedad(empleados, n);
    cout << "El promedio de antigüedad es: " << promedio << " años.\n";

    return 0;
}