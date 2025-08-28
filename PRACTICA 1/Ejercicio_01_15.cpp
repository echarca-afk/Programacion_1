// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 26/08/2025
// Número de ejercicio: 15

#include <iostream>
using namespace std;

int main() {
    int numero_de_notas;
    cout << "Ingrese el numero de notas: ";
    cin >> numero_de_notas;
    int suma = 0; //VALOR INICIAL DE LA SUMA DE NOTAS
    int promedio;

    
    for (int i = 1; i <= numero_de_notas; i++)
    {
        int nota;
        cout << "Ingrese la nota: ";
        cin >> nota;
        suma = suma + nota; //ACUMULATIVO
        }

    promedio = suma/numero_de_notas; //PROMEDIO DE NOTAS
    cout << " El promedio general de notas es " << promedio ;
    
    return 0;

}

    
    
