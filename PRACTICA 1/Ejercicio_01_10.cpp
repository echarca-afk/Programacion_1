// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 25/08/2025
// Número de ejercicio: 10

#include <iostream>
using namespace std;

int main() {
    int nota;
    //NOTA ENTRE 0 A 100
    cout << "Ingrese su nota (0 a 100): ";
    cin >> nota;
// NOTA MAYOR IGUAL A 51
    if (nota >= 51) {
        if (nota < 60) {
            cout << "Calificacion = C";
        } 
        else if (nota < 70) {
            cout << "Calificacion = C+";
        } 
        else if (nota < 80) {
            cout << "Calificacion = B";
        } 
        else if (nota < 90) {
            cout << "Calificacion = B+";
        } 
        else if (nota < 95) {
            cout << "Calificacion = A";
        } 
        else if (nota == 100) {
            cout << "Calificacion = A+";
        } 
        } else { 
        //NOTA MENOR DE 51
            cout << "Reprobado";
        }
    

    return 0;
}