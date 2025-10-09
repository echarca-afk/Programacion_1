#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    string cadena;
    string otra_cadena;
    cout << "Ingrese una cadena de caracteres: " << endl;
    getline(cin, cadena);
    otra_cadena = cadena;
    
    cout << "La copia de la cadena original es: " << otra_cadena << endl;
    getch();
    return 0;
}