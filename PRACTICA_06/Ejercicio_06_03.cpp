// Materia: Programación I, Paralelo 4
// Autor: Univ. Charca Canaviri Emiliano
// Carnet: 13740843
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 07/10/2025
// Número de ejercicio: 3
#include <iostream>
#include <string>
#include <cstdlib> // Para rand()
#include <ctime>   // Para time()

using namespace std;

#include <iostream>
#include <vector>
#include <cstdlib>   // Para rand() y srand()
#include <ctime>     // Para time()

using namespace std;

int main() {
    // Semilla para números aleatorios
    srand(time(nullptr));

    // Vectores con 10 elementos cada uno
    vector<string> nombres = {"Ana", "Luis", "Maria", "Carlos", "Lucia", "Jorge", "Sofia", "Diego", "Elena", "Pablo"};
    vector<string> apellidos = {"Perez", "Gomez", "Lopez", "Diaz", "Ramos", "Torres", "Castro", "Mendoza", "Vargas", "Romero"};
    vector<int> edades = {18, 20, 21, 22, 19, 23, 24, 25, 26, 27};

    int N;
    cout << "Ingrese cuantas veces desea seleccionar aleatoriamente (N): ";
    cin >> N;

    cout << "\nResultados:\n";
    for (int i = 0; i < N; i++) {
        int indiceNombre = rand() % nombres.size();
        int indiceApellido = rand() % apellidos.size();
        int indiceEdad = rand() % edades.size();

        cout << i + 1 << ". " << nombres[indiceNombre] << " "
             << apellidos[indiceApellido] << ", Edad: "
             << edades[indiceEdad] << endl;
    }

    return 0;
}
