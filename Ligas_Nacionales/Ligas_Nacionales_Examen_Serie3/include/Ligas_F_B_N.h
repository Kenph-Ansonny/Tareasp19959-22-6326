#ifndef LIGAS_F_B_N_H
#define LIGAS_F_B_N_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;


const int NUMERO_EQUIPOS = 5;
const int CAMPEONATO_FECHA = 4;
const int MAX_CALIFICACION = 50;
const int MIN_CALIFICACION = 0;
const int MAXIMA_LONGITUD_CADENA =100;

//Void While
void repetirMatrices();

//Mostrar Matrices
void matrices();

//Numero Aleatorios
int busquedaAleatorios(int minimo, int maximo);

//Imprimir Matriz
void imprimirMatrizLinea();

//Futbol
void llenarligaFutbol(float ligaFutbol[NUMERO_EQUIPOS][CAMPEONATO_FECHA + 1]);
void imprimirligaFutbol(float ligaFutbol[NUMERO_EQUIPOS][CAMPEONATO_FECHA + 1], char equipoFutbol[NUMERO_EQUIPOS][MAXIMA_LONGITUD_CADENA]);

//Baloncesto
void llenarLigaBal(float ligaBaloncesto[NUMERO_EQUIPOS][CAMPEONATO_FECHA + 1]);
void imprimirligaBaloncesto(float ligaBaloncesto[NUMERO_EQUIPOS][CAMPEONATO_FECHA + 1], char equipoBaloncesto[NUMERO_EQUIPOS][MAXIMA_LONGITUD_CADENA]);


//Natacion
void llenarLigaNata(float LigaNatacion[NUMERO_EQUIPOS][CAMPEONATO_FECHA + 1]);
void imprimirLigaNata(float ligaNatacion[NUMERO_EQUIPOS][CAMPEONATO_FECHA + 1], char equipoNatacion[NUMERO_EQUIPOS][MAXIMA_LONGITUD_CADENA]);


#endif // LIGAS_F_B_N_H
