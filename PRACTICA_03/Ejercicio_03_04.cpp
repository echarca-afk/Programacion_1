// Materia: Programación I, Paralelo 4 
// Autor: Emiliano Charca Canaviri 
// Fecha creación: 11/09/2025 
// Número de ejercicio: 1 

#include <iostream>
using namespace std;

float calcularIMC(float peso, float altura);
// Función principal
int main() {
    float peso, altura;

    cout << "Ingrese el peso en kilogramos: ";
    cin >> peso;

    cout << "Ingrese la altura en metros: ";
    cin >> altura;

    float imc = calcularIMC(peso, altura);

    cout << "El IMC es: " << imc << endl;

    return 0;
}
// Función que calcula el IMC
float calcularIMC(float peso, float altura) {
    return peso / (altura * altura);
}
