#ifndef USUARIOPLANILLA_H
#define USUARIOPLANILLA_H
#include <iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

#include "Menus.h"

using namespace std;

class UsuarioPlanilla
{

	public:
		void iniciarSesion();
		string menuUsuario(string nombreUsuario);
		void registroUsuario();
		void imprimirUsuario();
		void borrarUsuario();
		void modificarUsuario();
		void buscarUsuario();
		void dibujarPortada(string nombreArchivo);

		private:
		string nombre, contrasena;
};

#endif // USUARIOPLANILLA_H
