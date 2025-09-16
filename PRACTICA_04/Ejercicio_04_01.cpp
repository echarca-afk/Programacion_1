// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Fecha creación: 15/09/2025
// Número de ejercicio: 1

#include <iostream>
using namespace std;

// Función que intercambia los valores de dos variables enteras
void IntercambiarValores(int &primerValor, int &segundoValor) {
    int valorTemporal = primerValor; //Referenciamos el valor original de primerValor
    primerValor = segundoValor;      // Asignamos el valor de segundoValor a primerValor
    segundoValor = valorTemporal;    // Asignamos el valor guardado a segundoValor
    }
    int main() {
    int numeroUno, numeroDos;

    cout << "Ingrese el primer numero: ";
    cin >> numeroUno;
    cout << "Ingrese el segundo numero: ";
    cin >> numeroDos;

    // Muestra los valores antes del intercambio
    cout << "\nAntes de intercambiar:" << endl;
    cout << "numeroUno = " << numeroUno << endl;
    cout << "numeroDos = " << numeroDos << endl;
    // Llama a la función para intercambiar los valores
    IntercambiarValores(numeroUno, numeroDos);
    // Muestra los valores después del intercambio
    cout << "\nDespués de intercambiar:" << endl;
    cout << "numeroUno = " << numeroUno << endl;
    cout << "numeroDos = " << numeroDos << endl;

    return 0;
}