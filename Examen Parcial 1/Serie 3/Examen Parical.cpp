//Nombre = Kenph Ansonny Luna Martínez
//Carné = 9599-22-6326

//Programa que calcula las calificaciones de los campeonatos nacionales.

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

using namespace std;


//Longitud maxima
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


int main()


//Aqui se ejecuta el menú
int main()
{
    int opcion;
    bool repetir = false
    do {
    ligaNacional();


    cout << "Si Desea continuar ingrese 1, en caso contrario ingrese 2.  ";
    cin >> opcion

    if (opcion == 1)
    {
        repetir = true;
    } else {
    repetir = false;
    }
    } while (repetir = true)



    getch();
    return 0;
}

//Generacion de Numeros Aleatorios
int numeroAleatorios(int minimo, int maximo)
{
      return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}



//Aqui se encuentran las matrices
void ligaNacional()
{
    cout << "\n\n\t\tLiga de Futbol\n\n";
    cout << "-------------------------------------------------------------" << endl;
    matrizFutbol();
    cout << "\n\n\t\tLiga de Baloncesto\n\n";
    cout << "-------------------------------------------------------------" << endl;
    matrizBaloncesto();
    cout << "\n\n\t\tLiga de Natacion\n\n";
    cout << "-------------------------------------------------------------" << endl;
    matrizNatacion();

}

//Matrices
void matrizFutbol()
{
    srand(getpid());
    float matriz[NUMERO_EQUIPOS][NUMERO_AÑO];
    char equipo[NUMERO_EQUIPOS][LONGITUD_MAXIMA] = {"Equipo1", "Equipo2", "Equipo3", "Equipo4","Equipo5"};
    llenarMatrizFutbol(matrizFutbol)
    mostrarMatriz(matrizFutbol, equipo)
}

void matrizBaloncesto()
{
    srand(getpid());
    float matriz[NUMERO_EQUIPOS][NUMERO_AÑO];
    char equipo[NUMERO_EQUIPOS][LONGITUD_MAXIMA] = {"Equipo1", "Equipo2", "Equipo3", "Equipo4","Equipo 5"};
    llenarMatrizBaloncesto(matrizBaloncesto)
    llenarMatrizBaloncesto(matrizBaloncesto, equipo)
}

void matrizNatacion()
{srand(getpid());
    float matriz[NUMERO_EQUIPOS][NUMERO_AÑO];
    char equipo[NUMERO_EQUIPOS][LONGITUD_MAXIMA] = {"Equipo1", "Equipo2", "Equipo3", "Equipo4","Equipo5"};
    llenarMatrizNatacion(matrizNatacion)
    llenarMatrizNatacion(matrizNatacion, equipo)

}


//Llenar matrices
llenarMatrizFutbol()
{
    int promedio;
  for (y = 0; y < NUMERO_EQUIPOS; y++)
    {

        for (x = 0; x < NUMERO_AÑO; x++)
        {
            int calificacion = numeroAleatorios(NOTA_MINIMA, NOTA_MAXIMA);
            suma += (float)calificacion/5;
            matrizFutbol[y][x] = calificacion;
        }
        float promedio = suma / NUMERO_EQUIPOS;
        matriz[y][NUMERO_EQUIPOS] = promedio;

        }

void llenarMatrizBaloncesto()
{
    int promedio;
  for (y = 0; y < NUMERO_EQUIPOS; y++)
    {

        for (x = 0; x < NUMERO_AÑO; x++)
        {
            int calificacion = numeroAleatorios(NOTA_MINIMA, NOTA_MAXIMA);
            suma += (float)calificacion/5;
            matrizBaloncesto[y][x] = calificacion;
        }
        float promedio = suma / NUMERO_EQUIPOS;
        matriz[y][NUMERO_EQUIPOS] = promedio;
}

void llenarMatrizNatacion()
{
    int promedio;
  for (y = 0; y < NUMERO_EQUIPOS; y++)
    {

        for (x = 0; x < NUMERO_AÑO; x++)
        {
            int calificacion = numeroAleatorios(NOTA_MINIMA, NOTA_MAXIMA);
            suma += (float)calificacion/5;
            matriz[y][0] = calificacion;
        }
        float promedio = suma / NUMERO_EQUIPOS;
        matriz[y][NUMERO_EQUIPOS] = promedio;
}
}

//imprimir Matriz linea
void imprimirMatrizLinea()
{
    int x;
    cout << "*--------";
    for (x = 0; x < NUMERO_EQUIPOS + 1; x++)
    {
        cout << "*---------";
    }
    cout << "*\n";
}
//Imprimier matrices
void mostrarMatrizFutbol(float matrizFutbol[NUMERO_EQUIPOS][NUMERO_AÑO+1], char equipo[NUMERO_EQUIPOS][LONGITUD_MAXIMA]);
{
    int y, x;
    float promedioMayor = matrizFutbol[0][NUMERO_AÑO];
    float promedioMenor = matrizFutbol[0][NUMERO_AÑO];
    char equipoPromedioMayor[LONGITUD_MAXIMA];
    char equipoPromedioMenor[LONGITUD_MAXIMA];
    memcpy(equipoPromedioMayor, equipo[0], LONGITUD_MAXIMA);
    memcpy(equipoPromedioMenor, equipo[0], LONGITUD_MAXIMA);

    imprimirMatrizLinea();
    cout << setw(9) << "Equipo";
    for (x = 0; x < NUMERO_AÑO; x++)
    {
        cout << setw(9) << "201" << x;
    }
    cout << setw(8) << "Prom" << endl;
    imprimirMatrizLinea();
    for (y = 0; y < NUMERO_EQUIPOS; y++)
    {
        cout << "|" << setw(8) << alumnos[y] << "|";
        float suma = 0;
        for (x = 0; x < NUMERO_AÑO; x++)
        {
            int calificacion = matriz[y][x];
            cout << setw(9) << calificacion << "|";
        }
        float promedio = matrizFutbol[y][NUMERO_EQUIPOS];
        if (promedio > promedioMayor)
        {
            promedioMayor = promedio;
            memcpy(equipoPromedioMayor, equipo[y], LONGITUD_MAXIMA);
        }
        if (promedio < promedioMenor)
        {
            promedioMenor = promedio;
            memcpy(equipoPromedioMenor, equipo[y], LONGITUD_MAXIMA);
        }
        cout << setw(8) << fixed <<setprecision(2) << promedio << "|" << endl;
        imprimirMatrizLinea();
    }
}

void mostrarMatrizBaloncesto(float matrizBaloncesto[NUMERO_EQUIPOS][NUMERO_AÑO+1], char equipo[NUMERO_EQUIPOS][LONGITUD_MAXIMA]);
{
    int y, x;
    float promedioMayor = matrizBaloncesto[0][NUMERO_AÑO];
    float promedioMenor = matrizBaloncesto[0][NUMERO_AÑO];
    char equipoPromedioMayor[LONGITUD_MAXIMA];
    char equipoPromedioMenor[LONGITUD_MAXIMA];
    memcpy(equipoPromedioMayor, equipo[0], LONGITUD_MAXIMA);
    memcpy(equipoPromedioMenor, equipo[0], LONGITUD_MAXIMA);

    imprimirMatrizLinea();
    cout << setw(9) << "Equipo";
    for (x = 0; x < NUMERO_AÑO; x++)
    {
        cout << setw(9) << "201" << x;
    }
    cout << setw(8) << "Prom" << endl;
    imprimirMatrizLinea();
    for (y = 0; y < NUMERO_EQUIPOS; y++)
    {
        cout << "|" << setw(8) << alumnos[y] << "|";
        float suma = 0;
        for (x = 0; x < NUMERO_AÑO; x++)
        {
            int calificacion = matriz[y][x];
            cout << setw(9) << calificacion << "|";
        }
        float promedio = matrizBaloncesto[y][NUMERO_EQUIPOS];
        if (promedio > promedioMayor)
        {
            promedioMayor = promedio;
            memcpy(equipoPromedioMayor, equipo[y], LONGITUD_MAXIMA);
        }
        if (promedio < promedioMenor)
        {
            promedioMenor = promedio;
            memcpy(equipoPromedioMenor, equipo[y], LONGITUD_MAXIMA);
        }
        cout << setw(8) << fixed <<setprecision(2) << promedio << "|" << endl;
        imprimirMatrizLinea();
    }
}


void mostrarMatrizNatacion(float matrizBaloncesto[NUMERO_EQUIPOS][NUMERO_AÑO+1], char equipo[NUMERO_EQUIPOS][LONGITUD_MAXIMA]);
{
    int y, x;
    float promedioMayor = matrizNatacion[0][NUMERO_AÑO];
    float promedioMenor = matrizNatacion[0][NUMERO_AÑO];
    char equipoPromedioMayor[LONGITUD_MAXIMA];
    char equipoPromedioMenor[LONGITUD_MAXIMA];
    memcpy(equipoPromedioMayor, equipo[0], LONGITUD_MAXIMA);
    memcpy(equipoPromedioMenor, equipo[0], LONGITUD_MAXIMA);

    imprimirMatrizLinea();
    cout << setw(9) << "Equipo";
    for (x = 0; x < NUMERO_AÑO; x++)
    {
        cout << setw(9) << "201" << x;
    }
    cout << setw(8) << "Prom" << endl;
    imprimirMatrizLinea();
    for (y = 0; y < NUMERO_EQUIPOS; y++)
    {
        cout << "|" << setw(8) << alumnos[y] << "|";
        float suma = 0;
        for (x = 0; x < NUMERO_AÑO; x++)
        {
            int calificacion = matriz[y][x];
            cout << setw(9) << calificacion << "|";
        }
        float promedio = matrizNatacion[y][NUMERO_EQUIPOS];
        if (promedio > promedioMayor)
        {
            promedioMayor = promedio;
            memcpy(equipoPromedioMayor, equipo[y], LONGITUD_MAXIMA);
        }
        if (promedio < promedioMenor)
        {
            promedioMenor = promedio;
            memcpy(equipoPromedioMenor, equipo[y], LONGITUD_MAXIMA);
        }
        cout << setw(8) << fixed <<setprecision(2) << promedio << "|" << endl;
        imprimirMatrizLinea();
    }
}

