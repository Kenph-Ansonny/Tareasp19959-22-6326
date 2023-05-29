#ifndef MENUS_H
#define MENUS_H
#include <iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include "EmpleadosPlanilla.h"
#include "Departamento.h"
#include "Puestos.h"
#include "Bitacora.h"
#include "UsuarioPlanilla.h"

using namespace std;
class Menus
{
    public:
        string menuInicial(string nombreUsuario);
        void menuCatalogos();
        void subMenuEmpleados();
        void DepartamentosPlanilla();

    protected:

    private:
};

#endif // MENUS_H
