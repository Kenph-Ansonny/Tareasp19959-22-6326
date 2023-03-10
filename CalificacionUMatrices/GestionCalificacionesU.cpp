//Programa de gestion de notas universitarias por faculta
//Autor: Grupo 2

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>

using namespace std;

//Constantes Generales
const int NUMERO_ALUMNOS = 10;
const int NUMERO_EXAMENES = 4;
const int MIN_NOTA = 0;
const int MAXIMA_LONGITUD_CADENA = 300;

//ConstanteActividades
const int MAX_ACTIVIDADES = 20;

//ConstanteParcial1
const int MAX_NOTAP1 = 20;

//ConstanteParcial2
const int MAX_NOTAP2 = 25;

//ConstanteParcial 3
const int MAX_NOTAP3 = 35;

//Busqueda Aleatoria
int busquedaAleatoriosP1(int minimo, int maximo);
int busquedaAleatoriosP2(int minimo, int maximo);
int busquedaAleatoriosP3(int minimo, int maximo);
int busquedaAleatoriosAc(int minimo, int maximo);

//PrototiposMatricesFacultades

//void llenarMatrizArquitectura();
//void llenarMatrizAdministracion();

//ImprimirMatricesFacultades
void imprimirMatrizIngenieria();
//void imprimirMatrizArquitectura();
//void imprimirMatrizAdministracion();


void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_EXAMENES+1]);
void imprimirMatrizLinea();
void imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_EXAMENES+1], char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA]);

const int MIN_CALIFICACION=0;
const int MAX_CALIFICACION = 100;

 // Genera un valor entre 0 y 19

int main()
{
    srand(getpid());
     float matriz[NUMERO_ALUMNOS][NUMERO_EXAMENES+1];
    char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA] = {"Jorge","Alex", "Monica", "Jhonatan", "Melissa", "Allan", "Julio", "Jesicca", "Joseph", "Natalie"};
    llenarMatriz(matriz);
    imprimirMatriz(matriz, alumnos);

}

int busquedaAleatorios(int minimo, int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

int busquedaAleatoriosP1(int minimo, int maximo)
{
    return minimo + (rand()%( MAX_NOTAP1 - MIN_NOTA));
}

int busquedaAleatoriosP2(int minimo, int maximo)
{
    return minimo + (rand()%( MAX_NOTAP2 - MIN_NOTA));
}

int busquedaAleatoriosP3(int minimo, int maximo)
{
    return minimo + (rand()%( MAX_NOTAP3 - MIN_NOTA+1)+1);
}

int busquedaAleatoriosAc(int minimo, int maximo)
{
    return minimo + (rand()%( MAX_ACTIVIDADES - MIN_NOTA));
}


void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_EXAMENES+1])
{
    float suma = 0;
    int y, x;
    for (y = 0; y < NUMERO_ALUMNOS; y++)
    {

        for (x = 0; x < NUMERO_EXAMENES+1; x++)
        {
            int calificacion = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION);
            suma += (float)calificacion;
            matriz[y][0] = calificacion;
        }
        float promedio = suma / NUMERO_EXAMENES;
        matriz[y][NUMERO_EXAMENES]= promedio;
    }
    for (y = 0; y < NUMERO_ALUMNOS; y++)
    {

        {
            int calificacion = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION);
            suma += (float)calificacion;
            matriz[y][1] = calificacion;
        }

    }
    for (y = 0; y < NUMERO_ALUMNOS; y++)
    {

        for (x = 0; x < NUMERO_EXAMENES+1; x++)
        {
            int calificacion = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION);
            suma += (float)calificacion;
            matriz[y][2] = calificacion;
        }

    }
    for (y = 0; y < NUMERO_ALUMNOS; y++)
    {

        for (x = 0; x < NUMERO_EXAMENES+1; x++)
        {
            int calificacion = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION);
            suma += (float)calificacion;
            matriz[y][3] = calificacion;
        }
        float promedio = suma / NUMERO_EXAMENES;
        matriz[y][NUMERO_EXAMENES]= promedio;
    }
}

void imprimirMatrizLinea()
{
    int x;
    cout << "*--------";
    for (x = 0; x < NUMERO_EXAMENES+1; x++)
    {
        cout << "*---------";
    }
    cout << "*\n";
}

void imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_EXAMENES + 1], char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA])
{
    int y, x;
    float promedioMayor = matriz[0][NUMERO_EXAMENES];
    float promedioMenor = matriz[0][NUMERO_EXAMENES];
    char alumnoPromedioMayor[MAXIMA_LONGITUD_CADENA];
    char alumnoPromedioMenor[MAXIMA_LONGITUD_CADENA];
    memcpy(alumnoPromedioMayor, alumnos[0], MAXIMA_LONGITUD_CADENA);
    memcpy(alumnoPromedioMenor, alumnos[0], MAXIMA_LONGITUD_CADENA);

    imprimirMatrizLinea();
    cout << setw(9) << "Alumno";
    for (x = 0; x < NUMERO_EXAMENES; x++)
    {
        cout << setw(9) << "P" << x + 1;
    }
    cout << setw(8) << "Prom" << endl;
    imprimirMatrizLinea();
    for (y = 0; y < NUMERO_EXAMENES; y++)
    {
        cout << "|" << setw(8) << alumnos[y] << "|";
        float suma = 0;
        for (x = 0; x < NUMERO_EXAMENES; x++)
        {
            int calificacion = matriz[y][x];
            cout << setw(9) << calificacion << "|";
        }
        float promedio = matriz[y][NUMERO_EXAMENES];
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
