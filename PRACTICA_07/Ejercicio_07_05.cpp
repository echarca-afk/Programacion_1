// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Carnet: 13740843
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 16/10/2025
// Número de ejercicio: 5
#include <iostream>
using namespace std;
void llenarMatriz(int Matriz[][100], int filas, int columnas);
void mostrarMatriz(int Matriz[][100], int filas, int columnas);
void multiplicarMatrices(int A[][100], int B[][100], int C[][100], int N, int M);
int main() {
    system("cls");
    int N=0;
    int M=0;
    cout << "Ingrese N: ";
    cin >> N;
    cout << "Ingrese M: ";
    cin >> M;
    int A[100][100];
    cout<< "Ingrese los elementos de la matriz A es: " << endl;
    llenarMatriz(A, N, M);
    int B[100][100];
    cout<< "Ingrese los elementos de la matriz B es: " << endl;
    llenarMatriz(B, M, N);
    int C[100][100];
    multiplicarMatrices(A, B, C, N, M);
    cout << "Matriz A (N x M):" << endl;
    mostrarMatriz(A, N, M);
    cout << "Matriz B (M x N):" << endl;
    mostrarMatriz(B, M, N);
    cout << "Resultado C = A x B (N x N):" << endl;
    mostrarMatriz(C, N, N);

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
void mostrarMatriz(int Matriz[][100], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << Matriz[i][j] << "\t";
        }
        cout << endl;
    }
}
void multiplicarMatrices(int A[][100], int B[][100], int C[][100], int N, int M) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            C[i][j] = 0;
            for (int k = 0; k < M; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}