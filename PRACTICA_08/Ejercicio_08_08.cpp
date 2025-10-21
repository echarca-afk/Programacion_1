// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Carnet: 13740843 LP
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 21/10/2025
// Número de ejercicio: 8
#include <iostream>
using namespace std;

// Función recursiva para imprimir la secuencia de Ullman
void conjeturaUllman(int n) {
    cout << n << " ";
    if (n == 1) {
        return; // Caso base: termina cuando se llega a 1
    } else if (n % 2 == 0) {
        conjeturaUllman(n / 2); // Si es par, divide entre 2
    } else {
        conjeturaUllman(n * 3 + 1); // Si es impar, multiplica por 3 y suma 1
    }
}

int main() {
    int numero;
    cout << "Ingrese un entero positivo mayor que 1: ";
    cin >> numero;

    if (numero <= 1) {
        cout << "El número debe ser mayor que 1." << endl;
    } else {
        cout << "Secuencia de la conjetura de Ullman: ";
        conjeturaUllman(numero);
        cout << endl;
    }

    return 0;
}