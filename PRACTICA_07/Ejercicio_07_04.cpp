// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Carnet: 13740843
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 16/10/2025
// Número de ejercicio: 4

#include <iostream>
using namespace std;

void generarMatriz(int Matriz[][100], int n);
void mostrarMatriz(int Matriz[][100], int n);
int main() {
    int n = 0;
    cout << "Ingrese el orden de la matriz n: ";
    cin >> n;
    int Matriz[100][100];

    generarMatriz(Matriz, n);
    cout << "Matriz generada de orden " << n << "x" << n << ":" << endl;
    mostrarMatriz(Matriz, n);

    return 0;
}
void generarMatriz(int Matriz[][100], int n) {
    int inicio = 1;
    for (int i = 0; i < n; i++) {
        int valor = inicio;
        for (int j = 0; j < n; j++) {
            Matriz[i][j] = valor;
            valor++;
        }
        inicio += 2; // Aumenta el inicio en 2 para la siguiente fila
    }
}

void mostrarMatriz(int Matriz[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << Matriz[i][j] << "\t";
        }
        cout << endl;
    }
}