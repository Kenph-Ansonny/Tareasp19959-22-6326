//Encabezado Tablero
#ifndef TABLERO_H
#define TABLERO_H
//Librerias
#include <iostream>
#include <vector>
//Se llama el encabezado y todo el contenido de Celda.h
#include "Celda.h"
using namespace std;


class Tablero       //Se define la clase tablero para el proyecto.
{
    public:         //A continuación se encuentran los elementos publicos de la clase
        Tablero();
        Tablero(int alturaTablero, int anchoTablero, bool modoDesarrollador);

        //Funciones de clase Int
        int getAlturaTablero();
        int setAlturaTablero(int alturaTablero);
        int getAnchoTablero();
        int setAnchoTablero(int anchoTablero);

        //Funciones de clase booleana
        bool getModoDesarrollador();
        bool setModoDesarrollador(bool modoDesarrollador);

        //Prototipos de funciones
        void imprimirSeparadorEncabezado();
        void imprimirSeparadorFilas();
        void imprimirEncabezado();
        void imprimir();

        //Mas funciones booleanas
        bool colocarMina(int x, int y);
        bool descubrirMina(int x, int y);

        //Otra funcion tipo Int
        int contarCeldasSinMinasYSinDescubrir();

        //Clase protegida
    protected:

    //Atributos o elementos privados
    private:
        int alturaTablero, anchoTablero;                //La cantidad de columnas y filas del tablero
        bool modoDesarrollador;                         //Booleano donde se decidira si se juega con el modo desarrollador
        vector<vector<Celda> > contenidoTablero;        //Se utiliza la libreria vector para crear un vector celda donde se almacenara el contenido del tablero

        string getRepresentacionMina(int x, int y);         //Funcion string
        int minasCercanas(int fila, int columna);          //Funcion int
};

#endif // TABLERO_H
