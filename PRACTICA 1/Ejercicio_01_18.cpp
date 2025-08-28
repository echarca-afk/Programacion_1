// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 26/08/2025
// Número de ejercicio: 18

#include <iostream>
using namespace std;

int main() {
    int numero = 2; //EL PRIMER NUMERO PRIMO
    int cantidad = 0; //CANTIDAD ESTIMADA
    while (cantidad < 100) { 
        int divisores = 0;
        for (int i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                divisores++;
            }
        }
        if (divisores == 2) { //EL NUMERO SOLO DEBE SER DIVISIBLE ENTRE UNO Y SI MISMO
            cout << numero << " " << endl;
            cantidad++;
        }
        numero++;
    }
    return 0;
}

