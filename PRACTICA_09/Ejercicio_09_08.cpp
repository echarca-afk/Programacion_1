// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Fecha creación: 02/11/2025
// Número de ejercicio: 8
#include <iostream>
#include <cstring>
using namespace std;

const int MAX_ATLETAS = 100;
const int MAX_DEPARTAMENTOS = 20;

struct Atleta {
    char nombre[50];
    char departamento[30];
    char deporte[30];
    int medallas;
};

struct Medallero {
    char departamento[30];
    int total_medallas;
};

// Función para registrar un atleta
void registrarAtleta(Atleta& a) {
    cin.ignore();
    cout << "\nIngrese el nombre del atleta: ";
    cin.getline(a.nombre, 50);

    cout << "Ingrese el departamento que representa: ";
    cin.getline(a.departamento, 30);

    cout << "Ingrese el deporte que practica: ";
    cin.getline(a.deporte, 30);

    cout << "Ingrese la cantidad de medallas ganadas: ";
    cin >> a.medallas;
}

// Función para mostrar los datos de un atleta
void mostrarAtleta(const Atleta& a) {
    cout << "\n Nombre: " << a.nombre << endl;
    cout << " Departamento: " << a.departamento << endl;
    cout << " Deporte: " << a.deporte << endl;
    cout << " Medallas ganadas: " << a.medallas << endl;
}

// Función para actualizar el medallero por departamento
void actualizarMedallero(Medallero medallero[], int& totalDeptos, const Atleta& a) {
    for (int i = 0; i < totalDeptos; i++) {
        if (strcmp(medallero[i].departamento, a.departamento) == 0) {
            medallero[i].total_medallas += a.medallas;
            return;
        }
    }
    // Si el departamento no está registrado aún
    strcpy(medallero[totalDeptos].departamento, a.departamento);
    medallero[totalDeptos].total_medallas = a.medallas;
    totalDeptos++;
}

// Función para mostrar el medallero final
void mostrarMedallero(const Medallero medallero[], int totalDeptos) {
    cout << "\n MEDALLERO FINAL POR DEPARTAMENTO:\n";
    for (int i = 0; i < totalDeptos; i++) {
        cout << " " << medallero[i].departamento << ": " << medallero[i].total_medallas << " medallas\n";
    }
}

int main() {
    int n;
    Atleta atletas[MAX_ATLETAS];
    Medallero medallero[MAX_DEPARTAMENTOS];
    int totalDeptos = 0;

    cout << "¿Cuántos atletas desea registrar? (máximo " << MAX_ATLETAS << "): ";
    cin >> n;

    if (n <= 0 || n > MAX_ATLETAS) {
        cout << "Cantidad inválida.\n";
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "\n--- Registro del atleta #" << (i + 1) << " ---";
        registrarAtleta(atletas[i]);
        actualizarMedallero(medallero, totalDeptos, atletas[i]);
    }

    cout << "\n Mostrando todos los atletas registrados:\n";
    for (int i = 0; i < n; i++) {
        mostrarAtleta(atletas[i]);
    }

    mostrarMedallero(medallero, totalDeptos);

    return 0;
}