//Fecha: 06-02-2023     Autor: Kenph Luna - Programacion 1
//Programa de Calculadora Basica utilizando funciones
#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

//Definicion de prototipos
void menuPrincipal();
void menuOperacionesBasicas();
void menuOperacionesExtendidas();

void suma ();
void resta ();
void mult();
void divid();

void factorial();
void hipoTriangulo();
void formulaCuadratica();
void funTrigonometricas();
void numeroExponente();

int main()
{
    menuPrincipal();

    return 0;
}

//Implementacion de Funciones
void menuPrincipal()
{
    int options;
    bool repetir = true;

    do
    {
        system("cls"); //Limpiador de pantalla de la libreria cstdlib
        cout << "\n\n\t\t\tMenu Calculadora" << endl;
        cout << "\t\t\t ----------------------" << endl;
        cout << "\t 1 - Operaciones Basica" << endl;
        cout << "\t 2 - Operaciones Extendidas" << endl;
        cout << "\t 3 - SALIR -" << endl;
        cout << "\n\t Ingrese Una Opcion ";
        cin >> options;

        switch(options)
        {
        case 1:
            menuOperacionesBasicas();
        break;
        case 2:
            menuOperacionesExtendidas();
        break;
        case 3:
            repetir = false;
        break;
        }
    } while (repetir);

}

void menuOperacionesBasicas()
{
   int options;
    bool repetir = true;

    do
    {
        system("cls"); //Limpiador de pantalla de la libreria cstdlib
        cout << "\n\n\t\t\tMenu Operaciones Basicas" << endl;
        cout << "\t\t\t ----------------------" << endl;
        cout << "\t 1 - Sumar 2 numeros" << endl;
        cout << "\t 2 - Restar 2 numeros" << endl;
        cout << "\t 3 - Multiplicar 2 numeros" << endl;
        cout << "\t 4 - Dividir 2 numeros" << endl;
        cout << "\t 5 - SALIR -" << endl;
        cout << "\n\t Ingrese Una Opcion: ";
        cin >> options;

        switch(options)
        {
        case 1:
            suma();
        break;
        case 2:
            resta();
        break;
        case 3:
            mult();
        break;
        case 4:
            divid();
        break;
        case 5:
            repetir = false;
        break;
        }
    } while (repetir);

}

void menuOperacionesExtendidas()
{
    int options;
    bool repetir = true;

    do
    {
        system("cls"); //Limpiador de pantalla de la libreria cstdlib
        cout << "\n\n\t\t\tMenu Operaciones Extendidas" << endl;
        cout << "\t\t\t ----------------------" << endl;
        cout << "\t 1 - Factorial" << endl;
        cout << "\t 2 - Hipotenusa de un Triangulo Rectangulo" << endl;
        cout << "\t 3 - Formula Cuadratica" << endl;
        cout << "\t 4 - Seno - Coseno - Tangente de un Grado" << endl;
        cout << "\t 5 - Elevar un Numero a Cualquier Exponente" << endl;
        cout << "\t 6 - SALIR -" << endl;
        cout << "\n\t Ingrese Una Opcion: ";
        cin >> options;

        switch(options)
        {
        case 1:
            factorial();
        break;
        case 2:
            hipoTriangulo();
        break;
        case 3:
            formulaCuadratica();
        break;
        case 4:
           funTrigonometricas();
        break;
        case 5:
            numeroExponente();
        break;
        case 6:
            repetir = false;
        break;
        }
    } while (repetir);
}

//Operaciones Basicas
void suma()
{
    int primerNumero, segundoNumero;
    float resultadoSuma;

    cout << "\n\t Ingrese Primer Numero: ";
    cin >> primerNumero;
    cout << " \n\t Ingrese Segundo Numero: ";
    cin >> segundoNumero;
    cout << "\n\t---------------------------"<< endl;

    resultadoSuma = primerNumero+segundoNumero;

    cout << "\tResultado de la suma. " << resultadoSuma << endl;
    system("pause>nul");

}

void resta()
{
    int primerNumero, segundoNumero;
    float resultadoResta;

    cout << "\n\t Ingrese Primer Numero: ";
    cin >> primerNumero;
    cout << " \n\t Ingrese Segundo Numero: ";
    cin >> segundoNumero;
    cout << "\n\t---------------------------"<< endl;

    resultadoResta = primerNumero - segundoNumero;

    cout << "\tResultado de la resta. " << resultadoResta << endl;
    system("pause>nul");

}

void mult()
{
    int primerNumero, segundoNumero;
    float resultadoMult;

    cout << "\n\t Ingrese Primer Numero: ";
    cin >> primerNumero;
    cout << " \n\t Ingrese Segundo Numero: ";
    cin >> segundoNumero;
    cout << "\n\t---------------------------"<< endl;

    resultadoMult = primerNumero*segundoNumero;

    cout << "\tResultado de la multiplicacion. " << resultadoMult << endl;
    system("pause>nul");

}

void divid()
{
    float primerNumero, segundoNumero;
    float resultadoDiv;

    cout << "\n\t Ingrese Primer Numero: ";
    cin >> primerNumero;
    cout << " \n\t Ingrese Segundo Numero: ";
    cin >> segundoNumero;
    cout << "\n\t---------------------------"<< endl;

    if (segundoNumero == 0){
        cout << "\tSegundo numero no puede ser (0) ERROR" << endl;
    } else {
        resultadoDiv = primerNumero/segundoNumero;
        cout << "\tResultado de la division. " << resultadoDiv << endl;
    }

    system("pause>nul");
}

//Operaciones Extendidas
void factorial()
{
    system("cls");
    int i;
    float numeroIngresado;
    float resultadoFactorial;

    cout << "\n\tCalculo del Factorial" << endl;
    cout << "\t\----------------------" << endl;

    cout << "\n\t Ingrese Numero: ";
    cin >> numeroIngresado;

    resultadoFactorial=1;

    for (i=1; i <= numeroIngresado; i++)
    {
        resultadoFactorial = resultadoFactorial * i;
    }

    cout << "\t" << numeroIngresado << "! = " << resultadoFactorial<< endl;

    system("pause>nul");
}

void hipoTriangulo()
{
    system("cls");

    float catetoA, catetoOp, hipotenusa;

    cout << "\n\tCalculo de la Hipotenusa de un Triangulo Rectangulo" << endl;
    cout << "\t\-----------------------------------------------------" << endl;

    cout << "\n\t Ingrese el Cateto Adyacente: ";
    cin >> catetoA;
    cout << "\n\t Ingrese el Cateto Opuesto: ";
    cin >> catetoOp;

    hipotenusa = sqrt((pow(catetoA,2))+(pow(catetoOp,2)));

    cout << "\tLa hipotenusa del Triangulo Rectangulo es: " << hipotenusa << endl;

    system("pause>nul");
}

void formulaCuadratica()
{
    system("cls");

    double valorA, valorB, valorC;
    float xe1, xe2;

    cout << "\n\tCalculo de la Formula Cuadratica" << endl;
    cout << "\t\-----------------------------------" << endl;

    cout << "\n\t Ingrese el Primer Valor (a): ";
    cin >> valorA;
    cout << "\n\t Ingrese el Segundo Valor (b): ";
    cin >> valorB;
    cout << "\n\t Ingrese el Tercer Valor (c): ";
    cin >> valorC;

    xe1 = (-(valorB)+ sqrt(pow(valorB,2)+(-4*(valorA)*(valorC))))/(2*valorA);
    xe2 = (-(valorB)- sqrt(pow(valorB,2)+(-4*(valorA)*(valorC))))/(2*valorA);

    cout << "\tEl Primer resultado (x1) = " << xe1 << endl;
    cout << "\tEl Segundo resultado (x2) = " << xe2 << endl;

    system("pause>nul");
}

void funTrigonometricas()
{
    system("cls");

    float grado;


    cout << "\n\tCalculadora de Seno - Coseno - Tangente" << endl;
    cout << "\t\-----------------------------------------" << endl;

    cout << "\n\t Ingrese el Valor a Convertir (grado): ";
    cin >> grado;

    cout << "\tEl Seno del Grado es = " << sin(grado) << endl;
    cout << "\tEl Coseno del Grado es = " << cos(grado) << endl;
    cout << "\tLa Tangente del Grado es = " << tan(grado) << endl;

    system("pause>nul");
}

void numeroExponente()
{
   system("cls");

    float numero,exponente,resultado;


    cout << "\n\tCalculadora que eleva cualquier numero a calquier exponente" << endl;
    cout << "\t\-----------------------------------------" << endl;

    cout << "\n\t Ingrese el Numero que desea elevar: ";
    cin >> numero;
    cout << "\n\t Ingrese el exponente al que desea elevar: ";
    cin >> exponente;

    resultado = pow(numero,exponente);

    cout << "\n\t " << numero << "^" << exponente << " = " << resultado << endl;

    system("pause>nul");
}
