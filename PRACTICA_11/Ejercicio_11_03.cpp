// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Fecha creación: 18-11-2025
// Número de ejercicio: 3
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Pizza {
    int codigo;
    char nombre[30];
    char tipo[15];    // TRADICIONAL o ESPECIAL
    char tamano[20];  // XS, MEDIANA, GRANDE, FAMILIAR, INTERMINABLE
    float precio;
};
void menu();
void adicionarPizza();
bool existePizza(int codigo);
void listarPizzas();
void modificarPrecio();
void eliminarPizza();
void adicionarVenta();
int cantidadVendida(int codigo, char tamano[]);
int main() {
    menu();
    return 0;
}

void menu() {
    int opcion;
    do {
        cout << "\nMENU PIZZERIA ELIS\n";
        cout << "1. Adicionar Pizza\n";
        cout << "2. Listado de Pizzas\n";
        cout << "3. Modificar precio de Pizza\n";
        cout << "4. Eliminar una Pizza\n";
        cout << "5. Adicionar Venta de Pizzas\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1: adicionarPizza(); break;
            case 2: listarPizzas(); break;
            case 3: modificarPrecio(); break;
            case 4: eliminarPizza(); break;
            case 5: adicionarVenta(); break;
        }
    } while (opcion != 0);
}
void adicionarPizza() {
    Pizza p;
    cout << "Codigo: ";
    cin >> p.codigo;
    cin.ignore();

    if (existePizza(p.codigo)) {
        cout << "Ya existe esa pizza.\n";
        return;
    }

    cout << "Nombre: ";
    cin.getline(p.nombre, 30);
    cout << "Tipo (TRADICIONAL o ESPECIAL): ";
    cin.getline(p.tipo, 15);
    cout << "Tamano (XS, MEDIANA, GRANDE, FAMILIAR, INTERMINABLE): ";
    cin.getline(p.tamano, 20);
    cout << "Precio base: ";
    cin >> p.precio;

    if (strcmp(p.tipo, "ESPECIAL") == 0) {
        p.precio = p.precio * 1.10;
    }

    ofstream archivo("PRODUCTO.BIN", ios::binary | ios::app);
    archivo.write((char*)&p, sizeof(p));
    archivo.close();
    cout << "Pizza registrada.\n";
}
bool existePizza(int codigo) {
    Pizza p;
    ifstream archivo("PRODUCTO.BIN", ios::binary);
    while (archivo.read((char*)&p, sizeof(p))) {
        if (p.codigo == codigo) {
            archivo.close();
            return true;
        }
    }
    archivo.close();
    return false;
}
int cantidadVendida(int codigo, char tamano[]) {
    ifstream ventas("VENTAS.TXT");
    char linea[100];
    int total = 0;
    while (ventas.getline(linea, 100)) {
        int cod, cant;
        char tam[20];
        int cont = 0;
        char* token = strtok(linea, ";");
        while (token != NULL) {
            cont++;
            if (cont == 2) cod = atoi(token);
            if (cont == 3) strcpy(tam, token);
            if (cont == 4) cant = atoi(token);
            token = strtok(NULL, ";");
        }
        if (cod == codigo && strcmp(tam, tamano) == 0) {
            total += cant;
        }
    }
    ventas.close();
    return total;
}

void listarPizzas() {
    Pizza p;
    ifstream archivo("PRODUCTO.BIN", ios::binary);
    cout << "\nLISTADO DE PIZZAS\n";
    cout << "CODIGO NOMBRE TIPO TAMANO PRECIO CANTIDAD TOTAL\n";
    while (archivo.read((char*)&p, sizeof(p))) {
        int vendida = cantidadVendida(p.codigo, p.tamano);
        float total = vendida * p.precio;
        cout << p.codigo << " " << p.nombre << " " << p.tipo << " " << p.tamano << " ";
        cout << p.precio << " " << vendida << " " << total << "\n";
    }
    archivo.close();
}
void modificarPrecio() {
    int codigo;
    cout << "Codigo a modificar: ";
    cin >> codigo;
    Pizza p;
    fstream archivo("PRODUCTO.BIN", ios::binary | ios::in | ios::out);
    bool encontrado = false;

    while (archivo.read((char*)&p, sizeof(p))) {
        if (p.codigo == codigo) {
            cout << "Nuevo precio base: ";
            cin >> p.precio;
            if (strcmp(p.tipo, "ESPECIAL") == 0) {
                p.precio = p.precio * 1.10;
            }
            archivo.seekp(-sizeof(p), ios::cur);
            archivo.write((char*)&p, sizeof(p));
            encontrado = true;
            break;
        }
    }
    archivo.close();
    if (!encontrado) cout << "No se encontro la pizza.\n";
}
void eliminarPizza() {
    int codigo;
    cout << "Codigo a eliminar: ";
    cin >> codigo;
    Pizza p;
    ifstream archivo("PRODUCTO.BIN", ios::binary);
    ofstream temp("TEMP.BIN", ios::binary);

    while (archivo.read((char*)&p, sizeof(p))) {
        if (p.codigo != codigo) {
            temp.write((char*)&p, sizeof(p));
        }
    }
    archivo.close();
    temp.close();
    remove("PRODUCTO.BIN");
    rename("TEMP.BIN", "PRODUCTO.BIN");
    cout << "Pizza eliminada si existia.\n";
}
void adicionarVenta() {
    ofstream ventas("VENTAS.TXT", ios::app);
    char ci[20], tamano[20];
    int codigo, cantidad;

    cout << "Carnet cliente: ";
    cin.ignore();
    cin.getline(ci, 20);
    cout << "Codigo pizza: ";
    cin >> codigo;
    cin.ignore();

    if (!existePizza(codigo)) {
        cout << "Pizza no existe.\n";
        return;
    }

    cout << "Tamano: ";
    cin.getline(tamano, 20);
    cout << "Cantidad vendida: ";
    cin >> cantidad;

    ventas << ci << ";" << codigo << ";" << tamano << ";" << cantidad << "\n";
    ventas.close();
    cout << "Venta registrada.\n";
}