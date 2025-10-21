// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Carnet: 13740843 LP
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 21/10/2025
// Número de ejercicio: 7
#include <iostream>
#include <cmath>
using namespace std;
int recursivapotencia(int a);
int main(){
    int numero = 0;
    cout << "Ingrese el numero enesimo hasta donde quiere hacer llegar de la serie correspondiente: ";
    cin >> numero;
    cout << "El resultado de la potenciacion es: " << recursivapotencia(numero);
    return 0;
}
int recursivapotencia(int a){
    if(a == 0) {
        return 0;
    } else {
        return pow(a,2)+recursivapotencia(pow(a-1,2));
    }
}