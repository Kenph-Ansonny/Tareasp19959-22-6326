#include "UsuarioPlanilla.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

using namespace std;


void UsuarioPlanilla::usuarioRegister()
{
    system("cls");
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n------------------------------------------------- Registro de Usuarios ---------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Nombre de Usuario  : ";
	cin>> nombreUsuario;
	cout<<"\n\t\t\tIngresa tu Contrasena       : ";
	cin>> contraUsuario;
	file.open("UsuarioPlanilla.txt", ios::app | ios::out);
	file <<std::left<<std::setw(15)<< nombreUsuario <<std::left<<std::setw(15)<< contraUsuario << "\n";
	file.close();
}

bool UsuarioPlanilla::usuarioLogin()
{
    string usuario, contra;
    int contador=0;
    bool ingresa=false;
    do{
        system("cls");
        cout<<"--------------------------"<<endl;
        cout<<"AUTENTICACION DE USUARIOS "<<endl;
        cout<<"--------------------------"<<endl;
        cout<<"Nombre de usuario: ";
        getline(cin,usuario);
        cout<<"\ncontrasena: ";
        char caracter;
        caracter= getch();
        contra="";
        while (caracter !=13)
        {
            if(caracter !=8)
            {
                contra.push_back(caracter);
                cout<<"*";
            } else
            {
                if (contra.length() > 0)
                {
                    cout<<"\b \b";
                    contra = contra.substr(0, contra.length()-1);
                }
            }
            caracter = getch();
        }

        if (buscarLoginUsuario(usuario, contra)){   //Pide los parametro de la funcion BuscarLoginJugador para iniciar sesión
            ingresa=true;
        } else {
            cout<<"\nEl usuario y/o contrasena son incorrectos"<<endl;
            cin.get();
            contador++;
        }
    } while (ingresa==false && contador<3);
    if (ingresa==false){
        cout<<"\nLo siento, no puede ingresar al sistema, sus contrasenas son invalidas o agoto intentos"<<endl;
        cin.get();
    } else {
        cout<<"\n=== Bienvenidos al Sistema ==="<<endl;
        cin.get();
    }
    return ingresa;
}

bool UsuarioPlanilla::buscarLoginUsuario(string user, string passw)
{
    system ("cls");
    fstream file;
    int found=0;
    file.open("UsuarioPlanilla.txt", ios::in);
    if (!file)
    {
        cout<<"\n---------------------------Datos del Usuario buscado----------------------"<<endl;
        cout<<"\n\t\t\tNo hay informacion...";
    }
    else
    {
        file >> nombreUsuario >> contraUsuario;
        while(!file.eof())
        {
            if(user==nombreUsuario)
            {
                if (passw == contraUsuario)
                {
                    found++;
                }
            }
            file >> nombreUsuario >> contraUsuario;
        }
        if(found==0)
        {
            return false;
        }
        else
            return true;

        file.close();}
}
