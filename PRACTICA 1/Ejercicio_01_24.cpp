// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 27/08/2025
// Número de ejercicio: 24

#include <iostream>
using namespace std;

int main() {
    int opcion;
    do {
        //DESPLIEGUE DEL MENU
        cout << "Menu" <<endl;
        cout << "1. Opcion 1"<<endl;
        cout << "2. Opcion 2"<<endl;
        cout << "3. Opcion 3"<<endl;
        cout << "0. Salir"<<endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        //PROCESO DE OPCIONES
        switch (opcion) {
            case 1:
                cout << "Elegiste la Opcion 1"<<endl; //OPCION 1
                break;
            case 2:
                cout << "Elgiste la Opcion 2"<<endl; //OPCION 2
                break;
            case 3:
                cout << "Elegiste la Opcion 3"<<endl; //OPCION 3
                break;
            case 0:
                cout << "Salir"<<endl; //SALIR DEL PROGRAMA
                break;
            default:
                cout << "Opcion no valida"<<endl;
        }
    } while (opcion != 0);
    return 0;
}