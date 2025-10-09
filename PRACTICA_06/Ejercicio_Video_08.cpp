#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    int entero;
    float real;
    float suma = 0.0;
    char cadena1[100];
    char cadena2[100];
    cout << "Ingrese caracteres de numeros enteros" << endl;
    cin.getline(cadena1, 20, '\n');
    cout << "Ingrese caracteres de numeros reales" << endl;
    cin.getline(cadena2, 20, '\n');
    entero = atoi(cadena1);
    real=atof(cadena2);
    suma=entero+real;

    cout << "La suma de los numeros ingresados es:" << suma<< endl;
    getch();
    return 0;
}