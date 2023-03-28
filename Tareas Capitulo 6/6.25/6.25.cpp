#include <iostream>

using namespace std;

void funcionTiempo();
int main()
{
    funcionTiempo();
   return 0;
}

void funcionTiempo()
{
    int horas,minutos,segundos,fhoras,fminutos,fsegundos;
    cout << "Ingrese el numero de horas" << endl;
    cin >> horas;
    cout << "Ingrese el numero de minutos" << endl;
    cin >> minutos;
    cout << "Ingrese el numero de segundos" << endl;
    cin >> segundos;
    if (horas>12 || minutos>60 || segundos>60)
    {
        cout << "valores fuera de rango";
    }
    else
    {
        if(segundos==60)
        {
            minutos +=1;
            segundos=0;
        }
        if(minutos==60)
        {
            horas+=+1;
            minutos=0;
        }
        if(horas==12)
        {
            horas=0;
        }
        fsegundos=horas*3600+minutos*60+segundos;
        cout << "Pasaron: " << fsegundos << " Segundos" << endl;
    }
}
