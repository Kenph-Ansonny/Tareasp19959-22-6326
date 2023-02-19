#include <iostream>

using namespace std;

class Gato
{
public:
    //Definiendo los atributos
    string Nombre;
        //Definiendo los constructores
    Gato()
    {
        Nombre = "Felix";
    }
    Gato(string pNombre)
    {
        Nombre = pNombre;
    }
    //Definiendo los comportamientos
    void meow()
    {
        cout << Nombre << " dice Meow " << endl;
    }
};

int main ()
{
    //Creando primer Objeto
    Gato miPrimerGato;
    cout << "Mi primer objeto creado es un gato y se llama: " << miPrimerGato.Nombre << endl;
    Gato miSegundoGato("Tom");
    cout << "Mi segundo objeto creado es un gato y se llama: " << miSegundoGato.Nombre << endl;
    Gato miTercerGato("Firulais");
    cout << "Mi Tercer objeto creado es un gato y se llama: " << miTercerGato.Nombre << endl;
    cout << "Mi Primer Gato se comunica: " << endl;
    miPrimerGato.meow();
    miSegundoGato.meow();
    miTercerGato.meow();

    return 0;
}

