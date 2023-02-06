#include <iostream>

using namespace std;

//Equivalente de un entero a Caracter
//Autor: Kenph Luna - Grupo 2 - Programacion 1
//Fecha: 05/02/2023

int main()
{
    char varchar;
   cout << "Este Programa Calcula el valor entero \'ASCII\' de los valores Caracteres" << endl;
   cout << "Ejemplo: " << 'A' << endl;

   cout << "Valor entero de \'A\' = " << static_cast < int > ('A') << endl; //transforma caracter ingresado a valor entero (int)

   cout << "Ingrese caracter: " << endl;
   cin >> varchar;

   cout << "Valor Entero de " << varchar << " = " << static_cast < int > (varchar) << endl;

    return 0;
}
