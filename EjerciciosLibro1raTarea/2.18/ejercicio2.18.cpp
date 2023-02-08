#include <iostream>

using namespace std;

main ()
{
  int num1, num2;

  cout<<"ingrese dos numeros enteros: "<<endl;
  cin>>num1>>num2;

    if(num1==num2)
    cout<<"Los dos son numeros iguales";
    else
    {
        if (num1>num2)
            cout<<"el Numero mayor es "<<num1;

        else
        cout<<"el mayor es: " <<num2;
    }
    return 0;
}
