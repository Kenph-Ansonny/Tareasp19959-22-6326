#ifndef PERSONA_H
#define PERSONA_H
//Librerias
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

using namespace std;

class persona   //Clase Persona para Login
{
	private:
    string id,sucursal,name,adress,phone,code,contrasenas;
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


#endif // ARCHIVO_H
