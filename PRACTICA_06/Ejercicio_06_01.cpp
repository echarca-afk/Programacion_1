// Materia: Programación I, Paralelo 4
// Autor: Univ. Charca Canaviri Emiliano
// Carnet: 13740843
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 07/10/2025
// Número de ejercicio: 1
#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

// Función para llenar el vector hasta ingresar -1
void llenar_vector(vector<int> &edades) {
    int valor;
    while (true) {
        cout << "Ingrese una edad (o -1 para terminar): ";
        cin >> valor;
        if (valor == -1) break;
        edades.push_back(valor);
    }
}

// Función para mostrar el vector
void mostrar_vector(const vector<int> &edades) {
    cout << "Edades ingresadas:\n";
    for (int edad : edades) {
        cout << edad << "\t";
    }
    cout << endl;
}

// Función para calcular la desviación típica
double desviacion_tipica(const vector<int> &edades) {
    int n = edades.size();
    if (n == 0) return 0.0;

    double suma = 0.0;
    for (int edad : edades) {
        suma += edad;
    }
    double media = suma / n;

    double suma_cuadrados = 0.0;
    for (int edad : edades) {
        suma_cuadrados += (edad - media) * (edad - media);
    }

    return sqrt(suma_cuadrados / n); // Desviación típica poblacional
}

int main() {
    vector<int> edades;
    llenar_vector(edades);
    mostrar_vector(edades);

    double desviacion = desviacion_tipica(edades);
    cout << "La desviación típica es: " << desviacion << endl;

    // Uso de string para cumplir con el requisito
    string mensaje = "Cálculo completado correctamente.";
    cout << mensaje << endl;

    return 0;
}