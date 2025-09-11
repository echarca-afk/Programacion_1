// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Carnet: 13740843 L.P.
// Fecha creación: 09/09/2025
// Número de ejercicio: 5

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

double promedioPonderado(int nota1, int nota2, int nota3, int nota4);

int main()
{
    srand(time(NULL));  // Inicializa la semilla para generar números aleatorios
    
    // Generación aleatoria de notas entre 0 y 100
    int notaAleatoria1 = rand() % 101;
    int notaAleatoria2 = rand() % 101;
    int notaAleatoria3 = rand() % 101;
    int notaAleatoria4 = rand() % 101;
    
    // Mostrar las notas generadas
    cout << "La nota 1 es de: " << notaAleatoria1 << endl;
    cout << "La nota 2 es de: " << notaAleatoria2 << endl;
    cout << "La nota 3 es de: " << notaAleatoria3 << endl;
    cout << "La nota 4 es de: " << notaAleatoria4 << endl;
    
    // Calcular el promedio ponderado usando la función
    double promedioCalculado = promedioPonderado(notaAleatoria1, notaAleatoria2, notaAleatoria3, notaAleatoria4);
    
    // Mostrar el resultado final
    cout << endl << "El promedio ponderado es de: " << promedioCalculado << endl;
    
    return 0;
}
//Función que calcula el promedio ponderado de 4 calificaciones
double promedioPonderado(int nota1, int nota2, int nota3, int nota4) {
    // Cada nota se multiplica por su peso correspondiente
    double notaPonderada1 = nota1 * 10.0;
    double notaPonderada2 = nota2 * 20.0;
    double notaPonderada3 = nota3 * 30.0;
    double notaPonderada4 = nota4 * 40.0;
    
    // Suma total de las notas ponderadas
    double sumaNotasPonderadas = notaPonderada1 + notaPonderada2 + notaPonderada3 + notaPonderada4;
    
    // División entre la suma total de los pesos (10 + 20 + 30 + 40 = 100)
    double promedioFinal = sumaNotasPonderadas / 100.0;
    
    return promedioFinal;
}