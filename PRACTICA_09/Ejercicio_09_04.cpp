// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Fecha creación: 02/11/2025
// Número de ejercicio: 4
#include <iostream>
using namespace std;
struct empleado{
    char nombre[100];
    char genero[100];
    double salario;
};
int main(){
    empleado personal;
    cout << "Ingrese el titulo del Libro: ";
    cin.getline(personal.nombre,30);
    return 0;
}