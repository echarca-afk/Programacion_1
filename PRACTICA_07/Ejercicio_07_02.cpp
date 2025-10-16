// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Carnet: 13740843
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 15/10/2025
// Número de ejercicio: 2
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
void llenarMatriz(int Matriz[][100], int orden);
void mostrarMatriz(int Matriz[][100], int orden);
void sumaultimacolumna(int Matriz[][100], int orden);
void multiplicacionultimafila(int Matriz[][100], int orden);
void mayorelemento(int Matriz[][100], int orden);
double desviacion(int Matriz[][100], int orden,double MatrizDiferencias[][100]);
int main (){
    srand(time(NULL));
    system("cls");
    int orden=0;
    cout << "Ingrese el orden de la matriz: ";
    cin >> orden;
    int Matriz[100][100];
    double MatrizDiferencias[100][100];
    llenarMatriz(Matriz,orden);
    cout << "Matriz:"<< endl;
    mostrarMatriz(Matriz,orden);
    sumaultimacolumna(Matriz,orden);
    multiplicacionultimafila(Matriz,orden);
    mayorelemento(Matriz,orden);
    cout << "La desviacion de los elementos de la matriz es: " << desviacion(Matriz,orden,MatrizDiferencias);
    return 0;
}
void llenarMatriz(int Matriz[][100], int orden){
    for (int i = 0; i < orden; i++)
    {
        for (int j = 0; j < orden; j++)
    {
        Matriz[i][j]=rand()%(1000-1+1)+1;
    }
    }
}
void mostrarMatriz(int Matriz[][100], int orden){
    for (int i = 0; i < orden; i++)
    {
        for (int j = 0; j < orden; j++)
    {
        cout << Matriz[i][j] << "\t";
    }
    cout << endl;
    }
}
void sumaultimacolumna(int Matriz[][100], int orden){
    int suma = 0;
    for (int i = 0; i < orden; i++)
    {
        suma=suma+Matriz[i][orden-1];
    }
    cout << "La suma de los elementos de la ultima columna es: " << suma << endl;
}
void multiplicacionultimafila(int Matriz[][100], int orden){
    int multiplicacion = 1;
    for (int j = 0; j < orden; j++)
    {
        multiplicacion = multiplicacion*Matriz[orden-1][j];
    }
    cout << "La multiplicacion de los elementos de la ultima fila es: " << multiplicacion << endl;
}
void mayorelemento(int Matriz[][100], int orden){
    int comparativo = 0;
    for (int i = 0; i < orden; i++)
    {
        for (int j = 0; j < orden; j++)
        
    {
        if (comparativo < Matriz[i][j])
        {
            comparativo = Matriz[i][j];
        }
    }
    }
    cout << "El mayor elemento de la matriz es: " << comparativo << endl;
}
double desviacion(int Matriz[][100], int orden,double MatrizDiferencias[][100]){
    double suma_parcial=0.00;
    double suma_diferencias = 0.00;
    double promedio = 0.00;
    double desviacion = 0.00;
    for (int i = 0; i < orden; i++)
    {
        for (int j = 0; j < orden; j++)
    {
        suma_parcial = suma_parcial + Matriz[i][j];
    }
    }
    promedio = suma_parcial / (orden*orden);
    for (int i = 0; i < orden; i++)
    {
        for (int j = 0; j < orden; j++)
    {
       MatrizDiferencias[i][j] = Matriz[i][j] - promedio;
    }
    }
    for (int i = 0; i < orden; i++)
    {
        for (int j = 0; j < orden; j++)
    {
       suma_diferencias = suma_diferencias +pow(MatrizDiferencias[i][j],2) ;
    }
    }
    desviacion = sqrt(suma_diferencias/(orden*orden-1));
    return desviacion;
}