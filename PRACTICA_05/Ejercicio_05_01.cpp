// Materia: Programación I, Paralelo 4
// Autor: Charca Canaviri Emiliano
// Carnet: 13740843
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 30/09/2025
// Número de ejercicio: 1
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

// a) Voltajes (20.00 a 220.00)
void lista_voltajes(vector<double> &voltajes) {
    for (int i = 0; i < 100; i++) {
        voltajes[i] = 20.0 + (double)rand() / RAND_MAX * (220.0 - 20.0);
        cout << voltajes[i] << " ";
    }
    cout << endl;
}

// b) Temperaturas (0.00 a 100.00)
void lista_temperatura(vector<double> &temp) {
    for (int i = 0; i < 50; i++) {
        temp[i] = 0.0 + (double)rand() / RAND_MAX * 100.0;
        cout << temp[i] << " ";
    }
    cout << endl;
}

// c) Caracteres alfanuméricos (0-9, A-Z, a-z)
void lista_alfanum(vector<char> &alfanum) {
    string chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < 30; i++) {
        alfanum[i] = chars[rand() % chars.size()];
        cout << alfanum[i] << " ";
    }
    cout << endl;
}

// d) Años (1990 a 2025)
void lista_anios(vector<int> &anios) {
    for (int i = 0; i < 100; i++) {
        anios[i] = 1990 + rand() % (2025 - 1990 + 1);
        cout << anios[i] << " ";
    }
    cout << endl;
}

// e) Velocidades (10.00 a 300.00)
void lista_velocidades(vector<double> &vel) {
    for (int i = 0; i < 32; i++) {
        vel[i] = 10.0 + (double)rand() / RAND_MAX * (300.0 - 10.0);
        cout << vel[i] << " ";
    }
    cout << endl;
}

// f) Distancias (1.00 a 1000.00)
void lista_distancias(vector<double> &dist) {
    for (int i = 0; i < 1000; i++) {
        dist[i] = 1.0 + (double)rand() / RAND_MAX * (1000.0 - 1.0);
        cout << dist[i] << " ";
    }
    cout << endl;
}

int main() {
    srand(time(NULL));

    vector<double> voltajes(100);
    vector<double> temp(50);
    vector<char> alfanum(30);
    vector<int> anios(100);
    vector<double> vel(32);
    vector<double> dist(1000);

    cout << "Voltajes:" << endl;
    lista_voltajes(voltajes);

    cout << "Temperaturas:" << endl;
    lista_temperatura(temp);

    cout << "Caracteres:" << endl;
    lista_alfanum(alfanum);

    cout << "Años:" << endl;
    lista_anios(anios);

    cout << "Velocidades:" << endl;
    lista_velocidades(vel);

    cout << "Distancias:" << endl;
    lista_distancias(dist);

    return 0;
}
