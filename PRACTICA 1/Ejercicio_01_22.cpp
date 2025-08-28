// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 27/08/2025
// Número de ejercicio: 22

#include <iostream>
using namespace std;

int main() {
    int numero_1;
    int numero_2;

    cout << "Ingrese el primer numero: ";
    cin >> numero_1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero_2;

    if (numero_1 % numero_2 == 0) {
        cout << numero_1 << " es multiplo de " << numero_2 << endl; //EL PRIMER NUMERO MULTIPLO DEL SEGUNDO
    } else if (numero_2 % numero_1 == 0) {
        cout << numero_2 << " es multiplo de " << numero_1 << endl; //EL SEGUNDO NUMERO MULTIPLO DEL PRIMERO
    } else {
        cout << "Ninguno es multiplo del otro" << endl;
    }

    return 0;
}