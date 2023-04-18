#include "Menus.h"
#include <string>
#include <conio.h>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>

using namespace std;

void menuPrincipal()
{
    vector<string> usuarios;
    vector<string> claves;

    //usuarios
    usuarios.push_back("jhonatan");
    usuarios.push_back("kenph");
    usuarios.push_back("geo");
    usuarios.push_back("mafer");

    //claves
    claves.push_back("5002jh");
    claves.push_back("456");
    claves.push_back("789");
    claves.push_back("abc");

    string usuario, password;

    int contador = 0;
    bool ingresa = false;

    do
    {
        system("cls");
        cout<<"\n\t--------------------------"<<endl;
        cout<<"\n\tAUTENTICACION DE USUARIOS "<<endl;
        cout<<"\n\t--------------------------"<<endl;
        cout << "\n\tUsuario: ";
        getline(cin, usuario);

        char caracter;

        cout << "\tContrasena: ";
        caracter = getch();

        password = "";

        while (caracter != 13)
        {

            if (caracter != 8)
            {
                password.push_back(caracter);
                cout << "*";
            }
            else
            {
                if (password.length() > 0)
                {
                    cout << "\b \b";
                    password = password.substr(0, password.length() - 1);
                }
            }

            caracter = getch();
        }

        for (int i = 0; i < usuarios.size(); i++)
        {
            if (usuarios[i] == usuario && claves[i] == password)
            {
                ingresa = true;
                break;
            }
        }

        if (!ingresa)
        {
            cout << "\n\n\tEl usuario y/o password son incorrectos" << endl;
            cin.get();
            contador++;
        }

    } while (ingresa == false && contador < 3);

    if (ingresa == false)
    {
        cout << "\n\tUsted no pudo ingresar al sistema. ADIOS" << endl;
    }
    else
    {
        cout << "\n\n\tBienvenido al sistema" << endl;
        system("pause");

int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\tPrograma Empresarial De Nominas" << endl;
        cout << "\t\t\t-------------------------------------" << endl;
        cout << "\n\t1. Información Laboral" << endl;
        cout << "\t2. Empleados" << endl;
        cout << "\t3. Informe Financiero" << endl;
        cout << "\t4. Procesos Financieros" << endl;
        cout << "\t0. SALIR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
             menuDatos();
            break;

        case 2:
             menuSecciones ();
            break;

        case 3:
            system("pause>nul");
            break;

        case 4:
            menuDepartamentos();
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
}
}

void menuDatos()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\tTIPOS DE DATOS" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout << "\n\t1. Clientes" << endl;
        cout << "\t2. Vendedores" << endl;
        cout << "\t3. Proveedores" << endl;
        cout << "\t4. Conceptos Varios" << endl;
        cout << "\t0. Regresar" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            system("pause>nul");
            break;

        case 2:
           system("pause>nul");
            break;

        case 3:
            system("pause>nul");
            break;

        case 4:
           system("pause>nul");
            break;

        case 5:
           system("pause>nul");
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
}

void menuSecciones()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\t Empleados" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout << "\n\t1. Departamentos" << endl;
        cout << "\t2. Carrera" << endl;
        cout << "\t3. Puestos" << endl;
        cout << "\t2. Salarios" << endl;
        cout << "\t0. REGRESAR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            system("pause>nul");
            break;

        case 2:
             system("pause>nul");
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
}

void menuDepartamentos()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\tPROCESOS FINANCIEROS" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout << "\n\t1. Balance" << endl;
        cout << "\t2. Estado de Resultados" << endl;
        cout << "\t0. REGRESAR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            system("pause>nul");
            break;

        case 2:
            system("pause>nul");
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
}

void depArea()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\t AREA DE VENTAS" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout << "\n\t1. Planilla General" << endl;
        cout << "\t2. Gerente de ventas" << endl;
        cout << "\t3. Asistente de ventas" << endl;
        cout << "\t4. Supervisor de ventas" << endl;
        cout << "\t5. Vendedor" << endl;
        cout << "\t0. REGRESAR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
             system("pause>nul");
            break;

        case 2:
             system("pause>nul");
            break;

        case 3:
             system("pause>nul");
            break;

        case 4:
             system("pause>nul");
            break;

        case 5:
            system("pause>nul");
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
}


void depProduccion()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\t AREA DE PRODUCCION" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout << "\n\t1. Planilla General" << endl;
        cout << "\t2. Gerente de produccion" << endl;
        cout << "\t3. Asistente de produccion" << endl;
        cout << "\t4. Supervisor de produccion" << endl;
        cout << "\t5. Operador" << endl;
        cout << "\t0. REGRESAR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
             system("pause>nul");
            break;

        case 2:
             system("pause>nul");
            break;

        case 3:
             system("pause>nul");
            break;

        case 4:
             system("pause>nul");
            break;

        case 5:
            system("pause>nul");
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
}

void depFinanciero()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\t AREA FINANCIERA" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout << "\n\t1. Planilla General" << endl;
        cout << "\t2. Gerente financiero" << endl;
        cout << "\t3. Asistente financiero" << endl;
        cout << "\t0. REGRESAR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
             system("pause>nul");
            break;

        case 2:
             system("pause>nul");
            break;

        case 3:
             system("pause>nul");
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
}


void depLogistica()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\t AREA DE LOGISTICA" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout << "\n\t1. Planilla General" << endl;
        cout << "\t2. Gerente de logistica" << endl;
        cout << "\t3. Asistente de logistica" << endl;
        cout << "\t4. Supervisor de logistica" << endl;
        cout << "\t5. Bodeguero" << endl;
        cout << "\t0. REGRESAR" << endl;
        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
             system("pause>nul");
            break;

        case 2:
             system("pause>nul");
            break;

        case 3:
             system("pause>nul");
            break;

        case 4:
             system("pause>nul");
            break;

        case 5:
            system("pause>nul");
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
}


