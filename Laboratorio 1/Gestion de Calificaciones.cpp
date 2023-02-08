#include <iostream>
#include <cstdlib>

//autor: Grupo 2
// fecha: 08/02/2023

using namespace std;

void menuPrincipal ();
void notaAlumnos () ;
char inicio;
int main()
{
    menuPrincipal();

    return 0;

}

void menuPrincipal (){
    int options;
    bool repetir = true;

    do
    {
        system("cls");
        cout << "\n\n\t\t\Gestion de Calificaciones de Alumnos" << endl;
        cout << "\t\t\t --------------------------------------" << endl;
        cout << "\t 1 - Ingresar Notas de Alumno " << endl;
        cout << "\t 2 - SALIR -" << endl;
        cout << "\n\t Ingrese Una Opcion ";
        cin >> options;

        switch(options)
        {
        case 1:
           notaAlumnos();
        break;
        case 2:
            repetir = false;
        break;
        }
    } while (repetir);

}

void notaAlumnos()
{
    do{
    system("cls");
    string nombre;
    float nota1, nota2, nota3, nota4, nota5, promedio;

    cout << "\n\t Ingrese Nombre del Alumno: ";
    cin >> nombre;
    cout << "\n\t Bienvenido " << nombre << " , Ingrese sus notas: ";
    cout << "\n\t Nota de Calculo: ";
    cin >> nota1;
    cout << "\n\t Nota de Fisica: ";
    cin >> nota2;
    cout << "\n\t Nota de Ingles: ";
    cin >> nota3;
    cout << "\n\t Nota de Programacion: ";
    cin >> nota4;
    cout << "\n\t Nota de Contabilidad: ";
    cin >> nota5;
    cout << "\n\tResultados de Calificación"<< endl;
    cout << "\n\t---------------------------"<< endl;

    promedio = (nota1+nota2+nota3+nota4+nota5)/5;

    if (promedio >= 61)
    {
      cout << "\n\Con su nota de Calculo: " << nota1 << " Fisica: " << nota2 << " Ingles: " << nota3 << " Programacion: " << nota4 << " y Contabilidad: " << nota5 << endl;
      cout << "\nHa obtenido un promedio de: " << promedio << " Usted " << nombre << " Aprobo el Semestre" ;

    } else {
    cout << "\n\Con su nota de Calculo: " << nota1 << " ,Fisica: " << nota2 << " ,Ingles: " << nota3 << " ,Programacion: " << nota4 << " y Contabilidad: " << nota5 << endl;
    cout << "\nHa obtenido un promedio de: " << promedio << " Usted " << nombre << " Aprobo el Semestre" ;
    }
    cout<<"\n Desea Continuar (S/N)? ";
		cin>>inicio;
	} while ((inicio=='S')||(inicio=='s'));
	cout<<"\n\t QUE TENGA UN EXCELENTE DIA!!"<<endl;

    system("pause>nul");
}
