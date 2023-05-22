#include "Bitacora.h"

/*
string Bitacora::ingresoDatosBitacora(string nombreUsuario, string numeAccion, string accionRealizada)
{
    system("cls");
	fstream file;

	file.open("Bitacora.txt", ios::app | ios::out);
	file <<std::left<<std::setw(15)<< nombreUsuario <<std::left<<std::setw(15)<< numeAccion <<std::left<<std::setw(15)<< accionRealizada <<std::left<<std::setw(15)<< fechaHoraAccion << "\n";
	file.close();
}
*/

void Bitacora::imprimirDatosBitacora(){
    system("cls");
    fstream file;
	int total=0;
	cout<<"\n-------------------------Imprimir Informe de Bitacora -------------------------"<<endl;
	file.open("Bitacora.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> nombreUsuario >> numeAccion >> accionRealizada >> fechaHoraAccion;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Nombre del Usuario         : "<<nombreUsuario<<endl;
			cout<<"\t\t\t Numero de Accion          : "<<numeAccion<<endl;
			cout<<"\t\t\t Accion Realizada              : "<<accionRealizada<<endl;
			cout<<"\t\t\t Fecha y Hora        : "<<fechaHoraAccion<<endl;
        file >> nombreUsuario >> numeAccion >> accionRealizada >> fechaHoraAccion ;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
	getch();
}
