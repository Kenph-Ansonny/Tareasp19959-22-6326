#ifndef JUEGO_H
#define JUEGO_H
#include "Tablero.h"
#include "Jugador.h"
#include "Config.h"

class Juego // iniciación del juego
{
private:
	Tablero tablero; //parametro que define la variable llamada tablero
	int cantidadMinas; // indica el numero de minas que se va a tener en el juego
	int vidas;//indica el numero de vidas que se va a tener en el juego
    int aleatorio_en_rango(int minimo, int maximo); // realizar de forma aleatoria los numeros que se muestran en tablero
	int filaAleatoria();// crea valores al azar en filas
	int columnaAleatoria(); //Crea valores al azar en columnas

public:
    Juego(Tablero tablero, int cantidadMinas, int vidas); //constructor del juego
	void colocarMinasAleatoriamente(); // instera las minas de forma aleatoria en el tablero
	int solicitarFilaUsuario(); // le solicita al jugador cuantas filas va crear en su tablero
	int solicitarColumnaUsuario(); //le solicita al jugador cuantas columnas va a crear en su tablero
	bool jugadorGana(); //reconoce cuando el jugador gana
	void iniciar(); // inicia el juego ejecutando sus constructores
	void dibujarPortada(string nombreArchivo); //Crea la port
};

#endif // JUEGO_H
