#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float val1 = 10.1;
    float val2 = 7.6;
    float val3 = 3.4;
    float val4 = 9.11;
    float val5 = 5.0;

    int y = floor(val1 + 0.5);
    int y2 = floor(val2 + 0.5);

    cout << "Este es el valor del numero al entero más cercano = " << y << endl;
    cout << "Este es el numero original = " << val1 << "\n" << endl;
    cout << "Este es el valor del numero al entero más cercano = " << y2 << endl;
    cout << "Este es el numero original = " << val2 << "\n" << endl;
    cout << "Este es el valor del numero al entero más cercano = " << floor(val3 + 0.5) << endl;
    cout << "Este es el numero original = " << val3 << "\n" << endl;
    cout << "Este es el valor del numero al entero más cercano = " << floor(val4 + 0.5) << endl;
    cout << "Este es el numero original = " << val4 << "\n" << endl;
    cout << "Este es el valor del numero al entero más cercano = " << floor(val5+ 0.5) << endl;
    cout << "Este es el numero original = " << val5 << "\n" << endl;

    return 0;
}
