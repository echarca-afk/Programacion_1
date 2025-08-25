// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 24/08/2025
// Número de ejercicio: 5

#include <iostream>

using namespace std;

int main()
{
    //INGRESO DE TEMPERATURA EN CENTIGRADOS
    float temperatura_en_centigrados;
    cout << " Ingrese la temperatura en Centrigrados: ";
    cin >> temperatura_en_centigrados;

    //CONVERSION DE CELCIUS A FARENHEIT
    float temperatura_en_kelvin = temperatura_en_centigrados + 273;
    cout << " La temperatura en Kelvin de la temperatura ingresada en centrigrados es ";
    cout << temperatura_en_kelvin << " K" ;

    return 0;
}