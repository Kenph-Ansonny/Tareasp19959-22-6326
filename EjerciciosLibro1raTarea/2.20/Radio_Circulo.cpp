#include <iostream>
#include <math.h>

using namespace std;

//Autor: Kenph Luna - Grupo 2 - Programacion 1
//Fecha 07/02/2023

int main()
{
    int radio;
    float valorPi = 3.14159 ;

    cout << "\n\t\tCalculadora de Radio - Diametro y Area de un Circulo" << endl;
    cout << "\t\t-----------------------------------------------------" << endl;
    cout << "\n\t\tIngrese el radio del circulo: " ;
    cin >> radio;

    cout << "\n\tResultados" << endl;
    cout << "\t------------" << endl;

    cout << "\n\t El Diametro de la Circunferencia es: " << radio*2 << endl;
    cout << "\n\t El Area del Circulo es: " << valorPi*(pow(radio,2)) << endl;

    return 0;
}
