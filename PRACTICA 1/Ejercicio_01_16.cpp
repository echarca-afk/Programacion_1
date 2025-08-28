// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 26/08/2025
// Número de ejercicio: 16

#include <iostream>
using namespace std;

int main() {
    int numero;
    int contador_de_divisores = 0; //VALOR INICIAL DE EL CONTADOR DE DIVISORES
    
    cout << "Ingrese un numero: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            contador_de_divisores++;
        }
    }
    //EL CONTADOR DE DIVISORES DEBE SER 2 PARA LA VERIFIACION
    if (contador_de_divisores == 2) { 
        cout << "Es un numero primo"; //SI ES PRIMO
    } else {
        cout << "No es primo"; //NO ES PRIMO
    }

    return 0;
}
