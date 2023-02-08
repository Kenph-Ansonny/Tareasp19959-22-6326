#include <iostream>

using namespace std;

float num1, num2, suma, producto, diferencia, cociente;
main()
{
    cout<<"Bienvendido a la calculadora de suma, producto, diferencia y cociente de los dos numeros"<<endl;
    cout<<"ingrese el primer numero: "<<endl;
    cin>>num1;
    cout<<"ingrese el segundo numero: "<<endl;
    cin>>num2;
    suma=num1+num2;
    producto=num1*num2;
    diferencia=num1-num2;
    cociente=num1/num2;
    cout<<"La suma es: "<<suma<<endl;
    cout<<"El producto es: "<<producto<<endl;
    cout<<"La diferencia es: "<<diferencia<<endl;
    cout<<"El cociente es: "<<cociente<<endl;

    return 0;
}
