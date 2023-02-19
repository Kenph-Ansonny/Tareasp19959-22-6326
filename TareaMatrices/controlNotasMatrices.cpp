//este ejemplo
//Fecha: 15-02-2023

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define NUMERO_ALUMNOS 3
#define NUMERO_MATERIAS 3
#define MAX_CALIFICATION 100
#define MIN_CALIFICATION 0
#define MAX_LONGITUD_CADENA 100

int busquedaAleatoria(int minimo, int maximo);
void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS+1]);
void imprimirLineaMatriz();
void imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS+1], char alumnos[NUMERO_ALUMNOS][MAX_LONGITUD_CADENA]);

int main()
{
    srand(getpid());
    float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS+1];
    char alumnos[NUMERO_ALUMNOS][MAX_LONGITUD_CADENA] = {"Mario", "Carlos", "Marta"};
    llenarMatriz(matriz);
    imprimirMatriz(matriz, alumnos);
    return 0;
}

int busquedaAleatoria(int minimo, int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo-minimo+1)+1);
}

void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS+1])
{
    int y,x;
    for (y=0; y < NUMERO_ALUMNOS; y++)
    {
        float sumaNotasAlumno = 0;

        for (x=0; x < NUMERO_MATERIAS; x++)
        {
            int calificacionAlumno = busquedaAleatoria(MIN_CALIFICATION, MAX_CALIFICATION);
            sumaNotasAlumno += (float)calificacionAlumno;
            matriz[y][x] = calificacionAlumno;
        }
        float promedioNotasALumno = sumaNotasAlumno / NUMERO_MATERIAS;
        matriz[y][NUMERO_MATERIAS] = promedioNotasALumno;
    }
}

void imprimirLineaMatriz()
{
    int x;
    printf("+----------------");
    for (x=0; x < NUMERO_MATERIAS; x++)
    {
        printf("----------");
    }
    printf("+\n");

}
void imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS+1], char alumnos[NUMERO_ALUMNOS][MAX_LONGITUD_CADENA])
{
    int y,x;
    float promedioMayor = matriz[0][NUMERO_MATERIAS];
    float promedioMenor = matriz[0][NUMERO_MATERIAS];
    char alumnoPromedioMayor[MAX_LONGITUD_CADENA];
    char AlumnoPromedioMenor[MAX_LONGITUD_CADENA];
    memcpy(alumnoPromedioMayor, alumnos[0], MAX_LONGITUD_CADENA);
    memcpy(AlumnoPromedioMenor, alumnos[0], MAX_LONGITUD_CADENA);
    imprimirLineaMatriz();

    printf("!  Alumno  !");
    for (x=0; x < NUMERO_MATERIAS; x++)
    {
        printf("Cal %d   !", x+1);

    }
    printf("Promedio!\n");
    imprimirLineaMatriz();
    for (y=0; y < NUMERO_ALUMNOS; y++)
    {
        printf("!%-10s!", alumnos[y]);
        float suma = 0;
        for (x=0; x < NUMERO_MATERIAS; x++)
        {
            int calificacion = matriz [y][x];
            printf("%-7d !", calificacion);
        }
        float promedio = matriz[y][NUMERO_MATERIAS];
        if (promedio > promedioMayor)
        {
            promedioMayor = promedio;
            memcpy(alumnoPromedioMayor, alumnos[y], MAX_LONGITUD_CADENA);

        }
        if (promedio < promedioMenor)
        {
            promedioMenor = promedio;
            memcpy(AlumnoPromedioMenor, alumnos[y], MAX_LONGITUD_CADENA);
        }
        printf("%0.2f    !\n", promedio);
        imprimirLineaMatriz();

    }
    printf("Promedio Mayor: %s con %0.2f\n", alumnoPromedioMayor, promedioMayor);
    printf("Promedio Menor: %s con %0.2f\n", AlumnoPromedioMenor, promedioMenor);
}
