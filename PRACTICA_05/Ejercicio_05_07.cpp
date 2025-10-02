// Materia: Programación I, Paralelo 4
// Autor: Charca Canaviri Emiliano
// Carnet: 13740843
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 30/09/2025
// Número de ejercicio: 7
#include <iostream>
#include <vector>
using namespace std;

vector<int> ingresar() {
    vector<int> arr;
    int a;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> a;
        if (a < 0) {
            break; // Detiene el ingreso si el número es negativo
        }
        arr.push_back(a);
    }

    return arr;
}

void mostrar(const vector<int>& arr) {
    cout << "\nValores ingresados:\n";
    for (int i : arr) {
        cout << i << "\t";
    }
    cout << endl;
}

int main() {
    vector<int> arr = ingresar();
    mostrar(arr);
    return 0;
}