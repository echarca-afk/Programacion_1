// Materia: Programación I, Paralelo 4
// Autor: Univ. Emiliano Charca Canaviri
// Fecha creación: 18-11-2025
// Número de ejercicio: 4
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Estudiante {
    int carnet;
    char nombres[30];
    char apellidos[30];
    char materia[30];
    int paralelo;
};
void menu();
void adicionarEstudiante();
bool existeEstudiante(int carnet);
void listarHabilitados();
void eliminarEstudiante();
void adicionarNotas();
float calcularNotaHabilitacion(int carnet, const char materia[], int paralelo, bool &habilitado);
int main() {
    menu();
    return 0;
}

void menu() {
    int opcion;
    do {
        cout << "\nMENU NOTAS UCB\n";
        cout << "1. Adicionar Estudiante\n";
        cout << "2. Listado de Estudiantes Habilitados\n";
        cout << "3. Eliminar una Estudiante\n";
        cout << "4. Adicionar notas habilitacion\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1: adicionarEstudiante(); break;
            case 2: listarHabilitados(); break;
            case 3: eliminarEstudiante(); break;
            case 4: adicionarNotas(); break;
        }
    } while (opcion != 0);
}
void adicionarEstudiante() {
    Estudiante e;
    cout << "Carnet: ";
    cin >> e.carnet;
    cin.ignore();

    if (existeEstudiante(e.carnet)) {
        cout << "Ya existe ese estudiante.\n";
        return;
    }

    cout << "Nombres: ";
    cin.getline(e.nombres, 30);
    cout << "Apellidos: ";
    cin.getline(e.apellidos, 30);
    cout << "Materia: ";
    cin.getline(e.materia, 30);
    cout << "Paralelo: ";
    cin >> e.paralelo;

    ofstream archivo("ESTUDIANTES.BIN", ios::binary | ios::app);
    archivo.write((char*)&e, sizeof(e));
    archivo.close();
    cout << "Estudiante registrado.\n";
}
bool existeEstudiante(int carnet) {
    Estudiante e;
    ifstream archivo("ESTUDIANTES.BIN", ios::binary);
    while (archivo.read((char*)&e, sizeof(e))) {
        if (e.carnet == carnet) {
            archivo.close();
            return true;
        }
    }
    archivo.close();
    return false;
}
float calcularNotaHabilitacion(int carnet, const char materia[], int paralelo, bool &habilitado) {
    ifstream notas("NOTAS.TXT");
    char linea[100];
    float suma = 0;
    int cantidad = 0;
    habilitado = true;

    while (notas.getline(linea, 100)) {
        int ci, par;
        char mat[30];
        float nota;
        int cont = 0;
        char* token = strtok(linea, ";");
        while (token != NULL) {
            cont++;
            if (cont == 1) ci = atoi(token);
            if (cont == 2) strcpy(mat, token);
            if (cont == 3) par = atoi(token);
            if (cont == 4) nota = atof(token);
            token = strtok(NULL, ";");
        }
        if (ci == carnet && strcmp(mat, materia) == 0 && par == paralelo) {
            suma += nota;
            cantidad++;
            if (nota < 60) habilitado = false;
        }
    }
    notas.close();
    if (cantidad == 0) return 0;
    return suma / cantidad;
}

void listarHabilitados() {
    Estudiante e;
    ifstream archivo("ESTUDIANTES.BIN", ios::binary);
    float sumaGeneral = 0;
    int totalEstudiantes = 0;

    cout << "\nCARNET NOMBRES APELLIDOS MATERIA PARALELO NOTA ESTADO\n";
    while (archivo.read((char*)&e, sizeof(e))) {
        bool habilitado;
        float notaFinal = calcularNotaHabilitacion(e.carnet, e.materia, e.paralelo, habilitado);
        cout << e.carnet << " " << e.nombres << " " << e.apellidos << " " << e.materia << " ";
        cout << e.paralelo << " " << notaFinal << " ";
        if (notaFinal == 0) {
            cout << "SIN NOTAS\n";
        } else if (habilitado) {
            cout << "HABILITADO\n";
        } else {
            cout << "NO HABILITADO, TIENE NOTA MENOR A 60\n";
        }
        if (notaFinal > 0) {
            sumaGeneral += notaFinal;
            totalEstudiantes++;
        }
    }
    archivo.close();

    if (totalEstudiantes > 0) {
        float promedio = sumaGeneral / totalEstudiantes;
        cout << "\nPromedio general de habilitacion: " << promedio << "\n";
    } else {
        cout << "\nNo hay estudiantes con notas registradas.\n";
    }
}
void eliminarEstudiante() {
    int carnet;
    cout << "Carnet a eliminar: ";
    cin >> carnet;
    Estudiante e;
    ifstream archivo("ESTUDIANTES.BIN", ios::binary);
    ofstream temp("TEMP.BIN", ios::binary);

    while (archivo.read((char*)&e, sizeof(e))) {
        if (e.carnet != carnet) {
            temp.write((char*)&e, sizeof(e));
        }
    }
    archivo.close();
    temp.close();
    remove("ESTUDIANTES.BIN");
    rename("TEMP.BIN", "ESTUDIANTES.BIN");
    cout << "Estudiante eliminado si existia.\n";
}
void adicionarNotas() {
    ofstream notas("NOTAS.TXT", ios::app);
    int carnet, paralelo;
    char materia[30];
    float nota;

    cout << "Carnet: ";
    cin >> carnet;
    cin.ignore();
    cout << "Materia: ";
    cin.getline(materia, 30);
    cout << "Paralelo: ";
    cin >> paralelo;
    cout << "Nota: ";
    cin >> nota;

    notas << carnet << ";" << materia << ";" << paralelo << ";" << nota << "\n";
    notas.close();
    cout << "Nota registrada.\n";
}
