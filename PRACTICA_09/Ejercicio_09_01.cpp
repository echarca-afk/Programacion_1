// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Fecha creación: 02/11/2025
// Número de ejercicio: 1
#include <iostream>
using namespace std;

struct Libro {
    char titulo[100];
    char autor[100];
    int anio_publicacion;
    bool disponible;
};
// Función para registrar los datos del libro
Libro registrarLibro() {
    Libro book;

    cout << "Ingrese el titulo del Libro: ";
    cin.getline(book.titulo, 100);

    cout << "Ingrese el autor del Libro: ";
    cin.getline(book.autor, 100);

    cout << "Ingrese el anio de publicacion del Libro: ";
    cin >> book.anio_publicacion;

    cout << "¿El libro está disponible? (1 = Sí, 0 = No): ";
    cin >> book.disponible;
    cin.ignore(); // Limpiar el buffer por si se usa getline después
    return book;
}
// Función para mostrar los datos del libro
void mostrarLibro(const Libro& book) {
    cout << "\n Datos del libro registrado:\n";
    cout << "Título: " << book.titulo << endl;
    cout << "Autor: " << book.autor << endl;
    cout << "Año de publicación: " << book.anio_publicacion << endl;
    cout << "Disponibilidad: " << (book.disponible ? "Disponible" : "No disponible") << endl;
}

int main() {
    Libro libroRegistrado = registrarLibro();
    mostrarLibro(libroRegistrado);
    return 0;
}