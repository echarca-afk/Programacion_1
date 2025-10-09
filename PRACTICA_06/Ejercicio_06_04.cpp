// Materia: Programación I, Paralelo 4
// Autor: Univ. Charca Canaviri Emiliano
// Carnet: 13740843
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 07/10/2025
// Número de ejercicio: 4
#include <iostream>
using namespace std;

int main() {
    int N, k;

    // Ingreso de tamaño del vector
    cout << "Ingrese la cantidad de elementos (N): ";
    cin >> N;

    int vec[100]; // Vector con capacidad máxima de 100

    // Ingreso de elementos
    for (int i = 0; i < N; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vec[i];
    }

    // Ingreso de posiciones a rotar
    cout << "Ingrese cuántas posiciones desea rotar a la derecha (k): ";
    cin >> k;

    // Ajustar k si es mayor que N
    k = k % N;

    // Rotación manual
    int temp[100];
    for (int i = 0; i < N; i++) {
        temp[(i + k) % N] = vec[i];
    }

    // Copiar resultado al vector original
    for (int i = 0; i < N; i++) {
        vec[i] = temp[i];
    }

    // Mostrar vector rotado
    cout << "\nVector después de rotar " << k << " posiciones a la derecha:\n";
    for (int i = 0; i < N; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}