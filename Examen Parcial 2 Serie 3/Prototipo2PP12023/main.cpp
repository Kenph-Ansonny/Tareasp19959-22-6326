#include <iostream> //Librerias y Encabezados
#include <conio.h>
#include "persona.h"
#include "MenuPrincipal.h"
using namespace std;

main()
{

//Login Usuario
    bool accesoUsuario;

    persona usuarioRegistrado;
    accesoUsuario = usuarioRegistrado.loginPersona();
    if (accesoUsuario)
        {
    int opciones;
    bool repetir = true;
    do
    {
	menuPrincipal();
    }while (repetir);}

    getch();
	return 0;
}
