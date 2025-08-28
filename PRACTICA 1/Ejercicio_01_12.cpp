// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 25/08/2025
// Número de ejercicio: 12

#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero entre 1 y 5: "; //INGRESO DEL NUMERO
    cin >> numero;

    while (numero < 1 || numero > 5) {
        //SOLICITUD QUE INGRESE NUMERO VALIDO
        cout << "Ingrese un numero invalido ";
        cin >> numero;
    }
    cout << "Numero valido"; 
    return 0;
}