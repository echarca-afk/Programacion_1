#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char cadena_1[100];
    char cadena_2[100];

    cout << "Ingresa la primera cadena: " << endl;
    cin.getline(cadena_1, 20, '\n');
    cout << "Ingresa la segunda cadena: " << endl;
    cin.getline(cadena_2, 20, '\n');

    if (strcmp(cadena_1,cadena_2)==0)
    {
        cout << "AMBAS CADENAS SON IGUALES " << endl;
    }
    else if (strcmp(cadena_1,cadena_2)<0)
    {
  
        cout << cadena_1 << " ES MAYOR ALFABETICAMENTE " << endl; 
    }
    else if (strcmp(cadena_2,cadena_1)<0)
    {
        cout << cadena_2 << " ES MAYOR ALFABETICAMENTE" << endl;
    }
    
    getch();
    return 0;
}