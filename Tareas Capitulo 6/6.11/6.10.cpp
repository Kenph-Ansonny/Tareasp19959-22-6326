#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    cout << "El valor de x cuando se utiliza Fabs es = " << fabs(7.5) << endl;
    cout << "El valor de x cuando se utiliza floor es = " << floor(7.5) << endl;
    cout << "El valor de x cuando se utiliza fabs es = " << fabs(0.0) << endl;
    cout << "El valor de x cuando se utiliza Ceil es = " << ceil(0.0) << endl;
    cout << "El valor de x cuando se utiliza fabs es = " << fabs(-6.4) << endl;
    cout << "El valor de x cuando se utiliza ceil es = " << ceil(-6.4) << endl;
    cout << "El valor de x cuando se utilizan fabs, ceil y floor es = " << ceil(-fabs(-8+floor(5.5))) << endl;

    return 0;
}
