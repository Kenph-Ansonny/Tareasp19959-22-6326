#ifndef USUARIO_H
#define USUARIO_H

//Librerias
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include<string>

#include "Menus.h"

class Usuario  //Clase Usuario para Login
{
    private:
    string idUsuario, nombreUsuario, contraUsuario;

	public:
		void registroUsuario();
		bool loginUsuario();
        bool buscarLoginUsuario(string loginUser, string passw);
};

#endif // USUARIO_H
