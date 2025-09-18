// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Fecha creación: 18/09/2025
// Número de ejercicio: 3

#include <iostream>
using namespace std;

void ModificarValores(int valorPorValor, int& valorPorReferencia);
int main() {
    int a;
    cout <<" Introduzca el primer valor:\n ";
    cin >> a;
    int b;
    cout <<" Introduzca el segundo valor:\n ";
    cin >> b;

    cout << "Antes de llamar a la funcion:\n";
    cout << "a (por valor): " << a << "\n";
    cout << "b (por referencia): " << b << "\n\n";

    ModificarValores(a, b);

    cout << "\nDespues de llamar a la funcion:\n";
    cout << "a (por valor): " << a << "  // No cambia\n";
    cout << "b (por referencia): " << b << "  // Cambia a b + 10\n";

    return 0;
}
// Función que modifica dos valores:
// - Multiplica el entero pasado por valor (no afecta al original)
// - Suma 10 al entero pasado por referencia (sí afecta al original)
void ModificarValores(int valorPorValor, int& valorPorReferencia) {
    valorPorValor *= 2;              // Este cambio no afecta fuera de la función
    valorPorReferencia += 10;        // Este cambio sí se refleja fuera de la función

    // Solo para mostrar dentro de la función
    cout << "Dentro de la funcion:\n";
    cout << "Valor por valor (modificado): " << valorPorValor << "\n";
    cout << "Valor por referencia (modificado): " << valorPorReferencia << "\n";
}
