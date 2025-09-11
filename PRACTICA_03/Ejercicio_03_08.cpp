// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Fecha creación: 09/09/2025
// Número de ejercicio: 8

#include <iostream>
using namespace std;

int calcularCantidadPorCorte(int valorDelCorte, int montoDisponible);

int main() {
    int montoTotal;

    // Entrada del usuario
    cout << "Ingrese la cantidad de dinero: ";
    cin >> montoTotal;

    // Procesar cada corte de mayor a menor para minimizar la cantidad de billetes/monedas
    int cantidad;

    cantidad = calcularCantidadPorCorte(200, montoTotal);
    if (cantidad > 0) {
        cout << cantidad << " billetes de 200 Bs" << endl;
        montoTotal -= cantidad * 200;
    }

    cantidad = calcularCantidadPorCorte(100, montoTotal);
    if (cantidad > 0) {
        cout << cantidad << " billetes de 100 Bs" << endl;
        montoTotal -= cantidad * 100;
    }

    cantidad = calcularCantidadPorCorte(50, montoTotal);
    if (cantidad > 0) {
        cout << cantidad << " billetes de 50 Bs" << endl;
        montoTotal -= cantidad * 50;
    }

    cantidad = calcularCantidadPorCorte(20, montoTotal);
    if (cantidad > 0) {
        cout << cantidad << " billetes de 20 Bs" << endl;
        montoTotal -= cantidad * 20;
    }

    cantidad = calcularCantidadPorCorte(10, montoTotal);
    if (cantidad > 0) {
        cout << cantidad << " billetes de 10 Bs" << endl;
        montoTotal -= cantidad * 10;
    }

    cantidad = calcularCantidadPorCorte(5, montoTotal);
    if (cantidad > 0) {
        cout << cantidad << " monedas de 5 Bs" << endl;
        montoTotal -= cantidad * 5;
    }

    cantidad = calcularCantidadPorCorte(2, montoTotal);
    if (cantidad > 0) {
        cout << cantidad << " monedas de 2 Bs" << endl;
        montoTotal -= cantidad * 2;
    }

    cantidad = calcularCantidadPorCorte(1, montoTotal);
    if (cantidad > 0) {
        cout << cantidad << " monedas de 1 Bs" << endl;
        montoTotal -= cantidad * 1;
    }

    return 0;
}
//Función que calcula cuántos billetes o monedas de un corte se pueden usar
int calcularCantidadPorCorte(int valorDelCorte, int montoDisponible) {
    if (montoDisponible >= valorDelCorte) {
        int cantidadDeCortes = montoDisponible / valorDelCorte;
        return cantidadDeCortes;
    } else {
        return 0; // No se puede usar este corte
    }
}
