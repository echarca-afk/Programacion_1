// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Carnet: 13740843
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 15/10/2025
// Número de ejercicio: 3
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
void generarmatriz(char Matriz[][100],int filas, int columnas);
void mostrarmatriz(char Matriz[][100],int filas, int columnas);
void RowColumsfree(char Matriz[][100],int filas, int columnas);
void coordenadasMuertos(char Matriz[][100], int filas, int columnas, int muertosFila[], int muertosCol[], int &cantidad);
void verificarEntrada(char Matriz[][100], int filas);
int main (){
    srand(time(NULL));
    system("cls");
    const int filas = 3;
    const int columnas = 4;
    char Matriz[100][100];
    int muertosFila[100];
    int muertosCol[100];
    int cantidadMuertos = 0;
    generarmatriz(Matriz,filas, columnas);
    cout << "a) Mostrar la matriz: " << endl;
    mostrarmatriz(Matriz,filas, columnas);
    RowColumsfree(Matriz,filas, columnas);
    coordenadasMuertos(Matriz, filas, columnas, muertosFila, muertosCol, cantidadMuertos);
    cout << "d) Cantidad total de muertos vivientes: " << cantidadMuertos << endl;
    verificarEntrada(Matriz, filas);
    return 0;
}
void generarmatriz(char Matriz[][100],int filas, int columnas){
    int valor = 0;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            valor = rand()%(2);
            if (valor == 0)
            {
                Matriz[i][j]='o';
            }
            else
            {
                Matriz[i][j]='x';
            }
        }
    }
}
void mostrarmatriz(char Matriz[][100],int filas, int columnas){
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << Matriz[i][j] << "\t";  
        }
        cout << endl;
    }
}
void RowColumsfree(char Matriz[][100],int filas, int columnas){
    int filalibre = 0;
    int columnalibre = 0;
    int filalibre_parcial = 0;
    int columnalibre_parcial = 0;

    // Verificar filas libres
    for (int i = 0; i < filas; i++)
    {
        filalibre_parcial = 0; // Reiniciar contador parcial
        for (int j = 0; j < columnas; j++)
        {
            if (Matriz[i][j] == 'o')
            {
                filalibre_parcial++;
            }
        }
        if (filalibre_parcial == columnas) // Toda la fila es segura
        {
            filalibre++;
        }
    }
    // Verificar columnas libres
    for (int j = 0; j < columnas; j++)
    {
        columnalibre_parcial = 0; // Reiniciar contador parcial
        for (int i = 0; i < filas; i++)
        {
            if (Matriz[i][j] == 'o')
            {
                columnalibre_parcial++;
            }
        }
        if (columnalibre_parcial == filas) // Toda la columna es segura
        {
            columnalibre++;
        }
    }

    cout << "b) Las filas libres: " << filalibre << endl;
    cout << "Las columnas libres: " << columnalibre << endl;

}
void coordenadasMuertos(char Matriz[][100], int filas, int columnas, int muertosFila[], int muertosCol[], int &cantidad) {
    cantidad = 0;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (Matriz[i][j] == 'x') {
                muertosFila[cantidad] = i;
                muertosCol[cantidad] = j;
                cantidad++;
            }
        }
    }
    cout << "c) Coordenadas de los muertos vivientes:" << endl;
    for (int k = 0; k < cantidad; k++) {
        cout << "Muerto #" << k + 1 << " en fila " << muertosFila[k] << ", columna " << muertosCol[k] << endl;
    }
}
void verificarEntrada(char Matriz[][100], int filas) {
    int muertosEnPrimeraColumna = 0;
    for (int i = 0; i < filas; i++) {
        if (Matriz[i][0] == 'x') {
            muertosEnPrimeraColumna++;
        }
    }

    if (muertosEnPrimeraColumna >= 2) {
        cout << "e) No es posible entrar al complejo" << endl;
    } else {
        cout << "e) Es posible entrar al complejo" << endl;
    }
}
