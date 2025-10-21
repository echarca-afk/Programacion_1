// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Carnet: 13740843 LP
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 14/10/2025
// Número de ejercicio: 2
#include <iostream>
using namespace std;
int recursivapotencia(int a, int n);
int main(){
    int numero = 0;
    int potencia = 0;
    cout << "Ingrese el numero que desee elevar a cierta potencia: ";
    cin >> numero;
    cout << "Ingrese la potencia: ";
    cin >> potencia;
    cout << "El resultado de la potenciacion es: " << recursivapotencia(numero, potencia);
    return 0;
}
int recursivapotencia(int a, int n){
    if(n == 0) {
        return 1;
    } else {
        return a*recursivapotencia(a,n-1);
    }
}