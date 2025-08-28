// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 26/08/2025
// Número de ejercicio: 14

#include <iostream>
using namespace std;

int main() {
    int numero_N; //INGRESO DEL NUMERO N
    cout << "Ingrese un numero: "; //INGRESO DEL NUMERO N
    cin >> numero_N;

    for (int i = 1; i <= numero_N ; i++)
    {
        for (int j =0; j < i ; j++){

            cout << "*"; //ASTERISCOS

        }
        //SALTO DE LINEA
        cout << endl;
    }
    return 0;
    
}