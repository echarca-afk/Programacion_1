// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Carnet: 13740843 LP
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 21/10/2025
// Número de ejercicio: 6
#include <iostream>
using namespace std;

// Función recursiva para comparar dos vectores
bool compararVectores(int v1[], int v2[], int n) {
    if (n == 0) {
        return true; // Caso base: si no hay más elementos, son iguales
    }
    if (v1[n - 1] != v2[n - 1]) {
        return false; // Si algún elemento es distinto, no son iguales
    }
    return compararVectores(v1, v2, n - 1); // Comparar el resto
}

int main() {
    const int TAM = 5;
    int vector1[TAM] = {1, 2, 3, 4, 5};
    int vector2[TAM] = {1, 2, 3, 4, 5};

    if (compararVectores(vector1, vector2, TAM)) {
        cout << "Los vectores son iguales." << endl;
    } else {
        cout << "Los vectores son diferentes." << endl;
    }

    return 0;
}