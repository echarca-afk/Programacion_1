// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Fecha creación: 17/09/2025
// Número de ejercicio: 2

#include <iostream>
#include <cmath> // Para usar M_PI

using namespace std;

// Declaración con valor por defecto
double CalcularVolumen(double radio, double altura = 10);

int main() {
    double r;
    cout << "Ingrese el radio del cilindro: ";
    cin >> r;
    cout << "Volumen con radio " << r << " y altura 10: "
         << CalcularVolumen(r, 10) << " unidades cubicas\n";

    return 0;
}

// Definición sin repetir el valor por defecto
double CalcularVolumen(double radio, double altura) {
    return M_PI * pow(radio, 2) * altura;
}
