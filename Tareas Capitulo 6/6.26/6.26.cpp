#include <iostream>

using namespace std;

int main()
{
    float val1,val2,val3;
    cout << "Ingrese tres numeros: " << endl;
    cin >> val1 >> val2 >> val3;
    if (val1<val2 && val1<val3)
    {
        cout << "El menor es: " << val1 <<endl;
    }
    if (val2<val1 && val2<val3)
    {
        cout << "El menor es: " << val2 <<endl;
    }
    if (val3<val1 && val3<val2)
    {
        cout << "El menor es: " << val3 <<endl;
    }
    return 0;
}
