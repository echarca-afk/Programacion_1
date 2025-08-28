// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 27/08/2025
// Número de ejercicio: 19

#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero: "; //INGRESO DE UN NUMERO 
    cin >> numero;

    cout << "Tabla de multiplicar del " << numero << endl; //MENSAJE

    for (int i = 1; i <= 10; i++) {
        //MENSAJE DE OPERACION DE MULTIPLICACION Y TABLA
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}