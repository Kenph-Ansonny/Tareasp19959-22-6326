#include <iostream>

using namespace std;

int valOption;
float val1, val2;

//Aplicación de calculadora sencilla - Programación 1 -
//Autor: Kenph Ansonny Luna Martínez
//Carnet: 9959-22-6326
//Fecha: 01-03-2023

int main()
{
   cout << "---- \' Calculadora Basica \' ----" << endl;
   cout << "Ingrese el primer valor" << endl;
   cin >> val1;
   cout << "Ingrese el segundo valor" << endl;
   cin >> val2;

   cout << "Elija la operacion que desea realizar" << endl;
   cout << " \'1\' - Suma " << endl;
   cout << " \'2\' - Resta " << endl;
   cout << " \'3\' - Multiplicacion" << endl;
   cout << " \'4\' - Division" << endl;
   cin >> valOption;

   switch(valOption)
   {
       case 1: cout << "La suma de \'" << val1 << " + " << val2 << "\' = " << val1+val2 << endl;
       break;
       case 2: cout << "La resta de \'" << val1 << " - " << val2 << "\' = " << val1-val2 << endl;
       break;
       case 3: cout << "La multiplicacion de \'" << val1 << " * " << val2 << "\' = " << val1*val2 << endl;
       break;
       case 4: cout << "La division de \'" << val1 << " / " << val2 << "\' = " << val1/val2 << endl;
       break;

   }
return 0;

}

