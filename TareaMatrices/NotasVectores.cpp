#include <iostream>

using namespace std;
const int CANTIDADNOTAS = 5;

int main(){
    int notas[CANTIDADNOTAS];
    string nombresAlumnos[CANTIDADNOTAS];
    double notasFisica[CANTIDADNOTAS];
    double notasMatematicas[CANTIDADNOTAS];

    cout << "\n\t  Gestion de Calificaciones" << endl;
    cout << "\t|---------------------------|" << endl;
    cout << "\n" << endl;
    for (int i = 0; i < CANTIDADNOTAS; i++)
    {
        cout << "Ingrese la nota: " << i + 1 << ": ";
        cin >> notas[i];
    }

    double sumaNotas = 0;

    cout << "\n----------------------------" << endl;

    for (int i = 0; i < CANTIDADNOTAS; i++)
    {
        sumaNotas = sumaNotas + notas[i];
        cout << "\Calificacion de Nota" << i + 1 << " = " << notas[i] << endl;
        cout << "----------------------------" << endl;
    }
    double promedioNotas = sumaNotas / CANTIDADNOTAS;

    string calNota = " ";
    if (promedioNotas == 100)
    {
        calNota = "A++";
    }
    else if (promedioNotas >= 96 and promedioNotas<=99)
    {
        calNota = "A";
    }
    else if (promedioNotas >= 90 and promedioNotas<=95)
    {
        calNota = "B";
    }
    else if (promedioNotas >= 80 and promedioNotas<=89)
    {
        calNota = "C";
    }
    else if (promedioNotas >= 70)
    {
        calNota = "D";
    }
    else if (promedioNotas >= 60)
    {
        calNota = "E";
    }
    else
    {
        calNota = "F";
    }
    cout << "\nTotal de Puntos: " << sumaNotas << endl;
    cout << "Promedio notas: " << promedioNotas << endl;
    cout << "Por el promedio obtenido usted merece una: " << calNota << endl;

    return 0;
}
