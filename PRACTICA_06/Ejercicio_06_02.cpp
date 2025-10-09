// Materia: Programación I, Paralelo 4
// Autor: Univ. Charca Canaviri Emiliano
// Carnet: 13740843
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 07/10/2025
// Número de ejercicio: 2
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Arreglos constantes
    string nombres[6] = {"SN", "SB", "AU", "PT", "AG", "CU"};
    float producciones[6] = {998.000, 876.500, 786.670, 636.143, 135.567, 109.412};

    // Buscar por nombre
    string buscado;
    cout << "Ingrese el nombre del mineral a buscar: ";
    cin >> buscado;

    bool encontrado = false;
    for (int i = 0; i < 6; i++) {
        if (nombres[i] == buscado) {
            cout << "ProducciOn de " << nombres[i] << ": " << producciones[i] << " TM" << endl;
            encontrado = true;
        }
    }
    if (!encontrado) {
        cout << "Mineral no encontrado." << endl;
    }

    // Ordenar de mayor a menor (burbuja)
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 6; j++) {
            if (producciones[i] < producciones[j]) {
                // Intercambiar producción
                float tempProd = producciones[i];
                producciones[i] = producciones[j];
                producciones[j] = tempProd;

                // Intercambiar nombre
                string tempNom = nombres[i];
                nombres[i] = nombres[j];
                nombres[j] = tempNom;
            }
        }
    }

    // Mostrar ordenado
    cout << "\nMineral\tProducciOn TM\n";
    for (int i = 0; i < 6; i++) {
        cout << nombres[i] << "\t" << producciones[i] << endl;
    }

    return 0;
}