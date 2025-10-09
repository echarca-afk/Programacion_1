// Materia: Programación I, Paralelo 4
// Autor: Univ. Charca Canaviri Emiliano
// Carnet: 13740843
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 07/10/2025
// Número de ejercicio: 1
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> separar (string s){
    int n = s.length();
    string p = "";
    vector<string> palabras;
    for(int i = 0; i < n; i++){
        if(s[i] != ' '){
            p = p + s[i];
        } else if (p.length() > 0 && s[i] == ' '){
            palabras.push_back(p);
            p = "";
        }
    }
    
    if(p.length() > 0){
        palabras.push_back(p);
    }
    
    return palabras;
}

void mostrar (vector<string> palabras){
    int n = palabras.size();
    
    for(int i = n - 1; i >= 0; i--){
        cout << palabras[i] << " ";
    }
    cout << endl;
}

int main()
{
    string texto;
    cout << "Ingrese un texto: " << endl;
    getline(cin, texto);
    
    vector<string> palabras = separar(texto);
    mostrar(palabras);

    return 0;
}