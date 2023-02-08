#include <iostream>

using namespace std;

float num1, num2, num3, suma, promedio, producto, mayor, menor;

main()
{
    cout<<"Introduzca tres numeros enteros distintos: "<<endl;
    cin>>num1>>num2>>num3;
    suma=num1+num2+num3;
    promedio=(num1+num2+num3)/3;
    producto=num1*num2*num3;
    cout<<"La suma es "<<suma<<endl;
    cout<<"El promedio es "<<promedio<<endl;
    cout<<"El producto es "<<producto<<endl;

    if(num1<num2 && num1<num3){
        cout<<"El menor es "<<num1<<endl;
    }
    else if(num2<num1 && num2<num3){
        cout<<"El menor es "<<num2<<endl;
    }
    else if(num3<num1 && num3<num2){
        cout<<"El menor es "<<num3<<endl;
    }

     if(num1>num2 && num1>num3){
        cout<<"El mayor es "<<num1<<endl;
    }
    else if(num2>num1 && num2>num3){
        cout<<"El mayor es "<<num2<<endl;
    }
    else if(num3>num1 && num3>num2){
        cout<<"El mayor es "<<num3<<endl;
    }

    return 0;
}
