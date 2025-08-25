// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 24/08/2025
// Número de ejercicio: 6

#include <iostream>

using namespace std;

int main()
{
    //INGRESO DE NUMERO ENTERO
    int numero_entero;
    cout << " Ingrese un numero entero: ";
    cin >> numero_entero;

    //VERIFIACION SI ES POSITIVO, NEGATIVO O CERO
    if (numero_entero > 0)
    {
        cout << "El numero ingresado es un numero positivo" << endl;
    }
    else if (numero_entero < 0)
    {
        cout << "El numero ingresado es un numero negativo" << endl;
    }
    else
    {
            cout << "El numero ingresado es cero" << endl;
    }    

    return 0;
}