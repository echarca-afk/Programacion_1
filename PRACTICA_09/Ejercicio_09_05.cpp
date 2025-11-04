// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Fecha creación: 02/11/2025
// Número de ejercicio: 5
#include <iostream>
#include <cstring> // Para strcmp
using namespace std;

const int MAX_PELICULAS = 100;

struct Pelicula {
    char titulo[100];
    char director[50];
    int duracion;
    int anio_estreno;
    char genero[30];
};

// Función para registrar una película
void registrarPelicula(Pelicula& p) {
    cin.ignore(); // Limpiar buffer
    cout << "\nIngrese el título: ";
    cin.getline(p.titulo, 100);

    cout << "Ingrese el director: ";
    cin.getline(p.director, 50);

    cout << "Ingrese la duración (minutos): ";
    cin >> p.duracion;
    cin.ignore();

    cout << "Ingrese el año de estreno: ";
    cin >> p.anio_estreno;
    cin.ignore();

    cout << "Ingrese el género: ";
    cin.getline(p.genero, 30);
}

// Función para mostrar una película
void mostrarPelicula(const Pelicula& p) {
    cout << "\n Título: " << p.titulo << endl;
    cout << "🎥 Director: " << p.director << endl;
    cout << "⏱ Duración: " << p.duracion << " minutos" << endl;
    cout << " Año de estreno: " << p.anio_estreno << endl;
    cout << " Género: " << p.genero << endl;
}

// Mostrar películas por género
void mostrarPorGenero(Pelicula peliculas[], int n, const char* generoBuscado) {
    cout << "\n Películas del género \"" << generoBuscado << "\":\n";
    bool encontrado = false;
    for (int i = 0; i < n; i++) {
        if (strcmp(peliculas[i].genero, generoBuscado) == 0) {
            mostrarPelicula(peliculas[i]);
            encontrado = true;
        }
    }
    if (!encontrado) {
        cout << "No se encontraron películas de ese género.\n";
    }
}

// Mostrar películas por director
void mostrarPorDirector(Pelicula peliculas[], int n, const char* directorBuscado) {
    cout << "\n Películas dirigidas por \"" << directorBuscado << "\":\n";
    bool encontrado = false;
    for (int i = 0; i < n; i++) {
        if (strcmp(peliculas[i].director, directorBuscado) == 0) {
            mostrarPelicula(peliculas[i]);
            encontrado = true;
        }
    }
    if (!encontrado) {
        cout << "No se encontraron películas de ese director.\n";
    }
}

int main() {
    int n;
    Pelicula peliculas[MAX_PELICULAS];

    cout << "¿Cuántas películas desea registrar? (máximo " << MAX_PELICULAS << "): ";
    cin >> n;

    if (n <= 0 || n > MAX_PELICULAS) {
        cout << "Cantidad inválida.\n";
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "\n--- Registro de la película #" << (i + 1) << " ---";
        registrarPelicula(peliculas[i]);
    }

    char generoBuscado[30];
    cout << "\n Ingrese el género que desea buscar: ";
    cin.ignore();
    cin.getline(generoBuscado, 30);
    mostrarPorGenero(peliculas, n, generoBuscado);

    char directorBuscado[50];
    cout << "\n Ingrese el director que desea buscar: ";
    cin.getline(directorBuscado, 50);
    mostrarPorDirector(peliculas, n, directorBuscado);

    return 0;
}