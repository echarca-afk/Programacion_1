// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Fecha creación: 02/11/2025
// Número de ejercicio: 10
#include <iostream>
using namespace std;

// Estructura original
struct Fraccion {
    int numerador;
    int denominador;
};

// Estructura simplificada
struct FraccionSimplificada {
    int numerador;
    int denominador;
};

// Algoritmo de Euclides para calcular el MCD
int calcularMCD(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

// Función que reduce la fracción
FraccionSimplificada ReducirFraccion(const Fraccion& f) {
    FraccionSimplificada fs;
    int mcd = calcularMCD(f.numerador, f.denominador);
    fs.numerador = f.numerador / mcd;
    fs.denominador = f.denominador / mcd;
    return fs;
}

int main() {
    Fraccion f;
    cout << "Ingrese el numerador: ";
    cin >> f.numerador;
    cout << "Ingrese el denominador: ";
    cin >> f.denominador;

    if (f.denominador == 0) {
        cout << " Error: el denominador no puede ser cero.\n";
        return 1;
    }

    FraccionSimplificada fs = ReducirFraccion(f);
    cout << "\n Fracción simplificada: " << fs.numerador << "/" << fs.denominador << endl;

    return 0;
}