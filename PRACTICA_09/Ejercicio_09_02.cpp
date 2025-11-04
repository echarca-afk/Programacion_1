// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Fecha creación: 02/11/2025
// Número de ejercicio: 2
#include <iostream>
using namespace std;
struct Atleta{
    char nombre[100];
    char pais[100];
    int edad;
    int mejor_tiempo;
};
int main(){
    Atleta atleta;
    cout << "Ingrese el titulo del Libro: ";
    cin.getline(atleta.nombre,30);
    cout << "Ingrese el autor del Libro: ";
    cin.getline(atleta.pais,30);
    cout<< "Ingrese el anio de publicacion del Libro: ";
    cin >> atleta.edad;
    
    return 0;
}