// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Fecha creación: 02/11/2025
// Número de ejercicio: 2
#include <iostream>
using namespace std;

struct Atleta {
    char nombre[100];
    char pais[100];
    int edad;
    int mejor_tiempo; // en segundos
};

// Función para registrar un atleta
Atleta registrarAtleta() {
    Atleta atleta;

    cout << "\nIngrese el nombre del atleta: ";
    cin.ignore(); // Limpiar el buffer antes de getline
    cin.getline(atleta.nombre, 100);

    cout << "Ingrese el país del atleta: ";
    cin.getline(atleta.pais, 100);

    cout << "Ingrese la edad del atleta: ";
    cin >> atleta.edad;

    cout << "Ingrese el mejor tiempo del atleta (en segundos): ";
    cin >> atleta.mejor_tiempo;

    return atleta;
}

// Función para encontrar el atleta con el mejor tiempo
Atleta encontrarMejorAtleta(Atleta atletas[], int cantidad) {
    Atleta mejor = atletas[0];

    for (int i = 1; i < cantidad; i++) {
        if (atletas[i].mejor_tiempo < mejor.mejor_tiempo) {
            mejor = atletas[i];
        }
    }

    return mejor;
}

int main() {
    int N;
    cout << "¿Cuántos atletas desea registrar? ";
    cin >> N;

    Atleta atletas[N];

    for (int i = 0; i < N; i++) {
        cout << "\n--- Registro del atleta #" << (i + 1) << " ---";
        atletas[i] = registrarAtleta();
    }

    Atleta mejor = encontrarMejorAtleta(atletas, N);

    cout << "\n El atleta con el mejor tiempo es:\n";
    cout << "Nombre: " << mejor.nombre << endl;
    cout << "País: " << mejor.pais << endl;
    cout << "Tiempo: " << mejor.mejor_tiempo << " segundos" << endl;

    return 0;
}