// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 27/08/2025
// Número de ejercicio: 25

#include <iostream>
using namespace std;

int main() {
    int numero;
    char respuesta;
    do {
        cout << "Ingrese un numero: " << endl; 
        cin >> numero;

        cout << "Tabla de multiplicar del " << numero << endl;
        for (int i = 1; i <= 10; i++) {
            cout << numero << " x " << i << " = " << numero * i << endl; //GENERACION DE LA TABLA
        }

        cout << "¿Desea calcular otra tabla? (s/n): "; //PREGUNTA DE CONTINUAR O NO
        cin >> respuesta;

    } while (respuesta == 's'); // SI FUERA SII

    return 0;


}