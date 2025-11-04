// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Fecha creación: 02/11/2025
// Número de ejercicio: 4
#include <iostream>
using namespace std;

const int MAX_EMPLEADOS = 100;

struct Empleado {
    char nombre[50];
    char genero[10];
    float salario;
};

// Función para registrar un empleado
void registrarEmpleado(Empleado& e) {
    cout << "\nIngrese el nombre: ";
    cin.ignore();
    cin.getline(e.nombre, 50);

    cout << "Ingrese el género: ";
    cin.getline(e.genero, 10);

    cout << "Ingrese el salario: ";
    cin >> e.salario;
}

// Función para mostrar los datos de un empleado
void mostrarEmpleado(const Empleado& e) {
    cout << "Nombre: " << e.nombre << endl;
    cout << "Género: " << e.genero << endl;
    cout << "Salario: " << e.salario << endl;
}

// Función para encontrar el índice del empleado con salario mínimo
int indiceSalarioMinimo(Empleado empleados[], int n) {
    int indiceMin = 0;
    for (int i = 1; i < n; i++) {
        if (empleados[i].salario < empleados[indiceMin].salario) {
            indiceMin = i;
        }
    }
    return indiceMin;
}

// Función para encontrar el índice del empleado con salario máximo
int indiceSalarioMaximo(Empleado empleados[], int n) {
    int indiceMax = 0;
    for (int i = 1; i < n; i++) {
        if (empleados[i].salario > empleados[indiceMax].salario) {
            indiceMax = i;
        }
    }
    return indiceMax;
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

    int minIndex = indiceSalarioMinimo(empleados, n);
    int maxIndex = indiceSalarioMaximo(empleados, n);

    cout << "\nEmpleado con menor salario:\n";
    mostrarEmpleado(empleados[minIndex]);

    cout << "\n Empleado con mayor salario:\n";
    mostrarEmpleado(empleados[maxIndex]);

    return 0;
}