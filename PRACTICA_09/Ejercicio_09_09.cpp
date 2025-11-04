// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Fecha creación: 02/11/2025
// Número de ejercicio: 9
#include <iostream>
using namespace std;

const int MAX_ALUMNOS = 100;

struct Alumno {
    float T1, T2, T3, T4, EF;
    float NP; // Nota de presentación
    float NF; // Nota final
};

// Función para registrar las notas de un alumno
void registrarNotas(Alumno& a) {
    cout << "\nIngrese la nota T1: "; cin >> a.T1;
    cout << "Ingrese la nota T2: "; cin >> a.T2;
    cout << "Ingrese la nota T3: "; cin >> a.T3;
    cout << "Ingrese la nota T4: "; cin >> a.T4;
    cout << "Ingrese la nota del Examen Final (EF): "; cin >> a.EF;

    a.NP = (a.T1 + a.T2 + a.T3 + a.T4) / 4.0;
    a.NF = 0.7 * a.NP + 0.3 * a.EF;
}

// Función para mostrar las notas de un alumno
void mostrarNotas(const Alumno& a, int index) {
    cout << "\n Alumno #" << index + 1 << endl;
    cout << "NP = " << a.NP << ", EF = " << a.EF << ", NF = " << a.NF << endl;
}

// Función para calcular el promedio de notas finales
float calcularPromedioNF(Alumno alumnos[], int n) {
    float suma = 0;
    for (int i = 0; i < n; i++) {
        suma += alumnos[i].NF;
    }
    return suma / n;
}

// Función para encontrar la nota final mínima
float notaMinima(Alumno alumnos[], int n) {
    float min = alumnos[0].NF;
    for (int i = 1; i < n; i++) {
        if (alumnos[i].NF < min)
            min = alumnos[i].NF;
    }
    return min;
}

// Función para encontrar la nota final máxima
float notaMaxima(Alumno alumnos[], int n) {
    float max = alumnos[0].NF;
    for (int i = 1; i < n; i++) {
        if (alumnos[i].NF > max)
            max = alumnos[i].NF;
    }
    return max;
}

int main() {
    int n;
    Alumno alumnos[MAX_ALUMNOS];

    cout << "Ingrese el número de alumnos (máximo " << MAX_ALUMNOS << "): ";
    cin >> n;

    if (n <= 0 || n > MAX_ALUMNOS) {
        cout << "Cantidad inválida.\n";
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "\n--- Registro de notas del alumno #" << (i + 1) << " ---";
        registrarNotas(alumnos[i]);
    }

    cout << "\n Notas finales de todos los alumnos:\n";
    for (int i = 0; i < n; i++) {
        mostrarNotas(alumnos[i], i);
    }

    float promedio = calcularPromedioNF(alumnos, n);
    float minimo = notaMinima(alumnos, n);
    float maximo = notaMaxima(alumnos, n);

    cout << "\n Estadísticas del curso:\n";
    cout << "Promedio de notas finales: " << promedio << endl;
    cout << "Nota final mínima: " << minimo << endl;
    cout << "Nota final máxima: " << maximo << endl;

    return 0;
}