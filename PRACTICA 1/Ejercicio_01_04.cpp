// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 24/08/2025
// Número de ejercicio: 4

#include <iostream>
#define PI 3.14159

using namespace std;

int main()
{
    float radio;
    cout << " Ingrese el radio de la esfera: ";
    cin >> radio;

    float volumen_de_la_esfera = 4/3*PI*(radio*radio*radio);
    
    cout << " El Volumen de la esfera es ";
    cout << volumen_de_la_esfera << " unidades cubicas" ;

    return 0;
}