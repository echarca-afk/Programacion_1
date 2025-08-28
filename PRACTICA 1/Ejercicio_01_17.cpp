// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 26/08/2025
// Número de ejercicio: 17

#include <iostream>
using namespace std;

int main() {
    int numero_1;
    int numero_2;
    int suma_de_numero_1 = 0; //VALOR INICIAL DE EL PRIMER CONTADOR DE DIVISOR
    int suma_de_numero_2 = 0; //VALOR INICIAL DE EL SEGUNDO CONTADOR DE DIVISOR
    cout << "Ingrese el primer numero: ";
    cin >> numero_1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero_2;

    //CONTADOR DE DIVISORES DEL PRIMER NUMERO
    for (int i = 1; i < numero_1; i++) {
        if (numero_1 % i == 0) {
            suma_de_numero_1 = suma_de_numero_1+i;
        }
    }
    //CONTADOR DE DIVISORES DEL SEGUNDO NUMERO
    for (int j = 1; j < numero_2; j++) {
        if (numero_2 % j == 0) {
            suma_de_numero_2 = suma_de_numero_2+j;
        }
    }
    //LOS CONTADORES DE DIVISORES DEBEN SER IGUALES
    if (suma_de_numero_1 == numero_2 && suma_de_numero_2 == numero_1) { 
        cout << "Los numeros son amigos"; //SI SON AMIGOS
    } else {
        cout << "No son amigos"; //NO SON AMIGOS
    }

    return 0;

}

