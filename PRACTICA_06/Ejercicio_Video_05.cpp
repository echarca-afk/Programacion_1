#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char cadena[100];
    cout << "Ingresa una palabra" << endl;
    cin.getline(cadena, 20, '\n');
    if (cadena == strrev(cadena))
    {
        cout << "La palabra ingresada es un palindromo" << endl;
    }
    else
    {
        cout << "La palabra ingresada no es un palindromo" << endl;
    
    }
    getch();
    return 0;
}
