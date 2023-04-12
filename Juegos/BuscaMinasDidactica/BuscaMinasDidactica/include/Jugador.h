//Librerias y Encabezados
#ifndef JUGADOR_H
#define JUGADOR_H
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include<string>
using namespace std;

class Jugador       //Clase jugador
{
    public: //constructores para la clase
        menuJugador();
        agregarJugador();
        mostrarJugadores();
        modificarJugadores();
        buscarJugador();
        borrarJugador();
        //string getapodo();



    protected:

    private:    //Atributos privados y protegidos
        string id;
        string nombre;
        string apodo;
        string contrasena;
        //int partidasJugadas;
};

#endif // JUGADOR_H
