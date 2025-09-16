// Materia: Programación I, Paralelo 4
// Autor: Emiliano Charca Canaviri
// Fecha creación: 16/09/2025
// Número de ejercicio: 8

#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

double descuento (double &total);
double IVA (double total);
int main()
{
    // Inicializa el generador de números aleatorios para que no repita la secuencia.
    srand(time(NULL));
    
    int n;
    // Genera un único precio aleatorio entre 21 y 50 para todos los productos.
    int precio = rand() % (50 - 20 + 1) + 20;
    
    cout << "Ingrese la cantidad de productos" << endl;
    cin >> n;
    
    cout << "Cada producto cuesta: " << precio << " Bs." << endl;
    
    // Calcula el total inicial sin descuentos.
    double total = n * precio;
    double des = 0.0; // 'des' guardará el monto del descuento, se inicializa en 0.
    
    cout << "El total de la venta (sin descuento) es: " << total << " Bs." << endl;
    
    // Comprueba si el total califica para el descuento.
    if(total >= 2500.0){
        cout << "El monto excede 2500 Bs, se aplica descuento del 5%." << endl;
        des = descuento(total);
    }
    
    cout << "Monto del descuento: " << des << " Bs." << endl;
    cout << "El total final a pagar por el cliente es: " << total << " Bs." << endl;
    
    // El IVA se calcula sobre el total final (con el descuento ya aplicado, si hubo).
    double imp = IVA(total);
    cout << "El impuesto a pagar por IVA (13%) es de: " << imp << " Bs." << endl;
}

// Aplica un descuento del 5% al total si es necesario.
// El total se modifica directamente porque se pasa por referencia (&).
double descuento (double &total){
    double d = total * 0.05; // Calcula el monto del descuento.
    total = total - d;       // Actualiza el total restando el descuento.
    return d;                // Devuelve solo el valor del descuento aplicado.
}

// Calcula el 13% de IVA sobre un monto total.
double IVA (double total){
    double impuesto = total * 0.13;
    return impuesto;
}






