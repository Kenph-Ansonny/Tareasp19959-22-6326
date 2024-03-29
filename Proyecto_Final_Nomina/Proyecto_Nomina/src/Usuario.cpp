#include "Usuario.h"
using namespace std;

void usuario::registroUsuario()
{
	system("cls");
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n------------------------------------------------- Registro de Usuarios ---------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa una ID de Usuario     : ";
	cin>>idUsuario;
	cout<<"\t\t\tIngresa tu Nombre de Usuario  : ";
	cin>> nombreUsuario;
	cout<<"\t\t\tIngresa tu Contrasena         : ";
	cin>> contraUsuario;
	file.open("Usuario.txt", ios::app | ios::out);
	file <<std::left<<std::setw(15)<< idUsuario <<std::left<<std::setw(15)<< nombreUsuario <<std::left<<std::setw(15)<< contraUsuario << "\n";
	file.close();
}

bool usuario::loginUsuario() //Login de Usuario
{
    string user, contra;
    int contador=0;
    bool ingresa=false;
    do{
        system("cls");
        cout<<"--------------------------"<<endl;
        cout<<"AUTENTICACION DE USUARIOS "<<endl;
        cout<<"--------------------------"<<endl;
        cout<<"Nombre de usuario: ";
        getline(cin, user);
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

        if (buscarLoginUsuario(user, contra)){   //Pide los parametro de la funcion BuscarLoginJugador para iniciar sesi�n
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

bool Usuario::buscarLoginUsuario(string loginUser, string passw) //Funcion que busca al jugador dentro de los archivos secuenciales. Enviale los parametro a LoginJugador
{
    system ("cls");
    fstream file;
    int found=0;
    file.open("Usuario.txt", ios::in);
    if (!file)
    {
        cout<<"\n---------------------------Datos del Usuario buscado----------------------"<<endl;
        cout<<"\n\t\t\tNo hay informacion...";
    }
    else
    {
        file >> idUsuario >> nombreUsuario >> contraUsuario;
        while(!file.eof())
        {
            if(loginUser==nombreUsuario)
            {
                if (passw == contraUsuario)
                {
                    found++;
                }
            }
            file >> idUsuario >> nombreUsuario >> contraUsuario;
        }
        if(found==0)
        {
            return false;
        }
        else
            return true;

        file.close();}
}
