// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Carnet: 13740843 LP
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 14/10/2025
// Número de ejercicio: 4
#include <iostream>
using namespace std;

int euclides (int x, int y) {
    if (x % y == 0) {
        return y;
    } else {
        return euclides(y, x % y);
    }
}
void cambiar(int &x, int &y){
    y = y + x;
    x = y - x;
    y = y - x;
}
int main()
{
    int x, y;
    cout << "Ingrese dos numero: " << endl;
    cin >> x >> y;
    if (x < y){
        cambiar(x, y);
    } 
    int gdc = euclides(x, y);
    cout << "El mcd es: " << gdc << endl;

    return 0;
}