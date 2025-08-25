// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 24/08/2025
// Número de ejercicio: 3

#include <iostream>

using namespace std;

int main()
{
    //DIMENSIONES DEL TRINAGULO
    float base;
    float altura;
    cout << " Ingrese la base de el triangulo: ";
    cin >> base;
    cout << " Ingrese la altura de el triangulo: ";
    cin >> altura;
    //CALCULO DEL AREA DEL TRAINGULO
    float area = (base*altura)/2;
    cout << " El area del trinagulo es ";
    cout << area << " unidades cuadradas" ;

    return 0;
}