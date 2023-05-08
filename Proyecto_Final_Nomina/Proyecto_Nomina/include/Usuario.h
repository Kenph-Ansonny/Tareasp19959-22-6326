#ifndef USUARIO_H
#define USUARIO_H

//Librerias
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

using namespace std;

class Usuario   //Clase Usuario para Login
{
	private:
    string nombreUsuario, contraUsuario;
	public:
		void menu();
		void insertar();
		void desplegar();
		void modificar();
		void buscar();
		void borrar();
		bool loginPersona();
        bool buscarLoginPersona(string user, string passw);
};
#endif // USUARIO_H
