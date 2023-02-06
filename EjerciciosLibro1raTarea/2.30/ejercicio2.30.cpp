#include <iostream>

using namespace std;

//Calculadora para encontrar el Indice de Masa Corporal
//Autor: Kenph Luna - Grupo 2 - Programacion 1
//Fecha: 05/02/2023

int main()
{
    double altura, peso, BMI;
    cout << "----- Calculadora del Indice de Masa Corporal BMI -----" << endl;
    cout << "Para realizar los calculos debe de ingresar su altura (metros) y su peso (kilogramos)" << endl;
    cout << "Ingrese su Altura: " << endl;
    cin >> altura;
    cout << "Ingrese su Peso: " << endl;
    cin >> peso;
    cout << "\n" ;

    BMI = (peso)/(altura*altura);

    cout << " ------- Tabla de Valores del BMI ------- " << endl;
    cout << "\t Bajo Peso: Menos de 18.5 " << endl;
    cout << "\t Normal : entre 18.5 y 24.9 " << endl;
    cout << "\t Sobrepeso: entre 25 y 29.9 " << endl;
    cout << "\t Obeso: 30 o mas " << endl;
    cout << "\n" ;

    cout << "------ Resultados ------" << endl;

    cout << "El resultado de su BMI es = " << BMI << endl;


    return 0;
}
