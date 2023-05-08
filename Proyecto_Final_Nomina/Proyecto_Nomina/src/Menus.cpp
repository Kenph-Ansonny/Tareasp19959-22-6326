#include "Menus.h"

using namespace std;
void menuLogin()
{
    int optEscoger;
    do
    {
    cout << "\t\t\t--------------------------\n";
    cout << "\t\t\t| Bienvenido al Sistema |";
    cout << "\n\t\t\t--------------------------";


    cout << "\n\n\n\t\t\t1. Iniciar Sesión" << endl;
    cout << "\t\t\t2. Registrar Nuevo Usuario" << endl;
    cout << "\t\t\t3. Salir del Sistema" << endl;

    cout << "\n\n\t\t\t---------------------------------------";
    cout << "\n\t\t\t| Opciones a escoger: [1] - [2] - [3] |";
    cout << "\n\t\t\t---------------------------------------";

    cout << "\n\n\t\t\tIngrese la opcion que desea escoger: ";
    cin >> optEscoger;

    switch (optEscoger)
    {
    case 1:
        system("pause");
        break;
    case 2:
        system ("pause");
        break;
    case 3:
        exit(0);
        break;

    default:
        cout << "Opcion invalida... Intente otra vez...";
        }

    } while (optEscoger != 3);
}
