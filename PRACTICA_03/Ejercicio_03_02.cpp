// Materia: Programación I, Paralelo 4 
// Autor: Emiliano Charca Canaviri 
// Fecha creación: 11/09/2025 
// Número de ejercicio: 1 

#include <iostream>
using namespace std;

float convertirCelsiusAFahrenheit(float gradosCelsius);
//Función principal
int main() {
    float celsius;

    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;

    float fahrenheit = convertirCelsiusAFahrenheit(celsius);

    cout << celsius << " grados Celcius equivalen a " << fahrenheit << " grados Fahrenheit." << endl;

    return 0;
}

//Función que convierte grados Celsius a Fahrenheit
float convertirCelsiusAFahrenheit(float gradosCelsius) {
    return gradosCelsius * 9.0 / 5.0 + 32.0;
}