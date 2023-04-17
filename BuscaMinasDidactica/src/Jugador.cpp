#include "Jugador.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

using namespace std;

void Jugador::menuJugador()  //Creación del constructor MenuJugador
{
    int opcion;
	char x;
	do
    {
	system("cls"); //Limpia pantalla

    //Menú para el modificación e ingreso de Jugadores
	cout<<"\t\t\t---------------------------------"<<endl;
	cout<<"\t\t\t |   Menu para crear un Jugador  |"<<endl;
	cout<<"\t\t\t---------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso Jugador"<<endl;
	cout<<"\t\t\t 2. Despliegue Jugadores"<<endl;
	cout<<"\t\t\t 3. Modifica Jugador"<<endl;
	cout<<"\t\t\t 4. Busca Jugadores"<<endl;
	cout<<"\t\t\t 5. Borra Jugadores"<<endl;
	cout<<"\t\t\t 6. Salir del Menu"<<endl;

	cout<<"\t\t\t---------------------------------------"<<endl;

	cout<<"Ingresa una Opcion: ";
    cin>>opcion;

    //Elegir una opcion del Menu
    switch(opcion)
    {
    case 1:
        agregarJugador();
		break;
	case 2:
		mostrarJugadores();
		break;
	case 3:
		modificarJugadores();
		break;
	case 4:
		buscarJugador();
		break;
	case 5:
		borrarJugador();
		break;
	case 6:
		exit(0);
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		}
	getch();
    }while(opcion!= 6);

}

 void Jugador::agregarJugador()      //Constructor de la clase Jugador, agregarJugador
{
	system("cls");      //limpia pantalla
	fstream file;       //creacion variable file de la libreria fstream
	cout<<"\n-----------------------------------------------------------------------------------------------";
	cout<<"\n------------------------------------------------- Agregar Jugador ----------------------------"<<endl;
	//Ingreso de datos
	cout<<"\t\t\tIngresa ID del Jugador     : ";
	cin>>id;
	cout<<"\t\t\tIngresa Nombre del Jugador : ";
	cin>>nombre;
	cout<<"\t\t\tIngresa tu Apodo           : ";
	cin>>apodo;
	cout<<"\t\t\tIngresa la Contraseña      : ";
	cin>>contrasena;

	//Abre archivo y luego lo ve al final de la salida
	file.open("Jugador.txt", ios::app | ios::out);
	file<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< apodo <<std::left<<std::setw(15)<< contrasena << "\n";
	file.close();   //Cierra el archivo
}

 void Jugador::mostrarJugadores()        //Creación del constructor de la clase Jugador, mostrarJugadores
{
	system("cls");  //limpia pantalla
	fstream file;   //crea
	int total=0;
	cout<<"\n-------------------------Tabla de Detalles de Jugador -------------------------"<<endl;
	file.open("Jugador.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> id >> nombre >> apodo >> contrasena;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Id del Jugador: "<<id<<endl;
			cout<<"\t\t\t Nombre del Jugador: "<<nombre<<endl;
			cout<<"\t\t\t Apodo del jugador: "<<apodo<<endl;
			cout<<"\t\t\t Contraseña del Jugador: "<<contrasena<<endl;
			file >> id >> nombre >> apodo >> contrasena;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay jugadores...";
		}
	}
	file.close();
}

 void Jugador::modificarJugadores()  //Creacion de la clase Jugador, modificarJugadores
{
	system("cls");
	fstream file,file1;
	string jugador_id;
	int found=0;
	cout<<"\n------------------------- \"Modificacion Detalles Jugador\" -------------------------"<<endl;
	file.open("Jugador.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese ID del jugador que quiere modificar: ";
		cin>>jugador_id;
		file1.open("Record.txt",ios::app | ios::out);
		file >> id >> nombre >> apodo >> contrasena;
		while(!file.eof())
		{
			if(jugador_id!=id)
			{
			 file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< apodo <<std::left<<std::setw(15)<< contrasena << "\n";
			}
			else
			{
				cout<<"\t\t\tIngrese Id del Jugador: ";
				cin>>id;
				cout<<"\t\t\tIngrese Nombre del Jugador: ";
				cin>>nombre;
				cout<<"\t\t\tIngrese Apodo del Jugador: ";
				cin>>apodo;
				cout<<"\t\t\tIngrese la contraseña del Jugador: ";
				cin>>contrasena;
                file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< apodo <<std::left<<std::setw(15)<< contrasena << "\n";
				found++;
			}
			file >> id >> nombre >> apodo >> contrasena;

		}
		file1.close();
		file.close();
		remove("Jugador.txt");
		rename("Record.txt","Jugador.txt");
	}
}

 void Jugador::buscarJugador()       //Creacion de la clase Jugador, buscarJugadores
{
	system("cls");
	fstream file;
	int found=0;
	file.open("Jugador.txt",ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos del Jugador buscado------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion...";
	}
	else
	{
		string jugador_id;
		cout<<"\n-------------------------Datos del Jugador buscado------------------------"<<endl;
		cout<<"\nIngrese Id de la Persona que quiere buscar: ";
		cin>>jugador_id;
		file >> id >> nombre >> apodo >> contrasena;
		while(!file.eof())
		{
			if(jugador_id==id)
			{
				cout<<"\n\n\t\t\t ID Jugador: "<<id<<endl;
				cout<<"\t\t\t Nombre Jugador: "<<nombre<<endl;
				cout<<"\t\t\t Apodo Jugador: "<<apodo<<endl;
				cout<<"\t\t\t Contraseña Jugador: "<<contrasena<<endl;
				found++;
			}
			file >> id >> nombre >> apodo >> contrasena;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Jugador no encontrado...";
		}
		file.close();
	}
}

 void Jugador::borrarJugador()       //Creacion constructor de la clase Jugador, borrarJugador
{
	system("cls");
	fstream file,file1;
	string jugador_id;
	int found=0;
	cout<<"\n-------------------------Detalles del Jugador a Borrar-------------------------"<<endl;
	file.open("Jugador.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el Id del Jugador que quiere borrar: ";
		cin>>jugador_id;
		file1.open("Record.txt",ios::app | ios::out);
		file >> id >> nombre >> apodo >> contrasena;
		while(!file.eof())
		{
			if(jugador_id!= id)
			{
				file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< apodo <<std::left<<std::setw(15)<< contrasena << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado del Jugador exitoso";
			}
			file >> id >> nombre >> apodo >> contrasena;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Id del Jugador no encontrado...";
		}
		file1.close();
		file.close();
		remove("Jugador.txt");
		rename("Record.txt","Jugador.txt");
	}
}

bool Jugador::loginJugador()
{
    string usuario, contra;
    int contador=0;
    bool ingresa=false;
    do{
        system("cls");
        cout<<"--------------------------"<<endl;
        cout<<"AUTENTICACION DE USUARIOS "<<endl;
        cout<<"--------------------------"<<endl;
        cout<<"Codigo de usuario: ";
        getline(cin, usuario);
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

        if (buscarLoginJugador(usuario, contra)){
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
        cout<<"\n=== Bienvenido al Sistema ==="<<endl;
        cin.get();
    }
    return ingresa;
}

bool Jugador::buscarLoginJugador(string user, string passw)
{
    system ("cls");
    fstream file;
    int found=0;
    file.open("Jugador.txt", ios::in);
    if (!file)
    {
        cout<<"\n---------------------------Datos del Jugador buscado----------------------"<<endl;
        cout<<"\n\t\t\tNo hay informacion...";
    }
    else
    {
        file >> id >> nombre >> apodo >> contrasena;
        while(!file.eof())
        {
            if(user==nombre)
            {
                if (passw == contrasena)
                {
                    found++;
                }
            }
            file >> id >> nombre >> apodo >> contrasena;
        }
        if(found==0)
        {
            return false;
        }
        else
            return true;

        file.close();}
}

