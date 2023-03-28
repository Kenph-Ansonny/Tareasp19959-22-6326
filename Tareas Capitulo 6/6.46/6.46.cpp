#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float x,y,e,a,g,r,l,l10,p,s,t,u;
    cout << "Ingrese los valores a ser evaluados" << endl;
    cin >> x >> y;
    e=exp(x);
    cout << "exp(x)=" << e << endl;
    a=fabs(x);
    cout << "fabs(x)=" << a <<endl;
    g=floor(x);
    cout << "floor(x)=" << g <<endl;
    r=fmod(x,y);
    cout << "fmod(x,y)=" << r <<endl;
    l=log(x);
    cout << "log(x)=" << l <<endl;
    l10=log10(x);
    cout << "log10(x)=" << l10 <<endl;
    p=pow(x,y);
    cout << "pow(x,y)=" << p <<endl;
    s=sin(x);
    cout << "sin(x)=" << s <<endl;
    u=sqrt(x);
    cout << "sqrt(x)=" << u <<endl;
    t=tan(x);
    cout << "sin(x)=" << t <<endl;
    return 0;
}
