#include "Hanoi.h"
using namespace std;

void torreHanoi(int discos,char A,char C,char B)
{
    if(discos == 1)
    {
            cout<<"Mueva el disco "<<discos<<" desde la torre "<<A<<" hasta la torre "<<C<<endl;

    }
    else
    {
        torreHanoi(discos-1,A,B,C);
        cout<<"Mueva el disco "<<discos<<" desde la torre "<<A<<" hasta la torre "<<C<<endl;
        torreHanoi(discos-1,B,C,A);
    }
}

void funcionPrincipal()
{
        char  A,B,C, reiniciar;
        int discos;
        do {
        system("cls");
        cout << "\tPrograma para calcular la cantidad mínima de movimientos en el juego \"Torre de Hanoi\"" << endl;
        cout << "\t-----------------------------------------------------------------------------------------\n" << endl;
        cout<<"Las Torres son A, B y C\n";
        cout<<"Cantidad de discos al jugar: ";
        cin>>discos;

        cout << "\nMovimientos minimos para ganar = " << (pow(2,discos))-1 << endl;
        cout<< "----------------------------------------\n";
        torreHanoi(discos,'A','C','B');
        cout << "\n\n ingrese \'1\' para volver a jugar, de lo contrario ingrese \'0\': ";
        cin >> reiniciar;
        } while (reiniciar == '1');

}

