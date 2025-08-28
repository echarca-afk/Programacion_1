// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 25/08/2025
// Número de ejercicio: 9

#include <iostream>
using namespace std;

int main() {
    int edad;
    //INGRESO DE LA EDAD DE EL USUARIO
    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad <= 12)
    {
        cout << "Eres Ninio o kid"; //NIÑO
    }
    else if (edad <= 18)
    {
        cout << "Eres Adolescente"; 
    }
    else if (edad > 18 && edad < 60)
    {
        cout << "Eres Mayor de edad";
    }
    else if (edad >= 60)
    {
        cout << "Eres Adulto mayor";
    }
    return 0; 

    }
    

    