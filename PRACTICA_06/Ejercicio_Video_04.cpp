#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char cadena[] = "Hola que tal ";
    char nombre[100];
    char nueva[100];
    cout << "Ingresa su nombre " << endl;
    cin.getline(nombre, 20, '\n');
    strcpy(nueva,cadena);
    strcat(nueva,nombre);
    cout << nueva << endl;
    getch();
    return 0;
}
