// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 25/08/2025
// Número de ejercicio: 11

#include <iostream>
using namespace std;

int main() {
    int mes;

    cout << "Ingrese el numero de mes: ";
    cin >> mes;

    //MESES
    switch (mes) {
        case 1:
        cout << "ENERO" << endl; //MES_1
        break;
        case 2:
        cout << "FEBRERO" << endl;//MES_2
        break;
        case 3:
        cout << "MARZO" << endl;//MES_3
        break;
        case 4:
        cout << "ABRIL" << endl;//MES_4
        break;
        case 5:
        cout << "MAYO" << endl;//MES_5
        break;
        case 6:
        cout << "JUNIO" << endl;//MES_6
        break;
        case 7:
        cout << "JULIO" << endl;//MES_7
        break;
        case 8:
        cout << "AGOSTO" << endl;//MES_8
        break;
        case 9:
        cout << "SEPTIEMBRE" << endl;//MES_9
        break;
        case 10:
        cout << "OCTUBRE" << endl;//MES_10
        break;
        case 11:
        cout << "NOVIEMBRE" << endl;//MES_11
        break;
        case 12:
        cout << "DICIEMBRE" << endl;//MES_12
        break;
    //NUMERO DE MES INVALIDO
        default:
            cout << "Mes invalido" << endl;
    }

    return 0; 
}

