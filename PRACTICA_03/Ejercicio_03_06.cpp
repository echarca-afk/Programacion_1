// Materia: Programación I, Paralelo 4 
// Autor: Emiliano Charca Canaviri 
// Fecha creación: 11/09/2025 
// Número de ejercicio: 1 

#include <iostream>
using namespace std;

bool esBisiesto(int anio);
int diasEnElMes(int anio, int mes);
int main() {
    int anio, mes;
    
    cout << "Ingresa el anio: ";
    cin >> anio;

    cout << "Ingresa el numero del mes (1-12): ";
    cin >> mes;
    int dias = diasEnElMes(anio, mes);
    if (dias != -1) {
        cout << "El mes " << mes << " del anio " << anio << " tiene " << dias << " dias." << std::endl;
    } else {
        cout << "El mes ingresado no es valido." << endl;
    }
    return 0;
}
// Función para verificar si un año es bisiesto
bool esBisiesto(int anio) {
    return (anio % 400 == 0) || (anio % 4 == 0 && anio % 100 != 0);
}
// Función principal para obtener los días de un mes
int diasEnElMes(int anio, int mes) {
    // Validar el mes
    if (mes < 1 || mes > 12){
        return -1; // Retorna -1 para indicar un mes inválido
    }
    switch (mes) {
        case 1:  // Enero
        case 3:  // Marzo
        case 5:  // Mayo
        case 7:  // Julio
        case 8:  // Agosto
        case 10: // Octubre
        case 12: // Diciembre
            return 31;
        case 4:  // Abril
        case 6:  // Junio
        case 9:  // Septiembre
        case 11: // Noviembre
            return 30;
        case 2:  // Febrero
            if (esBisiesto(anio)) {
                return 29;
            } else {
                return 28;
            }
        default:
            return -1; // En caso de que se pase un mes inválido
    }
}