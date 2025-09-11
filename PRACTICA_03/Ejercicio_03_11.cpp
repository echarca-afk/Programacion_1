// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Fecha creación: 09/09/2025
// Número de ejercicio: 11

#include <iostream>
using namespace std;

double retirarDinero(double saldoDisponible, int montoARetirar);

int main() {
    double saldoInicial;
    int montoSolicitado;

    //Entrada del usuario
    cout << "Ingrese el saldo disponible: ";
    cin >> saldoInicial;

    cout << "Ingrese la cantidad que desea retirar: ";
    cin >> montoSolicitado;

    //Llamada a la función para procesar el retiro
    double saldoFinal = retirarDinero(saldoInicial, montoSolicitado);

    //Mostrar el resultado según el estado de la transacción
    if (saldoFinal == 0) {
        cout << "No se realizó la transaccion" << endl;
    } else {
        cout << "Su saldo actual es de: " << saldoFinal << endl;
    }

    return 0;
}

//Función que valida y realiza el retiro de dinero
double retirarDinero(double saldoDisponible, int montoARetirar) {
    // Verifica si hay suficiente saldo
    if (saldoDisponible < montoARetirar) {
        cout << "No tiene saldo suficiente" << endl;
        return 0.0;
    }

    //Verifica si el monto es múltiplo de 10 (condición para retiro válido)
    if (montoARetirar % 10 != 0) {
        cout << "La cantidad no es valida para retirar" << endl;
        return 0.0;
    }

    //Si pasa ambas validaciones, se permite el retiro
    cout << "El retiro es valido" << endl;
    return saldoDisponible - montoARetirar;
}

