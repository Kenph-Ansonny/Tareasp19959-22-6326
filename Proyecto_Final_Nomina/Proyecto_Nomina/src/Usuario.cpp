#include "Usuario.h"

void Usuario::menu()
{
    system("cls");
    int choice;
    bool repetir = true;
    char x;
	do
    {
	system("cls");

	cout<<"\t\t\t-----------------------------------"<<endl;
	cout<<"\t\t\t|  SISTEMA DE REGISTRO DE USUARIO  |"<<endl;
	cout<<"\t\t\t-----------------------------------"<<endl;
	cout<<"\t\t\t 1. Alta de Empleados (Ingreso) "<<endl;
	cout<<"\t\t\t 2. Baja de Empleados (Borrado) "<<endl;
	cout<<"\t\t\t 3. Modificaciones Empleados"<<endl;
	cout<<"\t\t\t 4. Consulta de Empleados"<<endl;
	cout<<"\t\t\t 5. Exit"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	do
    	{
    		insertar();
    		cout<<"\n\t\t\t Agregar Otro Empleado (Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		break;
	case 2:
		borrar();
		break;
	case 3:
		modificar();
		break;
	case 4:
		buscar();
		break;
	case 5:
		repetir = false;
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(repetir);
}
