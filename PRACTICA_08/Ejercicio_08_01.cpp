// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Carnet: 13740843 LP
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 14/10/2025
// Número de ejercicio: 1
#include <iostream>
using namespace std;

int suma (int n){
    if(n == 0) {
        return 0;
    } else {
        return (n % 10) + suma(n / 10);
    }
}

int main()
{
    cout << suma(1234) << endl;

    return 0;
}