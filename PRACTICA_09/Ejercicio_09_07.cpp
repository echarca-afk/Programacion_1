// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Fecha creación: 02/11/2025
// Número de ejercicio: 7
#include <iostream>
#include <cstring> // Para strcpy
using namespace std;

const int MAX_PRODUCTOS = 100;

struct Producto {
    char nombre[50];
    char codigo[20];
    float precio;
    int cantidad_en_inventario;
    char observaciones[100];
};

// Función para registrar un producto
void registrarProducto(Producto& p) {
    cin.ignore();
    cout << "\nIngrese el nombre del producto: ";
    cin.getline(p.nombre, 50);

    cout << "Ingrese el código del producto: ";
    cin.getline(p.codigo, 20);

    cout << "Ingrese el precio: ";
    cin >> p.precio;

    cout << "Ingrese la cantidad en inventario: ";
    cin >> p.cantidad_en_inventario;

    // Asignar advertencia si la cantidad es menor a 5
    if (p.cantidad_en_inventario < 5) {
        strcpy(p.observaciones, "PRODUCTO CON BAJA CANTIDAD DE INVENTARIO");
    } else {
        strcpy(p.observaciones, "SIN OBSERVACIONES");
    }
}

// Función para mostrar un producto
void mostrarProducto(const Producto& p) {
    cout << "\nNombre: " << p.nombre << endl;
    cout << " Código: " << p.codigo << endl;
    cout << " Precio: " << p.precio << endl;
    cout << " Cantidad en inventario: " << p.cantidad_en_inventario << endl;
    cout << " Observaciones: " << p.observaciones << endl;
}

// Función para encontrar el índice del producto más caro
int indiceProductoMasCaro(Producto productos[], int n) {
    int indiceMax = 0;
    for (int i = 1; i < n; i++) {
        if (productos[i].precio > productos[indiceMax].precio) {
            indiceMax = i;
        }
    }
    return indiceMax;
}

// Función para calcular la cantidad total en inventario
int cantidadTotalInventario(Producto productos[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += productos[i].cantidad_en_inventario;
    }
    return total;
}

int main() {
    int n;
    Producto productos[MAX_PRODUCTOS];

    cout << "¿Cuántos productos desea registrar? (máximo " << MAX_PRODUCTOS << "): ";
    cin >> n;

    if (n <= 0 || n > MAX_PRODUCTOS) {
        cout << "Cantidad inválida.\n";
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "\n--- Registro del producto #" << (i + 1) << " ---";
        registrarProducto(productos[i]);
    }

    cout << "\n Mostrando todos los productos registrados:\n";
    for (int i = 0; i < n; i++) {
        mostrarProducto(productos[i]);
    }

    int indiceCaro = indiceProductoMasCaro(productos, n);
    cout << "\n Producto más caro en el inventario:\n";
    mostrarProducto(productos[indiceCaro]);

    int totalInventario = cantidadTotalInventario(productos, n);
    cout << "\n Cantidad total de productos en inventario: " << totalInventario << endl;

    return 0;
}