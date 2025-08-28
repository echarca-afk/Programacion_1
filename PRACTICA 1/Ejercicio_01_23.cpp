// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 27/08/2025
// Número de ejercicio: 23

#include <iostream>
using namespace std;

int main() {
    int numero;
    int invertido;
    cout << "Ingrese un numero entero: ";
    cin >> numero;


    while (numero > 0) {
        invertido = numero % 10; 
        numero = numero / 10;
    }
    cout << "Numero invertido es " << invertido ;
    cout << endl;
    return 0;
}