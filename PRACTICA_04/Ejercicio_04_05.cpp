// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Fecha creación: 18/09/2025
// Número de ejercicio: 5

#include <iostream>
using namespace std;

double CalcularSalarioBase(double horas, double tarifa);
double CalcularBonificacion(double horas, double tarifa, double porcentajeBonificacion);
int main() {
    double horasTrabajadas, tarifaPorHora;
    double BONIFICACION_EXTRA = 0.5; // 50% adicional por hora extra

    cout << "Ingrese las horas trabajadas: ";
    cin >> horasTrabajadas;

    cout << "Ingrese la tarifa por hora: ";
    cin >> tarifaPorHora;

    double salarioBase = CalcularSalarioBase(horasTrabajadas, tarifaPorHora);
    double bonificacion = CalcularBonificacion(horasTrabajadas, tarifaPorHora, BONIFICACION_EXTRA);
    double salarioTotal = salarioBase + bonificacion;

    cout << "\n--- Resultado ---\n";
    cout << "Salario base: " << salarioBase << " Bs\n";
    cout << "Bonificacion por horas extra: " << bonificacion << " Bs\n";
    cout << "Salario total: " << salarioTotal << " Bs\n";

    return 0;
}
// Calcula el salario base sin bonificación
double CalcularSalarioBase(double horas, double tarifa) {
    return horas * tarifa;
}

// Calcula la bonificación solo si hay horas extra (más de 8)
double CalcularBonificacion(double horas, double tarifa, double porcentajeBonificacion) {
    if (horas > 8) {
        double horasExtra = horas - 8;
        double bonificacion = horasExtra * tarifa * porcentajeBonificacion;
        return bonificacion;
    }
    return 0.0;
}


