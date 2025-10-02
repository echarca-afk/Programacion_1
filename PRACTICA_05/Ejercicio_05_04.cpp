// Materia: Programación I, Paralelo 4
// Autor: Charca Canaviri Emiliano
// Carnet: 13740843
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 02/10/2025
// Número de ejercicio: 4
#include <iostream>
#include <vector>
using namespace std;

// Función para leer un vector de dimensión N
void leer_vector(vector<double>& vec, int N, const string& nombre) {
    vec.resize(N);
    cout << "Ingrese los valores para el vector " << nombre << ":\n";
    for (int i = 0; i < N; ++i) {
        cout << nombre << "[" << i << "] = ";
        cin >> vec[i];
    }
}

// Función para multiplicar dos vectores elemento a elemento
vector<double> multiplicar_vectores(const vector<double>& v1, const vector<double>& v2) {
    int N = v1.size();
    vector<double> resultado(N);
    for (int i = 0; i < N; ++i) {
        resultado[i] = v1[i] * v2[i];
    }
    return resultado;
}

// Función para mostrar un vector
void mostrar_vector(const vector<double>& vec, const string& nombre) {
    cout << "Contenido del vector " << nombre << ":\n";
    for (int i = 0; i < vec.size(); ++i) {
        cout << nombre << "[" << i << "] = " << vec[i] << endl;
    }
}

int main() {
    int N;
    cout << "Ingrese la dimensión N de los vectores: ";
    cin >> N;

    vector<double> A, B, C;

    leer_vector(A, N, "A");
    leer_vector(B, N, "B");

    C = multiplicar_vectores(A, B);

    mostrar_vector(C, "C (A * B)");

    return 0;
}