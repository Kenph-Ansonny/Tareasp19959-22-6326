//Librerias y encabezados
#include <iostream>
#include <unistd.h>
#include "Juego.h"
#include "Config.h"
#include "Jugador.h"

using namespace std;

int main()
{
    //Se crean las siguientes constantes
    const int FILASTABLERO = 5;
    const int COLUMNASTABLERO = 5;
    const int MINASENTABLERO = 3;
    const bool MODODESARROLLADOR = true;
    const int VIDASTABLERO = 3;
    //Se crean las siguietnes estructuras
    Config configuracionJuego(FILASTABLERO, COLUMNASTABLERO, MINASENTABLERO, MODODESARROLLADOR, VIDASTABLERO);
    Juego juego(Tablero(configuracionJuego.getfilasTablero(), configuracionJuego.getcolumnasTablero(), configuracionJuego.getmodoDesarrolladorTablero()), configuracionJuego.getminasTablero());
    juego.dibujarPortada("portada2.txt");
    //Para obtener numeros aleatorios
    srand(getpid());

    bool accesoJugador;
    Jugador jugadorRegistrado;
    accesoJugador = jugadorRegistrado.loginJugador();
    if (accesoJugador)
        {
    int opciones;
    bool repetir = true;
    do
    {
        //Limpia pantalla
        system("cls");
        //imprime en pantalla
        cout << "\n\n\t\tBUSCA MINAS -Menu-" << endl;
        cout << "\t\t-------------------"<< endl;
        cout << "\t\t1. Configuracion del Juego" << endl;
        cout << "\t\t2. Iniciar el Juego" << endl;
        cout << "\t\t3. Ingresar Perfil de Jugador" << endl;
        cout << "\t\t4. Salir del Juego" << endl;
        cout << "\n\t\tIngrese una opcion: ";
        cin >> opciones;
        //Un switch para crear el meno tipo do while
        switch (opciones)
        {
            //Si opciones es igual a 1 entonces
        case 1:
            {
                configuracionJuego.menuConfiguracion(); //inicia configuracionJuego.menuConfiguracion
                break;
            }
            //si opciones es igual a 2  entonces
        case 2:
            {
                //Se ejecuta juegoTemporal de la clase Juego y se envian los siguientes parametros:
              	Juego juegoTemporal(Tablero(configuracionJuego.getfilasTablero(), configuracionJuego.getcolumnasTablero(), configuracionJuego.getmodoDesarrolladorTablero()), configuracionJuego.getminasTablero());
                //se ejeguta juegoTemporal
                juegoTemporal.iniciar();

                //Se crea una pausa
                system("pause");
                break;
            }
            case 3:
            {

              	Jugador usuario;
                usuario.menuJugador();

                //Se crea una pausa
                system("pause");
                break;
            }
        case 4: repetir = false;    //Si se ingresa 3 repetir se vuelve falso y cierra el programa. No sin antes mostrar los creditos
                break;
        }
    } while (repetir);
    }
    system("cls");      //Limpia la pantalla
    juego.dibujarPortada("creditos.txt");       //Enseña los creditos del programa. Es decir los programadores
    return 0;
}

