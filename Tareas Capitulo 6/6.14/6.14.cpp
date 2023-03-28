#include <iostream>
#include <cmath>

using namespace std;

float redondearAEntero(float num);
float redondearADecimas(float num);
float redondearACentesimas(float num);
float redondearaMilesima(float num);

int main()
{
float numero;

    cout << "Ingrese un valor para redondear ";
    cin >>  numero;

    cout << "\n "<< numero <<" ha sido redondeado de forma original a entera = " << redondearAEntero(numero);
    cout << "\n "<< numero <<" ha sido redondeado de forma original a decima = " << redondearADecimas(numero);
    cout << "\n "<< numero <<" ha sido redondeado de forma original a centesima = " << redondearACentesimas(numero);
    cout << "\n "<< numero <<" ha sido redondeado de forma original a milesima = " << redondearaMilesima(numero);

}

float redondearAEntero(float num)
{
    float y = floor((num * 10) + 0.5);

    return y;
}

float redondearADecimas(float num)
{
    float y = floor(num  + 0.5)/100;

    return y;
}

float redondearACentesima(float num)
{
    float y = floor((num * 10) + 0.5)/10;

    return y;
}

float redondearACentesimas(float num)
{
    float y = floor(num * 100 + 0.5)/100;

    return y;
}

float redondearaMilesima(float num)
{
    float y = floor(num * 1000 + 0.5)/1000;

    return y;
}
