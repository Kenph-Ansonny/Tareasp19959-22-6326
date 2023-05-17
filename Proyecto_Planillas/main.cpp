#include <iostream>
#include <cstdlib>
#include <conio.h>
#include "Menus.h"
#include "UsuarioPlanilla.h"

using namespace std;

int main()
{
    system("cls");
    int optEscoger;
    bool repetir = true;
    do
    {
    cout << "\t\t\t--------------------------\n";
    cout << "\t\t\t| Bienvenido al Sistema |";
    cout << "\n\t\t\t--------------------------";


    cout << "\n\n\n\t\t\t1. Iniciar Sesion" << endl;
    cout << "\t\t\t2. Registrar Nuevo Usuario" << endl;
    cout << "\t\t\t3. Salir del Sistema" << endl;
    cout << "\n\n\t\t\t---------------------------------------";
    cout << "\n\t\t\t| Opciones a escoger: [1] - [2] - [3] ";
    cout << "\n\t\t\t---------------------------------------";

    cout << "\n\n\t\t\tIngrese la opcion que desea escoger: ";
    cin >> optEscoger;

    switch(optEscoger)
    {
    case 1:{
    bool accesoUsuario;

    UsuarioPlanilla usuarioRegistrado;
    accesoUsuario = usuarioRegistrado.usuarioLogin();
    if (accesoUsuario)
        {
    int opciones;
    bool repetir = true;
    do
    {
	Menus systemMenu;
    systemMenu.menuInicial();
    }while (repetir);}
        break;
    }
    case 2:{
        system("cls");
        UsuarioPlanilla newUser;
        newUser.usuarioRegister();
        break;
    }
    case 3:{
             exit(0);
        break;
    }
    default:
        cout << "Opcion invalida... Intente otra vez...";

    }

    }while(optEscoger!=3);


    return 0;
}


