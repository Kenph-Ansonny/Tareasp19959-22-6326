//Autor: Kenph Luna
//Fecha: 15-02-2023
//Codigo de C escrito en C++

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>

using namespace std;

//Constantes
const int NUMERO_ALUMNOS = 10;
const int NUMERO_MATERIAS = 4;
const int MAX_CALIFICACION = 100;
const int MIN_CALIFICACION = 0;
const int MAXIMA_LONGITUD_CADENA = 100;

//Funcion con Parametros
int busquedaAleatorios(int minimo, int maximo);

//Prototipos
void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS + 1]);
void imprimirMatrizLinea();
void imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS + 1], char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA]);
int main()
{
    srand(getpid());
    float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS + 1];
    char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA] = {"Jorge","Kenph","Mario","Luis","Alberto","Luisa","Roberta","Asdf", "sdfsfa", "adf"};
    llenarMatriz(matriz);
    imprimirMatriz(matriz, alumnos);
}

int busquedaAleatoriosP1(int minimo, int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS + 1])
{
     float suma = 0;
    int y, x;
    for (y = 0; y < NUMERO_ALUMNOS; y++)
    {

        for (x = 0; x < NUMERO_MATERIAS; x++)
        {
            int calificacion = busquedaAleatoriosP1(MIN_CALIFICACION, MAX_CALIFICACION);
            suma += (float)calificacion/5;
            matriz[y][0] = calificacion;
        }
        float promedio = suma / NUMERO_MATERIAS;
        matriz[y][NUMERO_MATERIAS] = promedio;
    }
    for (y = 0; y < NUMERO_ALUMNOS; y++)
    {
        for (x = 0 ;x < NUMERO_MATERIAS; x++)
        {
            int calificacion = busquedaAleatoriosP1(MIN_CALIFICACION, MAX_CALIFICACION);
            suma += (float)calificacion/5;
            matriz[y][1] = calificacion;
        }
        float promedio = suma / NUMERO_MATERIAS;
        matriz[y][NUMERO_MATERIAS] = promedio;
    }
    for (y = 0; y < NUMERO_ALUMNOS; y++)
    {
        for (x = 0; x < NUMERO_MATERIAS; x++)
        {
            int calificacion = busquedaAleatoriosP1(MIN_CALIFICACION, MAX_CALIFICACION);
            suma = (matriz[1][1]+ matriz[1][2]+ matriz[1][3]+matriz[1][4]+matriz[1][5])/5;
            matriz[y][2] = calificacion;
        }
        float promedio = suma / NUMERO_MATERIAS;
        matriz[y][NUMERO_MATERIAS] = promedio;
    }
    for (y = 0; y < NUMERO_ALUMNOS; y++)
    {
        for (x = 0; x < NUMERO_MATERIAS; x++)
        {
            int calificacion = busquedaAleatoriosP1(MIN_CALIFICACION, MAX_CALIFICACION);
            suma += (float)calificacion/5;
            matriz[y][3] = calificacion;
        }
        float promedio = suma / NUMERO_MATERIAS;
        matriz[y][NUMERO_MATERIAS] = promedio;
    }
}

void imprimirMatrizLinea()
{
    int x;
    cout << "*--------";
    for (x = 0; x < NUMERO_MATERIAS + 1; x++)
    {
        cout << "*---------";
    }
    cout << "*\n";
}
void imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS + 1], char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA])
{
    int y, x;
    float promedioMayor = matriz[0][NUMERO_MATERIAS];
    float promedioMenor = matriz[0][NUMERO_MATERIAS];
    char alumnoPromedioMayor[MAXIMA_LONGITUD_CADENA];
    char alumnoPromedioMenor[MAXIMA_LONGITUD_CADENA];
    memcpy(alumnoPromedioMayor, alumnos[0], MAXIMA_LONGITUD_CADENA);
    memcpy(alumnoPromedioMenor, alumnos[0], MAXIMA_LONGITUD_CADENA);

    imprimirMatrizLinea();
    cout << setw(9) << "Alumno";
    for (x = 0; x < NUMERO_MATERIAS; x++)
    {
        cout << setw(9) << "Nota" << x + 1;
    }
    cout << setw(8) << "Prom" << endl;
    imprimirMatrizLinea();
    for (y = 0; y < NUMERO_ALUMNOS; y++)
    {
        cout << "|" << setw(8) << alumnos[y] << "|";
        float suma = 0;
        for (x = 0; x < NUMERO_MATERIAS; x++)
        {
            int calificacion = matriz[y][x];
            cout << setw(9) << calificacion << "|";
        }
        float promedio = matriz[y][NUMERO_MATERIAS];
        if (promedio > promedioMayor)
        {
            promedioMayor = promedio;
            memcpy(alumnoPromedioMayor, alumnos[y], MAXIMA_LONGITUD_CADENA);
        }
        if (promedio < promedioMenor)
        {
            promedioMenor = promedio;
            memcpy(alumnoPromedioMenor, alumnos[y], MAXIMA_LONGITUD_CADENA);
        }
        cout << setw(8) << fixed <<setprecision(2) << promedio << "|" << endl;
        imprimirMatrizLinea();
    }
    cout << "Promedio Mayor: " << setw(5) << alumnoPromedioMayor << " Nota: " << setw(5) << promedioMayor << endl;
    cout << "Promedio Menor: " << setw(5) << alumnoPromedioMenor << " Nota: " << setw(5) << promedioMenor << endl;
}
