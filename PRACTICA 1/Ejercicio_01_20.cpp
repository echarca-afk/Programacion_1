// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 27/08/2025
// Número de ejercicio: 20

#include <iostream>
using namespace std;

int main() {
    int numero_entero;
    cout << "Ingrese un numero: ";
    cin >> numero_entero;
    int contador_digitos = 0;
    while (numero_entero >0)
    {
        numero_entero = numero_entero/10;
        contador_digitos++;
    }
    cout << "El numero tiene " << contador_digitos << endl;
    return 0; 
}