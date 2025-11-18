// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Fecha creación: 18-11-2025
// Número de ejercicio: 2
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Producto {
    int codigo;
    char nombre[30];
    int cantidadInicial;
    float precioUnitario;
};

void menu();
void adicionarProducto();
bool existeProducto(int codigo);
void listarProductos();
void buscarProducto();
void modificarProducto();
void adicionarVentas();
int cantidadVendida(int codigo);

int main() {
    menu();
    return 0;
}
void menu() {
    int opcion;
    do {
        cout << "\nMENU NOTAS UCB\n";
        cout << "1. Adicionar Producto\n";
        cout << "2. Listado de Productos\n";
        cout << "3. Buscar un producto por codigo\n";
        cout << "4. Modificar un producto\n";
        cout << "5. Adicionar ventas del producto\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1: adicionarProducto(); break;
            case 2: listarProductos(); break;
            case 3: buscarProducto(); break;
            case 4: modificarProducto(); break;
            case 5: adicionarVentas(); break;
        }
    } while (opcion != 0);
}
void adicionarProducto() {
    Producto p;
    cout << "Codigo: ";
    cin >> p.codigo;
    cin.ignore();

    if (existeProducto(p.codigo)) {
        cout << "Ya existe ese producto.\n";
        return;
    }

    cout << "Nombre: ";
    cin.getline(p.nombre, 30);
    cout << "Cantidad inicial: ";
    cin >> p.cantidadInicial;
    cout << "Precio unitario: ";
    cin >> p.precioUnitario;

    ofstream archivo("PRODUCTOS.BIN", ios::binary | ios::app);
    archivo.write((char*)&p, sizeof(p));
    archivo.close();
    cout << "Producto guardado.\n";
}
bool existeProducto(int codigo) {
    Producto p;
    ifstream archivo("PRODUCTOS.BIN", ios::binary);
    while (archivo.read((char*)&p, sizeof(p))) {
        if (p.codigo == codigo) {
            archivo.close();
            return true;
        }
    }
    archivo.close();
    return false;
}
int cantidadVendida(int codigo) {
    ifstream ventas("VENTAS.txt");
    char linea[100];
    int total = 0;
    while (ventas.getline(linea, 100)) {
        int cod, cant;
        int pos = 0, cont = 0;
        char* token = strtok(linea, ";");
        while (token != NULL) {
            cont++;
            if (cont == 3) cod = atoi(token);
            if (cont == 4) cant = atoi(token);
            token = strtok(NULL, ";");
        }
        if (cod == codigo) total += cant;
    }
    ventas.close();
    return total;
}
void listarProductos() {
    Producto p;
    ifstream archivo("PRODUCTOS.BIN", ios::binary);
    cout << "\nCODIGO NOMBRE CANTIDAD PRECIO VENDIDO TOTAL\n";
    while (archivo.read((char*)&p, sizeof(p))) {
        int vendida = cantidadVendida(p.codigo);
        float total = vendida * p.precioUnitario;
        cout << p.codigo << " " << p.nombre << " " << p.cantidadInicial << " ";
        cout << p.precioUnitario << " " << vendida << " " << total << "\n";
    }
    archivo.close();
}
void buscarProducto() {
    int codigo;
    cout << "Codigo a buscar: ";
    cin >> codigo;
    Producto p;
    bool encontrado = false;
    ifstream archivo("PRODUCTOS.BIN", ios::binary);
    while (archivo.read((char*)&p, sizeof(p))) {
        if (p.codigo == codigo) {
            cout << "Nombre: " << p.nombre << "\n";
            cout << "Cantidad: " << p.cantidadInicial << "\n";
            cout << "Precio: " << p.precioUnitario << "\n";
            encontrado = true;
            break;
        }
    }
    archivo.close();
    if (!encontrado) cout << "No encontrado.\n";
}
void modificarProducto() {
    int codigo;
    cout << "Codigo a modificar: ";
    cin >> codigo;
    Producto p;
    fstream archivo("PRODUCTOS.BIN", ios::binary | ios::in | ios::out);
    bool encontrado = false;

    while (archivo.read((char*)&p, sizeof(p))) {
        if (p.codigo == codigo) {
            cout << "Nuevo nombre: ";
            cin.ignore();
            cin.getline(p.nombre, 30);
            cout << "Nueva cantidad: ";
            cin >> p.cantidadInicial;
            cout << "Nuevo precio: ";
            cin >> p.precioUnitario;

            archivo.seekp(-sizeof(p), ios::cur);
            archivo.write((char*)&p, sizeof(p));
            encontrado = true;
            break;
        }
    }
    archivo.close();
    if (!encontrado) cout << "No se encontro el producto.\n";
}
void adicionarVentas() {
    ofstream ventas("VENTAS.txt", ios::app);
    char ci[20], nombre[50];
    int codigo, cantidad;

    cout << "CI cliente: ";
    cin.ignore();
    cin.getline(ci, 20);
    cout << "Nombre cliente: ";
    cin.getline(nombre, 50);
    cout << "Codigo producto: ";
    cin >> codigo;

    if (!existeProducto(codigo)) {
        cout << "Producto no existe.\n";
        return;
    }

    cout << "Cantidad vendida: ";
    cin >> cantidad;

    ventas << ci << "; " << nombre << "; " << codigo << "; " << cantidad << "\n";
    ventas.close();
    cout << "Venta registrada.\n";
}