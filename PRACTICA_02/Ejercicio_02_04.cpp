// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 09/09/2025
// Número de ejercicio: 4

#include <iostream>
#include <cstdlib>   // Para rand() y srand()
#include <ctime>     // Para time()

using namespace std;

int main()
{
    // Inicializa la semilla para generar números aleatorios
    srand(time(0));

    // Número secreto generado aleatoriamente entre 0 y 50
    int numeroSecreto = rand() % 51;

    // Contador de intentos realizados
    int numeroIntento = 1;

    // Variable para almacenar el número ingresado por el usuario
    int numeroUsuario = -1;

    // Límites dinámicos del rango de búsqueda
    int limiteInferior = 0;
    int limiteSuperior = 50;

    // Bucle principal: máximo 5 intentos o hasta adivinar el número
    while (numeroUsuario != numeroSecreto && numeroIntento <= 5) {
        cout << "Estoy pensando en un numero entre: " << limiteInferior << " y " << limiteSuperior << endl;
        cout << "Intento " << numeroIntento << ": " << endl;

        cin >> numeroUsuario;

        if (numeroUsuario == numeroSecreto) {
            cout << "Felicidades, ganaste" << endl;
        } else if (numeroUsuario < numeroSecreto) {
            // Ajusta el límite inferior si el número es menor al secreto
            limiteInferior = numeroUsuario;
            cout << "Numero equivocado" << endl;
        } else if (numeroUsuario > numeroSecreto) {
            // Ajusta el límite superior si el número es mayor al secreto
            limiteSuperior = numeroUsuario;
            cout << "Numero equivocado" << endl;
        }

        // Incrementa el contador de intentos
        numeroIntento++;
    }

    // Si no se adivinó el número en los 5 intentos
    if (numeroUsuario != numeroSecreto) {
        cout << "Perdiste el juego" << endl;
    }

    return 0;
}