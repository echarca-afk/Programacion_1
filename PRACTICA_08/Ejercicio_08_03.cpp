// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Carnet: 13740843 LP
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 14/10/2025
// Número de ejercicio: 3
#include <iostream>
using namespace std;

int recursivafib(int n);

int main(){
    int numero = 0;
    cout << "Ingrese la posicion del enesimo numero de la serie de Fibonacci que desea conocer: ";
    cin >> numero;
    cout << "El numero enesimo de la serie de Fibonacci es: " << recursivafib(numero);
    return 0;
}

int recursivafib(int n){
    if(n == 0) {
        return 0;
    } else if(n == 1) {
        return 1;
    } else {
        return recursivafib(n - 1) + recursivafib(n - 2);
    }
}