//Determinar si el numero es impar o par
//Fecha: 7/02/2023 Autor: María Fernanda Cobón Juárez
//Grupo 2
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<< "Ingrese un numero: ";
    cin>> n;
    if (n % 2 == 0){
        cout<< "El numero es par";
    }
    else{
        cout<< "El numero es impar";
    }
    return 0;
}
