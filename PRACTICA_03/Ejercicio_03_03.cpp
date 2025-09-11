// Materia: Programación I, Paralelo 4 
// Autor: Emiliano Charca Canaviri 
// Fecha creación: 11/09/2025 
// Número de ejercicio: 3

#include <iostream>
#include <string>
using namespace std;

bool esCapicua(int numero);
//Función principal
int main() {
    int valor;

    cout << "Ingrese un numero entero: ";
    cin >> valor;

    if (esCapicua(valor)) {
        cout << valor << " es un numero capicua." << endl;
    } else {
        cout << valor << " no es capicua." << endl;
    }

    return 0;
}
//Función que determina si un número es capicúa
bool esCapicua(int numero) {
    int original = numero;
    int invertido = 0;

    while (numero > 0) {
        int digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }

    return original == invertido;
}