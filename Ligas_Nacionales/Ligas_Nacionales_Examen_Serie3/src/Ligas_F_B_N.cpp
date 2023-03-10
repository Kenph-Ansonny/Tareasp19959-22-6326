#include "Ligas_F_B_N.h"
char inicio;

//Ciclo de repetición
void repetirMatrices()
{
     srand(getpid());
    do{
    system("cls");
    //Matrices

    matrices();
    cout << "\n-----------------------------------------------------------------------------------------\n"<< endl;


    cout<<"Desea Repetir las Matrices (Y/N)? ";
		cin>>inicio;
	} while ((inicio=='Y')||(inicio=='y'));
	cout<<"\n\t Que tenga un excelente Dia "<<endl;

    system("pause>nul");
}

//Donde se encuentran las matrices
void matrices()
{
    //Matriz Futbol
    float ligaFutbol[NUMERO_EQUIPOS][CAMPEONATO_FECHA + 1];
    char equipoFutbol[NUMERO_EQUIPOS][MAXIMA_LONGITUD_CADENA] = {"Equipo 1","Equipo 2","Equipo 3","Equipo 4","Equipo 5"};
    cout << "Liga Nacional de Futbol "<< endl;
    llenarligaFutbol(ligaFutbol);
    imprimirligaFutbol(ligaFutbol, equipoFutbol);

    //Matriz Baloncesto
    cout << "\n-----------------------------------------------------------------------------------------\n"<< endl;
    float ligaBaloncesto[NUMERO_EQUIPOS][CAMPEONATO_FECHA + 1];
    char equipoBaloncesto[NUMERO_EQUIPOS][MAXIMA_LONGITUD_CADENA] = {"Equipo 1","Equipo 2","Equipo 3","Equipo 4","Equipo 5"};
    cout << "Liga Nacional de Baloncesto "<< endl;
    llenarLigaBal(ligaBaloncesto);
    imprimirligaBaloncesto(ligaBaloncesto, equipoBaloncesto);

    //Matriz Natacion
    cout << "\n-----------------------------------------------------------------------------------------\n"<< endl;
    float ligaNatacion[NUMERO_EQUIPOS][CAMPEONATO_FECHA + 1];
    char equipoNatacion[NUMERO_EQUIPOS][MAXIMA_LONGITUD_CADENA] = {"Equipo 1","Equipo 2","Equipo 3","Equipo 4","Equipo 5"};
    cout << "Liga Nacional de Natacion "<< endl;
    llenarLigaNata(ligaNatacion);
    imprimirLigaNata(ligaNatacion, equipoNatacion);

}

int busquedaAleatorios(int minimo, int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

//Imprimir Linea Matriz
void imprimirMatrizLinea()
{
    int x;
    cout << "+--------";
    for (x = 0; x < CAMPEONATO_FECHA + 1; x++)
    {
        cout << "+---------";
    }
    cout << "+\n";
}

//Matriz Futbol
void llenarligaFutbol(float ligaFutbol[NUMERO_EQUIPOS][CAMPEONATO_FECHA + 1])
{
    int y, x;
    for (y = 0; y < NUMERO_EQUIPOS; y++)
    {
        float suma = 0;
        for (x = 0; x < CAMPEONATO_FECHA; x++)
        {
            int calificacion = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION);
            suma += (float)calificacion;
            ligaFutbol[y][x] = calificacion;
        }
        // Agregar promedio
        float promedio = suma / CAMPEONATO_FECHA;
        ligaFutbol[y][CAMPEONATO_FECHA] = promedio;
    }
}


void imprimirligaFutbol(float ligaFutbol[NUMERO_EQUIPOS][CAMPEONATO_FECHA + 1], char equipoFutbol[NUMERO_EQUIPOS][MAXIMA_LONGITUD_CADENA])
{
    int y, x;
    float promedioMayorFutbol = ligaFutbol[0][CAMPEONATO_FECHA];
    float promedioMenorFutbol = ligaFutbol[0][CAMPEONATO_FECHA];
    char equipoPromedioMayorFutbol[MAXIMA_LONGITUD_CADENA];
    char equipoPromedioMenorFutbol[MAXIMA_LONGITUD_CADENA];
    memcpy(equipoPromedioMayorFutbol, equipoFutbol[0], MAXIMA_LONGITUD_CADENA);
    memcpy(equipoPromedioMenorFutbol, equipoFutbol[0], MAXIMA_LONGITUD_CADENA);

    imprimirMatrizLinea();
    cout << setw(9) << "Equipo";
    for (x = 0; x < CAMPEONATO_FECHA; x++)
    {
        cout << setw(9) << "201" << x + 1;
    }
    cout << setw(8) << "Prom" << endl;
    imprimirMatrizLinea();
    for (y = 0; y < NUMERO_EQUIPOS; y++)
    {
        cout << "!" << setw(8) << equipoFutbol[y] << "!";
        float suma = 0;
        for (x = 0; x < CAMPEONATO_FECHA; x++)
        {
            int calificacion = ligaFutbol[y][x];
            cout << setw(9) << calificacion << "!";
        }
        float promedio = ligaFutbol[y][CAMPEONATO_FECHA];
        if (promedio > promedioMayorFutbol)
        {
            promedioMayorFutbol = promedio;
            memcpy(equipoPromedioMayorFutbol, equipoFutbol[y], MAXIMA_LONGITUD_CADENA);
        }
        if (promedio < promedioMenorFutbol)
        {
            promedioMenorFutbol = promedio;
            memcpy(equipoPromedioMenorFutbol, equipoFutbol[y], MAXIMA_LONGITUD_CADENA);
        }
        cout << setw(9) << fixed << setprecision(2) << promedio << "!" << endl;
        imprimirMatrizLinea();
    }
    cout << "El " << equipoPromedioMayorFutbol <<" Fue el equipo con el Mejor Promedio. Tuvo una Puntuacion de: " << promedioMayorFutbol << endl;
    cout << "El " << equipoPromedioMenorFutbol <<" Fue el equipo con el Peor Promedio. Tuvo una Puntuacion de: " << promedioMenorFutbol << endl;
}

//Matriz Baloncesto
void llenarLigaBal(float ligaBaloncesto[NUMERO_EQUIPOS][CAMPEONATO_FECHA + 1])
{
    int y, x;
    for (y = 0; y < NUMERO_EQUIPOS; y++)
    {
        float suma = 0;
        for (x = 0; x < CAMPEONATO_FECHA; x++)
        {
            int calificacion = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION);
            suma += (float)calificacion;
            ligaBaloncesto[y][x] = calificacion;
        }
        // Agregar promedio
        float promedio = suma / CAMPEONATO_FECHA;
        ligaBaloncesto[y][CAMPEONATO_FECHA] = promedio;
    }
}


void imprimirligaBaloncesto(float ligaBaloncesto[NUMERO_EQUIPOS][CAMPEONATO_FECHA + 1], char equipoBaloncesto[NUMERO_EQUIPOS][MAXIMA_LONGITUD_CADENA])
{
    int y, x;
    float promedioMayorBaloncesto = ligaBaloncesto[0][CAMPEONATO_FECHA];
    float promedioMenorBaloncesto = ligaBaloncesto[0][CAMPEONATO_FECHA];
    char equipoPromedioMayorBaloncesto[MAXIMA_LONGITUD_CADENA];
    char equipoPromedioMenorBaloncesto[MAXIMA_LONGITUD_CADENA];
    memcpy(equipoPromedioMayorBaloncesto, equipoBaloncesto[0], MAXIMA_LONGITUD_CADENA);
    memcpy(equipoPromedioMenorBaloncesto, equipoBaloncesto[0], MAXIMA_LONGITUD_CADENA);

    imprimirMatrizLinea();
    cout << setw(9) << "Equipo";
    for (x = 0; x < CAMPEONATO_FECHA; x++)
    {
        cout << setw(9) << "201" << x + 1;
    }
    cout << setw(8) << "Prom" << endl;
    imprimirMatrizLinea();
    for (y = 0; y < NUMERO_EQUIPOS; y++)
    {
        cout << "!" << setw(8) << equipoBaloncesto[y] << "!";
        float suma = 0;
        for (x = 0; x < CAMPEONATO_FECHA; x++)
        {
            int calificacion = ligaBaloncesto[y][x];
            cout << setw(9) << calificacion << "!";
        }
        float promedio = ligaBaloncesto[y][CAMPEONATO_FECHA];
        if (promedio > promedioMayorBaloncesto)
        {
            promedioMayorBaloncesto = promedio;
            memcpy(equipoPromedioMayorBaloncesto, equipoBaloncesto[y], MAXIMA_LONGITUD_CADENA);
        }
        if (promedio < promedioMenorBaloncesto)
        {
            promedioMenorBaloncesto = promedio;
            memcpy(equipoPromedioMenorBaloncesto, equipoBaloncesto[y], MAXIMA_LONGITUD_CADENA);
        }
        cout << setw(9) << fixed << setprecision(2) << promedio << "!" << endl;
        imprimirMatrizLinea();
    }
    cout << "El " << equipoPromedioMayorBaloncesto <<" Fue el equipo con el Mejor Promedio. Tuvo una Puntuacion de: " << setw(10) << promedioMayorBaloncesto << endl;
    cout << "El " << equipoPromedioMenorBaloncesto <<" Fue el equipo con el Peor Promedio. Tuvo una Puntuacion de: " << setw(10) << promedioMenorBaloncesto << endl;
}

//Liga Natacion
void llenarLigaNata(float ligaNatacion[NUMERO_EQUIPOS][CAMPEONATO_FECHA + 1])
{
    int y, x;
    for (y = 0; y < NUMERO_EQUIPOS; y++)
    {
        float suma = 0;
        for (x = 0; x < CAMPEONATO_FECHA; x++)
        {
            int calificacion = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION);
            suma += (float)calificacion;
            ligaNatacion[y][x] = calificacion;
        }
        // Agregar promedio
        float promedio = suma / CAMPEONATO_FECHA;
        ligaNatacion[y][CAMPEONATO_FECHA] = promedio;
    }
}


void imprimirLigaNata(float ligaNatacion[NUMERO_EQUIPOS][CAMPEONATO_FECHA + 1], char equipoNatacion[NUMERO_EQUIPOS][MAXIMA_LONGITUD_CADENA])
{
    int y, x;
    float promedioMayorNatacion = ligaNatacion[0][CAMPEONATO_FECHA];
    float promedioMenorNatacion = ligaNatacion[0][CAMPEONATO_FECHA];
    char equipoPromedioMayorNatacion[MAXIMA_LONGITUD_CADENA];
    char equipoPromedioMenorNatacion[MAXIMA_LONGITUD_CADENA];
    memcpy(equipoPromedioMayorNatacion, equipoNatacion[0], MAXIMA_LONGITUD_CADENA);
    memcpy(equipoPromedioMenorNatacion, equipoNatacion[0], MAXIMA_LONGITUD_CADENA);

    imprimirMatrizLinea();
    cout << setw(9) << "Equipo";
    for (x = 0; x < CAMPEONATO_FECHA; x++)
    {
        cout << setw(9) << "201" << x + 1;
    }
    cout << setw(8) << "Prom" << endl;
    imprimirMatrizLinea();
    for (y = 0; y < NUMERO_EQUIPOS; y++)
    {
        cout << "!" << setw(8) << equipoNatacion[y] << "!";
        float suma = 0;
        for (x = 0; x < CAMPEONATO_FECHA; x++)
        {
            int calificacion = ligaNatacion[y][x];
            cout << setw(9) << calificacion << "!";
        }
        float promedio = ligaNatacion[y][CAMPEONATO_FECHA];
        if (promedio > promedioMayorNatacion)
        {
            promedioMayorNatacion = promedio;
            memcpy(equipoPromedioMayorNatacion, equipoNatacion[y], MAXIMA_LONGITUD_CADENA);
        }
        if (promedio < promedioMenorNatacion)
        {
            promedioMenorNatacion = promedio;
            memcpy(equipoPromedioMenorNatacion, equipoNatacion[y], MAXIMA_LONGITUD_CADENA);
        }
        cout << setw(9) << fixed << setprecision(2) << promedio << "!" << endl;
        imprimirMatrizLinea();
    }
    cout << "El " << equipoPromedioMayorNatacion <<" Fue el equipo con el Mejor Promedio. Tuvo una Puntuacion de: " << promedioMayorNatacion << endl;
    cout << "El " << equipoPromedioMenorNatacion <<" Fue el equipo con el Peor Promedio. Tuvo una Puntuacion de: " << promedioMenorNatacion << endl;
}
