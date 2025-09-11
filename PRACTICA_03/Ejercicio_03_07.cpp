// Materia: Programación I, Paralelo 4 
// Autor: Emiliano Charca Canaviri 
// Fecha creación: 11/09/2025 
// Número de ejercicio: 7 

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void procesarAlumnos(int cantidadAlumnos);
// Función principal
int main() {
    srand(time(NULL));  // Inicializa la semilla aleatoria

    int cantidad;
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> cantidad;

    procesarAlumnos(cantidad);

    return 0;
}
//Función que genera datos y calcula estadísticas
void procesarAlumnos(int cantidadAlumnos) {
    int sumaEdades = 0;
    int sumaAlturas = 0;
    int mayoresDe18 = 0;
    int masDe175cm = 0;

    for (int i = 1; i <= cantidadAlumnos; i++) {
        int edad = rand() % 35 + 1;           // Edad entre 1 y 35
        int altura = rand() % 81 + 120;       // Altura entre 120 y 200

        cout << "Alumno " << i << ": Edad = " << edad << ", Altura = " << altura << " cm" << endl;

        sumaEdades += edad;
        sumaAlturas += altura;

        if (edad > 18) {
            mayoresDe18++;
        }

        if (altura > 175) {
            masDe175cm++;
        }
    }
