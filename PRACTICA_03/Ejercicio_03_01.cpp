// Materia: Programación I, Paralelo 4 
// Autor: Emiliano Charca Canaviri 
// Fecha creación: 11/09/2025 
// Número de ejercicio: 1 

#include <iostream>
using namespace std;

void mostrarParidad(int numero);
//Función principal
int main() {
    int valor;

    cout << "Ingrese un numero entero: ";
    cin >> valor;

    mostrarParidad(valor);  // Llamada a la función que imprime el resultado

    return 0;
}
//Función que imprime si el número es par o impar
void mostrarParidad(int numero) {
    if (numero % 2 == 0) {
        cout << numero << " es un numero par." << endl;
    } else {
        cout << numero << " es un numero impar." << endl;
    }
}