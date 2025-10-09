#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char cadena1[100];

    cout << "INGRESE SU NOMBRE" << endl;
    cin.getline(cadena1, 20, '\n');

    if (cadena1[0]=='a' || cadena1[0]=='A')
    {
        cout << strlwr(cadena1) << endl;
    }
    else
    {
        cout << "El nombre no comienza con la letra A" << endl;
    
    }
    getch();
    return 0;
}
