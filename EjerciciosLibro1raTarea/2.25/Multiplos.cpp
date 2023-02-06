#include <iostream>

using namespace std;

int main()
{

    int numero1, numero2, multiplo;

    cout << "\n\t\t Ingresar Numeros para saber si son multiplos" << endl;
    cout << "\t\t------------------------------------------------" << endl;
    cout << "\n\t Ingrese el Primer Numero: " ;
    cin >> numero1;
    cout << "\n\t Ingrese el Segundo Numero: " ;
    cin >> numero2;

    multiplo = numero1 % numero2;

    if (multiplo == 0)
    {
        cout << "\n\t" << numero1 << " es Multiplo de " << numero2 << endl;
    } else{
        cout << "\n\t" <<numero1 << " NO es Multiplo de " << numero2 << endl;
    }

    return 0;
}
