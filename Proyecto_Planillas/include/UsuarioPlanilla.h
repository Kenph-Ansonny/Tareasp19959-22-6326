#ifndef USUARIOPLANILLA_H
#define USUARIOPLANILLA_H
#include <iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include "Bitacora.h"


using namespace std;

class UsuarioPlanilla
{
    public:
        void usuarioRegister();
        bool usuarioLogin();
        bool buscarLoginUsuario(string user, string passw);

    protected:

    private:
        string nombreUsuario, contraUsuario;
};

#endif // USUARIOPLANILLA_H
