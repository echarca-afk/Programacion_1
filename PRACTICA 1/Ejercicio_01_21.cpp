// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 27/08/2025
// Número de ejercicio: 21

#include <iostream>
using namespace std;

int main() {
    int numero_1;
    int numero_2;
    int producto = 0; //EL PRODUCTO TIENE VALOR INCIAL CERO
    cout << "Ingrese un primer numero: ";
    cin >> numero_1;
    cout << "Ingrese un segundo numero: ";
    cin >> numero_2;
    while (numero_2 > 0) //EL NUMERO 2 ES EL PARAMETRO DE AYUDA
    {
        producto = producto + numero_1;
        numero_2 = numero_2 - 1; //EL NUMERO 2 DECRECE HASTA 0
    }
    cout << "El producto de los dos numero es " << producto << endl;

    return 0; }