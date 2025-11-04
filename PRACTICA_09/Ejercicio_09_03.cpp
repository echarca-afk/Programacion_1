// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Fecha creación: 02/11/2025
// Número de ejercicio: 3
#include <iostream>
using namespace std;
struct Estudiante_Programacion{
    int cedula;
    char nombre[100];
    char apellido[100];
    int edad;
    char profesion[100];
    char lugar_nacimiento[100];
    char direccion[100];
    int telefono;
};
int main(){
    Estudiante_Programacion estudiante;
    cout << "Ingrese el titulo del Libro: ";
    cin.getline(estudiante.nombre,30);
    
    return 0;
}