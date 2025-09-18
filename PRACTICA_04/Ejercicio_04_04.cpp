// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Fecha creación: 18/09/2025
// Número de ejercicio: 4

#include <iostream>
using namespace std;

double ConvertirCelsiusAFahrenheit(double celsius);

// Devuelve la mayor de dos temperaturas
double MayorTemperatura(double temp1, double temp2) {
    return (temp1 > temp2) ? temp1 : temp2;
}

int main() {
    double c1, c2;

    cout << "Ingrese la primera temperatura en Celsius: ";
    cin >> c1;

    cout << "Ingrese la segunda temperatura en Celsius: ";
    cin >> c2;

    double f1 = ConvertirCelsiusAFahrenheit(c1);
    double f2 = ConvertirCelsiusAFahrenheit(c2);
    double mayor = MayorTemperatura(f1, f2);

    cout << "\nTemperatura 1 en Fahrenheit: " << f1 << " grados F\n";
    cout << "Temperatura 2 en Fahrenheit: " << f2 << "grados F\n";
    cout << "La mayor temperatura en Fahrenheit es: " << mayor << " grados F\n";

    return 0;
}
// Convierte grados Celsius a Fahrenheit
double ConvertirCelsiusAFahrenheit(double celsius) {
    // Fórmula: F = (C × 9/5) + 32
    return (celsius * 9.0 / 5.0) + 32;
}
