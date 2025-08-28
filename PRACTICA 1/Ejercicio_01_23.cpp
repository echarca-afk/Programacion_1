// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 27/08/2025
// Número de ejercicio: 23

#include <iostream>
using namespace std;

int main() {
    int numero;
    int numero_invertido= 0;
    int digito;
    cout << "Ingrese un numero entero: ";
    cin >> numero;


    while (numero > 0) {
        digito = numero % 10; //OBTENCION DEL ULTIMO DIGITO
        numero = numero / 10; //ELIMINANDO EL ULTIMO DIGITO
        numero_invertido = numero_invertido*10+digito; //GENERARCION DEL NUMERO INVERTIDO
    }
    cout << "Numero invertido es " << numero_invertido ;
    cout << endl;
    return 0;
}