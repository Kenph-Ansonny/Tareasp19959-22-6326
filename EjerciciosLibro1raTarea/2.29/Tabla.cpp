#include <iostream>

using namespace std;

// Tabla de Cuadrados y Cubos del 0 -> 10
//Autor: Kenph Luna - Grupo 2 - Programación 1
//Fecha: 05/02/2023

int main()
{
    cout << "----- Tabla de Cuadrados y Cubos -----" << endl;
    cout << "\n";
    cout << "Entero Cuadrado Cubo " << endl;


    for(int i = 0; i <= 10; i++)
    {

      cout << i << "\t " << (i*i) << "\t " << (i*i*i) << endl;

    }

return 0;
}
