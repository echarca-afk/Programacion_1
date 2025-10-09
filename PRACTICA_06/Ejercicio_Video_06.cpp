#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char cadena1[100];
    char cadena2[100];
    cout << "Ingresa una palabra" << endl;
    cin.getline(cadena1, 20, '\n');
    cout << "Ingresa una palabra" << endl;
    cin.getline(cadena2, 20, '\n');
    strupr(cadena1);
    strupr(cadena2);

    if (strcmp(cadena1,cadena2)==0)
    {
        cout << "Las palabras son iguales" << endl;
    }
    else
    {
        cout << "Las palabras no son iguales" << endl;
    
    }
    getch();
    return 0;
}
