// Materia: Programación I, Paralelo 4
// Autor: Univ. Charca Canaviri Emiliano
// Carnet: 13740843
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 07/10/2025
// Número de ejercicio: 5
#include <iostream>
#include <string>
using namespace std;

int main() {
    const int N = 5; // Puedes cambiar el tamaño si lo deseas

    // Lista de clientes de Empresa A
    string empresaA[N] = {"Luis", "Ana", "Carlos", "Sofia", "Pedro"};

    // Lista de clientes de Empresa B
    string empresaB[N] = {"Maria", "Carlos", "Pedro", "Lucia", "Luis"};

    cout << "Clientes en común entre Empresa A y Empresa B:\n";

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (empresaA[i] == empresaB[j]) {
                cout << empresaA[i] << endl;
                break; // Evita mostrar duplicados si hay más coincidencias
            }
        }
    }

    return 0;
}