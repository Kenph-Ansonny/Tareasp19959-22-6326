#ifndef BITACORA_H
#define BITACORA_H
#include <iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include <chrono>
using namespace std;

class Bitacora
{
    public:
        string ingresoDatosBitacora(string nomUsuario, string accionRealizada);
        void imprimirdatosBitacora();


    protected:

    private:
        string nombreUsuario, numAccionRealizada, fechaAccion, horaAccion;
};

#endif // BITACORA_H
