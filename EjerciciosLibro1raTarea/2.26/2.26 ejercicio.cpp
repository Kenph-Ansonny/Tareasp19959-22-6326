#include <iostream>
#include <conio.h>
using namespace std;

int main(){

system("cls");

int filas;
char sp;
sp = 1 ;
cout<<"\t\t\tIngrese el numero de filas: ";
cin>>filas;

for(int i = 1; i <= filas; i++){
    for(int j = 1; j <= filas; j++){
        cout<<"*";
    }
    cout<<"  \n";
}

getch();
return 0;
}
