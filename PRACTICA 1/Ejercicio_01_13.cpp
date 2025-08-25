// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 25/08/2025
// Número de ejercicio: 13

#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un número entre 1 y 5: ";
    cin >> numero;
//INICIALIZACION DE LA SUMA 
    int suma = 0; 
    for (int i = 1; i <= numero; i++) {
        suma += i; //ACUMULATIVO
    }
    cout << "La suma desde 1 hasta " << numero << " es" << suma << endl;

    return 0;
}