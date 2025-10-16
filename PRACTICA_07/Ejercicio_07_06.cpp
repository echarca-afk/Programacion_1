// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Carnet: 13740843
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 16/10/2025
// Número de ejercicio: 6

#include <iostream>
using namespace std;

void transponerMatriz(int original[][100], int transpuesta[][100], int N, int M) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            transpuesta[j][i] = original[i][j];
        }
    }
}

void mostrarMatriz(int matriz[][100], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    const int N = 3;
    const int M = 4;
    int matriz[100][100] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int transpuesta[100][100];

    cout << "Matriz original (" << N << "x" << M << "):" << endl;
    mostrarMatriz(matriz, N, M);

    transponerMatriz(matriz, transpuesta, N, M);

    cout << "Matriz transpuesta (" << M << "x" << N << "):" << endl;
    mostrarMatriz(transpuesta, M, N);

    return 0;
}