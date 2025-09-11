// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 09/09/2025
// Número de ejercicio: 10

#include <iostream>
using namespace std;

double calcularTarifa(double kilometrosRecorridos);
int main() {
    double distanciaRecorrida;

    //Entrada del usuario
    cout << "Ingrese el recorrido del viaje en taxi (en kilometros): ";
    cin >> distanciaRecorrida;

    //Cálculo del costo usando la función
    double costoDelViaje = calcularTarifa(distanciaRecorrida);

    // Mostrar el resultado
    cout << "El costo del viaje es de: " << costoDelViaje << " Bs." << endl;

    return 0;
}
//Función que calcula el costo total del viaje en taxi
double calcularTarifa(double kilometrosRecorridos) {
    double tarifaBase = 10.0;  // Tarifa fija inicial
    double tarifaPorKilometro = kilometrosRecorridos * 2.0;  // Costo variable según distancia

    double costoTotal = tarifaBase + tarifaPorKilometro;

    //Descuento del 10% si el recorrido supera los 10 km
    if (kilometrosRecorridos > 10.0) {
        costoTotal -= (costoTotal * 0.1);
    }

    return costoTotal;
}