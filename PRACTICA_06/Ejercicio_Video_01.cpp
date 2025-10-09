#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    string cadena;
    cout << "Ingrese una cadena de caracteres: " << endl;
    getline(cin, cadena);
    if (cadena.length() >10)
    {
        cout << cadena << endl;
    }
    cout << "La longitud de la cadena es: " << cadena.length() << endl;
    getch();
    return 0;
}