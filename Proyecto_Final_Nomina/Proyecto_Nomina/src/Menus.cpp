#include "Menus.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

#include "Usuario.h"

using namespace std;

void menuLogin()
{
    bool accesoUsuario;
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

        Usuario usuarioRegistrado;
        accesoUsuario = usuarioRegistrado.loginUsuario();
    if (accesoUsuario)
        {
    int opciones;
    bool repetir = true;
    do
    {
	menuDeAcceso
    }while (repetir);}
        break;

    case 2:
        Usuario registrarNuevoUsuario;
        registrarNuevoUsuario.registroUsuario();
        break;

    case 3:
        exit(0);
        break;

    default:
        cout << "Opcion invalida... Intente otra vez...";
        }

    } while (optEscoger != 3);
}

void menuDeAcceso()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\tPrograma Empresarial De Nominas" << endl;
        cout << "\t\t\t-------------------------------------" << endl;
        cout << "\n\t1. Catalogos " << endl;
        cout << "\t2. Productos en Bodega " << endl;
        cout << "\t3. Operaciones " << endl;
        cout << "\t4. Archivos " << endl;
        cout << "\t0. SALIR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
             system("pause");
            break;

        case 2:
             system("pause");
            break;

        case 3:
            system("pause");
            break;

        case 4:
            system("pause");
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
}

