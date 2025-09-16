// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Fecha creación: 16/09/2025
// Número de ejercicio: 9

#include <iostream>

using namespace std;

void salarioBase(double &s, int antiguedad);
double comision (double &salario, double precio);
int main()
{
    int n;
    cout << "Ingrese la cantidad de vendedoras" << endl;
    cin >> n;
    
    double precio;
    cout << "Ingrese el precio de los productos" << endl;
    cin >> precio;
    
    // El sueldo básico inicial es el mismo para todas.
    double sBase = 2750.0;
    
    // Bucle para procesar cada vendedora de forma individual.
    for(int i = 1; i <= n; i++){
        cout << "------------------------------------------\n";
        cout << "Datos para la vendedora " << i << ":" << endl;
        
        cout << "Ingrese los anios de antiguedad: ";
        int antiguedad;
        cin >> antiguedad;
        
        // 1. Calcula el sueldo ajustado por antigüedad.
        salarioBase(sBase, antiguedad);
        cout << "Su salario base por antiguedad es: " << sBase << " Bs." << endl;
        
        // 2. Calcula la comisión y la suma al sueldo ya ajustado.
        double c = comision(sBase, precio);
        
        cout << "Su comision por ventas es de: " << c << " Bs." << endl;
        cout << "El SALARIO TOTAL de la vendedora " << i << " es de: " << sBase << " Bs." << endl;
        
        // IMPORTANTE: Reinicia el sueldo base para la siguiente vendedora.
        // Esto asegura que el cálculo para la siguiente persona comience desde 2750.0.
        sBase = 2750.0;
    }
}
// Calcula el salario base ajustado por antigüedad.
// Recibe el salario 's' por referencia (&) para modificarlo directamente.
void salarioBase(double &s, int antiguedad){
    // Aplica un aumento del 10% por cada año de antigüedad.
    for(int i = 0; i < antiguedad; i++){
        double aumento = s * 0.10;
        s = s + aumento;
    }
}

// Calcula la comisión y la añade al salario.
// También modifica el salario directamente al recibirlo por referencia.
double comision (double &salario, double precio){
    // Se asume que cada vendedora vende 10 productos.
    double ganancia = precio * 10.0;
    double c = ganancia * 0.10; // La comisión es el 10% de lo vendido.
    salario = salario + c;      // Suma la comisión al salario.
    return c;                   // Devuelve solo el monto de la comisión.
}
