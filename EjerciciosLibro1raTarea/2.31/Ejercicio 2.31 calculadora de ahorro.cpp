#include <iostream>

using namespace std;

float prom, kilm, precio, park, peaje, gas, promgas;

int main(){
cout<<"Bienvenido al Banco de ahorro de viaje compartido"<<endl;
cout<<"Ingrese el total de kilometros por dia"<<endl;
cin>>kilm;
cout<<"Ingrese el costo por litro de gasolina"<<endl;
cin>>precio;
cout<<"Ingrese el promedio de km por litros"<<endl;
cin>>prom;
cout<<"Ingrese la cuota de estacionamiento por dia"<<endl;
cin>>park;
cout<<"Ingrese el peaje por dia"<<endl;
cin>>peaje;

promgas = (precio/prom)*kilm;
gas = promgas+park+peaje;

cout<<"Consume un total de Q:"<<promgas<<"Por dia"<<endl;
cout<<"Usted gasta diario un total de: "<<gas<<endl;

cout<<"a contitnuación le mostramos las ventajas del uso de viaje compartidos"<<endl;
cout<<"\n"<<endl;
cout<<"1) Reduce la emision de carbono"<<endl;
cout<<"2) Reduccion de congestion de trafico"<<endl;
cout<<"3) Ahorro de gasto diario"<<endl;


return 0;
}
