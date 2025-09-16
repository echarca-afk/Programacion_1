// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Fecha creación: 16/09/2025
// Número de ejercicio: 7

#include <iostream>

using namespace std;


void intercambiar (int &n, int &m);
int mcd (int n, int m);
int mcm (int n, int m);
int main()
    {
    int n, m;
    cout << "Ingrese 2 numeros: " << endl;
    cin >> n >> m;
    
    // El Algoritmo de Euclides requiere que el primer número sea el mayor.
    if(n < m){
        intercambiar(n, m); // Se intercambian si no lo es.
    }
    
    // Se llaman a las funciones para obtener los resultados.
    int gcd = mcd(n, m);
    int multiplo = mcm(n, m);
    
    cout << "El mcd es: " << gcd << endl;
    cout << "El mcm es: " << multiplo << endl;
}
// Función para intercambiar los valores de dos variables.
void intercambiar (int &n, int &m){
    int c = n;
    n = m;
    m = c;
    }
// Calcula el Máximo Común Divisor (MCD) usando el Algoritmo de Euclides.
int mcd (int n, int m){
    int r = 1; // 'r' es el residuo.

    // El bucle se repite hasta que el residuo de la división sea cero.
    while (r != 0){
        r = n % m; // Calcula el residuo.
        n = m;     // El divisor pasa a ser el nuevo dividendo.
        
        // Si el residuo no es cero, se convierte en el nuevo divisor.
        if(r != 0){
            m = r;
        }
    }
    
    // El último divisor no nulo es el MCD.
    return m;
}

// Calcula el Mínimo Común Múltiplo (MCM) buscando múltiplos del primer número.
int mcm (int n, int m){
    int i = 1;
    int a;
    
    while(true){ // Bucle infinito que se detendrá con una condición interna.
        a = n * i; // 'a' toma el valor de los múltiplos de 'n' (n*1, n*2, ...).
        
        // Si 'a' es divisible exactamente por 'm', hemos encontrado el MCM.
        if (a % m == 0){
            return a; // Se devuelve el valor y termina la función.
        }
        i++; // Si no, se prueba con el siguiente múltiplo.
    }
}
