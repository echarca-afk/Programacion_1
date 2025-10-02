// Materia: Programación I, Paralelo 4
// Autor: Charca Canaviri Emiliano
// Carnet: 13740843
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 30/09/2025
// Número de ejercicio: 5
#include <iostream>
#include <vector>

using namespace std;

vector<int> ingresar(int n){
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cout << "Ingrese el valor " << i + 1 << ":\n";
        cin >> v[i];
    }
    return v;
}

vector<int> combinar(vector<int> v1, vector<int> v2){
    vector<int> v3;
    for(int i : v1){
        v3.push_back(i);
    }
    
    for(int i : v2){
        v3.push_back(i);
    }
    
    return v3;
}

int main()
{
    int n;
    cout << "ingrese el tamanio de los vectores: " << endl;
    cin >> n;
    vector<int> v1 = ingresar(n);
    vector<int> v2 = ingresar(n);
    
    vector<int> v3 = combinar(v1, v2);
    
    for(int i : v3){
        cout << i << "\t";
    }
    return 0;
}