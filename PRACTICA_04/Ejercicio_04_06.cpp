// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Fecha creación: 18/09/2025
// Número de ejercicio: 6

#include <iostream>
using namespace std;

bool esPrimo(int n);
void determinar_digitos(int numero);
int main() {
    int numero_entero;
    cout << "Ingrese un nUmero entero: ";
    cin >> numero_entero;

    determinar_digitos(numero_entero);

    return 0;
}
// Función que verifica si un número es primo
bool esPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

// Función que suma los dígitos distintos de cero y verifica si la suma es primo
void determinar_digitos(int numero) {
    int suma = 0;

    while (numero > 0) {
        int digito = numero % 10;
        if (digito != 0) {
            suma += digito;
        }
        numero /= 10;
    }

    cout << "Suma de dígitos distintos de cero: " << suma << endl;

    if (esPrimo(suma)) {
        cout << "La suma es un nUmero primo.\n";
    } else {
        cout << "La suma no es un nUmero primo.\n";
    }
}
