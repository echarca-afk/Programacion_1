// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Carnet: 13740843
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 16/10/2025
// Número de ejercicio: 6

#include <iostream>
using namespace std;
void llenarMatriz(int Matriz[][100], int filas, int columnas);
void transponerMatriz(int original[][100], int transpuesta[][100], int N, int M);
void mostrarMatriz(int matriz[][100], int filas, int columnas);
int main() {
    system("cls");
    int N=0;
    int M=0;
    cout << "Ingrese N: ";
    cin >> N;
    cout << "Ingrese M: ";
    cin >> M;
    int matriz[100][100];
    llenarMatriz(matriz, N, M);
    int transpuesta[100][100];
    cout << "Matriz original (" << N << "x" << M << "):" << endl;
    mostrarMatriz(matriz, N, M);
    transponerMatriz(matriz, transpuesta, N, M);
    cout << "Matriz transpuesta (" << M << "x" << N << "):" << endl;
    mostrarMatriz(transpuesta, M, N);

    return 0;
}
void llenarMatriz(int Matriz[][100], int filas, int columnas){
    int valor = 0;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
    {
        cout << "Ingrese el elemento (" << i << "," << j << "): ";
        cin >> valor;
        Matriz[i][j]=valor;
    }
    }
}
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
