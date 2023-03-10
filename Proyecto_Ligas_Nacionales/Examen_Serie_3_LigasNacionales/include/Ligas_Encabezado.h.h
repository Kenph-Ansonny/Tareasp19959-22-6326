#ifndef LIGAS_ENCABEZADO_H_H
#define LIGAS_ENCABEZADO_H_H

//Librerias
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

using namespace std;

//COnstante Longitud de Cadena
const int LONGITUD_MAXIMA = 100;

//Constantes NumerosAleatorios
const int NOTA_MAXIMA = 50;
const int NOTA_MINIMA = 0;

//Constantes Matrices
const int NUMERO_EQUIPOS =5;
const int NUMERO_AÑO = 4;

//prototipos de Liga
void ligaNacional()

//prototipos de matrices
void matrizFutbol();
void matrizBaloncesto();
void matrizNatacion();

//Llenar matrices
void llenarMatrizFutbol(float matrizFutbol[NUMERO_EQUIPOS][NUMERO_AÑO+1]);
void llenarMatrizBaloncesto(float matrizBaloncesto[NUMERO_EQUIPOS][NUMERO_AÑO+1]);
void llenarMatrizNatacion(float matrizNatacion[NUMERO_EQUIPOS][NUMERO_AÑO+1]);

//Mostrar Matrices
void mostrarMatrizFutbol(float matrizFutbol[NUMERO_EQUIPOS][NUMERO_AÑO+1], char equipo[NUMERO_EQUIPOS][LONGITUD_MAXIMA]);
void mostrarMatrizBaloncesto(float matrizBaloncesto[NUMERO_EQUIPOS][NUMERO_AÑO+1], char equipo[NUMERO_EQUIPOS][LONGITUD_MAXIMA]);
void mostrarMatrizNatacion(float matrizNatacion[NUMERO_EQUIPOS][NUMERO_AÑO+1], char equipo[NUMERO_EQUIPOS][LONGITUD_MAXIMA]);
//Matriz Linea
void imprimirMatrizLinea()

//Numeros aleatorios
int numeroAleatorios(int minimo, int maximo);

#endif // LIGAS_ENCABEZADO_H_H
