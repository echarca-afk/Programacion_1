// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Carnet: 13740843
// Carrera del estudiante: Ingeniería Mecatrónico
// Fecha creación: 15/10/2025
// Número de ejercicio: 1

#include <iostream>
using namespace std;
void llenarMatriz(int Matriz[][100], int filas, int columnas);
void mostrarMatriz(int Matriz[][100], int filas, int columnas);
void cambioMatriz(int Matriz[][100], int filas, int columnas);
int main (){
    int filas=0;
    int columnas=0;
    cout << "Ingrese el numero de filas de la matriz: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas de la matriz: ";
    cin >> columnas;

    int Matriz[filas][100];
    llenarMatriz(Matriz,filas,columnas);
    cout << "Matriz:"<< endl;
    mostrarMatriz(Matriz,filas,columnas);
    cambioMatriz(Matriz,filas,columnas);
    cout << "La nueva matriz es: " << endl ;
    mostrarMatriz(Matriz,filas,columnas);
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
void mostrarMatriz(int Matriz[][100], int filas, int columnas){
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
    {
        cout << Matriz[i][j] << "\t";
    }
    cout << endl;
    }
}
void cambioMatriz(int Matriz[][100], int filas, int columnas){
    cout << endl;
    int auxiliar = 0;

    for (int j = 0; j < columnas; j++)
    {
        auxiliar = Matriz[0][j];
        Matriz[0][j]=Matriz[filas-1][j];
        Matriz[filas-1][j] = auxiliar;
    }
}