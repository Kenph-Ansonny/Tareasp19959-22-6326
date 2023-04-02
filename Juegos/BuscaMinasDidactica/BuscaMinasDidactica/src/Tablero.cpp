#include "Tablero.h"
#include <sstream>
#include <iostream>

using namespace std;

Tablero::Tablero()      //Constructor de la clase Tablero llamada tablero
{
}
Tablero::Tablero(int alturaTablero, int anchoTablero, bool modoDesarrollador)       //Se envian parametros Altura, ancho del tablero y el modo desarrolador
{
    this->alturaTablero = alturaTablero;                //Usando el puntero se declara que se trabajara con la variable AlturaTablero a traves de los datos almacenados enviados por los parametros
    this->anchoTablero = anchoTablero;                  //----
    this->modoDesarrollador = modoDesarrollador;        //----

    //Se declaran variables x,y para utilizarlas en el siguiente ciclo.
    int x, y;
    for (y=0; y < this->alturaTablero; y++)     //Bucle para crear una "matriz" creando de primero Columnas comenzando desde 0 hasta el valor asignado por el puntero del parametro AlturaTablero
    {
        vector<Celda> fila;                         //Se crea un vector celda, llamado fila.
        for (x=0; x < this->anchoTablero; x++)      //Ciclo for donde se agregaran las filas comenzando desde la posición 0 hasta el valor asignado por el puntero del parametro enviado anchoTablero
        {
            fila.push_back((Celda(x, y, false)));   //Se agregara un valor al final del vector fila, donde se encuentra la funcion celda enviando parametros.
        }
        this->contenidoTablero.push_back(fila);     //Despues del recorrido anterior se enviaran datos al final de la variable asignada por el puntero contenido tablero (especificamente agregandose a las filas) creando así una matriz de filas y columnas
    }
}
int Tablero::getAlturaTablero()     //Constructor para obtener los datos de AlturaTablero en la función privada usando el metodo get
{
    return this->alturaTablero;     //Regresa el valor del puntero asignando que se trabajara con la variable alturaTablero
}
int Tablero::setAlturaTablero(int alturaTablero)    //Constructor que busca modificar el valor del parametro enviado alturaTablero
{
    this->alturaTablero = alturaTablero;        //Usando el puntero en lturaTablero se establece que se trabajara con la variable de alturaTablero
}
int Tablero::getAnchoTablero()              //A traves del metodo get se obtienen los valores privados de AnchoTablero
{
    return this->anchoTablero;              //regresa el valor dado por el puntero de la variable anchoTablero
}
int Tablero::setAnchoTablero(int anchoTablero)  //Se busca establecer el valor de AnchoTablero enviando los parametros anchoTablero ya "modificado" o señalado por el puntero this
{
    this->anchoTablero = anchoTablero;      //A traves del puntero this indica que se trabajara con la variable cambiada por el metodo set anchoTablero a partir de ahora
}
bool Tablero::getModoDesarrollador()           //Constructor booleano utilizando el metodo get para traer el dato que se encuentra dentro de ModoDesarrolador
{
    return this->modoDesarrollador;         //Regresa el valor obtenido por el metodo get y se trabajara con el valor de modo desarrollador marcado por el puntero this
}
bool Tablero::setModoDesarrollador(bool modoDesarrollador)      //Se busca establecer o modificar el valor para el ModoDesarrollador usando el metodo set llamando al parametro de modoDesarrollador
{
    this->modoDesarrollador = modoDesarrollador;        //Se utiliza el puntero this para indicar que se usara el modoDesarrollador como variable a utilizar, a partir de la variable traida por el parametro.
}
string Tablero::getRepresentacionMina(int coordenadaX, int coordenadaY)     //Constructor tipo string donde a partir del metodo get obtenermos los valores de la funcion privada de los parametros coordenadaX y coordenadaY
{
    Celda celdaTemporal = this->contenidoTablero.at(coordenadaY).at(coordenadaX);   //Se crea un costructor a partir de la clase Celda llamadoc celdaTemporal que contiene los valores utilizados por el pntero this de coordenadaX y coordenadaY.
    if (celdaTemporal.getMinaDescubierta() || this->modoDesarrollador)  // Un if en donde si se cumple una de las dos sitauciones se cumple utilizando or o || hara lo siguiente
    {
        if (celdaTemporal.getMina())    //if anidado, si se cumple lo anterior, entonces hara el siguiente condicional si celdaTemporal obtiene del dato de Mina
        {
            return "*";         //Regresara "*" o en el caso del juego una bomba dentro de la celda
        }
        else        //Dde lo contrario aun dentro del if anidado. Si no se cumple lo anterior encontes...
        {
            int cantidadCelda=this->minasCercanas(coordenadaY,coordenadaX);     // se establece una variable llamada cantidad Celda tipo int. En donde se utilizara el puntero this para establecer la funcion minasCercanas y se le enviaran parametros de coordeandasY y coordenadasX
            string cantidadCeldaString = " ";       //Se crea una variable tipo string llamada cantidadCeldasString donde se generara un espacio vacio
            stringstream ss;                //se crea la variable tipo stringstram lo que hace es efectuar las operaciones en memoria, usando un string como almacen
            ss << cantidadCelda;            //Se le envian a la variable ss los valores de cantidadCelda
            ss >> cantidadCeldaString;      //La variable ss devuelve los valores que se encuentran dentro suyo y los envia a la variable cantidadCeldaString
            return cantidadCeldaString;     //Regresa el String de cantidadCeldaString
        }
    }
    else        //Si no se cumple las condiciones entonces se ejecuta ll else principal fuera del if anidado
    {
        return "?";     //Regresara el contenido de ? dentro de las celdas
        //return ".";
    }
}
int Tablero::minasCercanas(int filaTablero, int columnaTablero)     //Constructor de la clase Tablero llamado minasCercanas donde se envian los parametro de filaTablero y columnaTablero
{
        int contadorTablero = 0;            //se crea la variable int llamada contador tablero y se inicializa a 0
        int filaInicioTablero, filaFinTablero, columnaInicioTablero, columnaFinTablero;             //se crean las variables tipo int
        if (filaTablero <= 0)       //Condicional si filaTablero es igual o menor que 0 entonces
		{
			filaInicioTablero = 0;      //el valor de filaInicioTablero va a ser igual a 0
		}
		else        //de lo contrario
		{
			filaInicioTablero = filaTablero - 1;        //el valor de filaInicioTablero va a ser igual al valor de filaTablero menos uno
		}

		if (filaTablero + 1 >= this->alturaTablero)     //Si filaTablero mas uno es mayor o igual a la variable señalada por el puntero this alturaTablero, entonces...
		{
			filaFinTablero = this->alturaTablero - 1;   //filaFinTablero va a ser igual al valor señalado por el puntero this alturaTablero menos uno
		}
		else        //de lo contrario
		{
			filaFinTablero = filaTablero + 1;       //El valor de filaFinTablero va a ser igual al valor de filaTablero mas uno
		}

		if (columnaTablero <= 0)        //Si columnaTablero es menor o igual a 0 entonces
		{
			columnaInicioTablero = 0; //columnaInicioTablero va a ser igual a 0
		}
		else        //de lo contrario
		{
			columnaInicioTablero = columnaTablero - 1;      //columnaInicioTablero es igual al valor de la variable columnaTablero menor uno
		}
		if (columnaTablero + 1 >= this->anchoTablero)           //si columnaTablero +1 es mayor o giual que la variable utilizada por el apuntador this anchoTablero entonces
		{
			columnaFinTablero = this->anchoTablero - 1;     //columnaFinTablero va a tener el valor de la variable señalada por el apuntador this anchoTabelro menos uno
		}
		else    //de lo contrario
		{
			columnaFinTablero = columnaTablero + 1;     //columnaFinTablero es igual al valor de columnaTablero mas uno
		}
		int m;      //se crea la variable tipo int llamada m
		for (m = filaInicioTablero; m <= filaFinTablero; m++)   //se crea u ciclo que inicializa con m es igual al valor de filaInicioTablero, y llega hasta que m sea menor o igual a filaFinal tablero, para despues irse sumando 1 a 1
		{
			int l;      //se crea la variable tipo int llamado l
			for (l = columnaInicioTablero; l <= columnaFinTablero; l++)     //ciclo for en donde l inicia con el valor de la variable columnaInicioTablero y termina donde l sea menor o igual que columnaFinalTablero y aumenta de uno a uno
			{
				if (this->contenidoTablero.at(m).at(l).getMina())   //Se realizara el ciclo hasta que el if no pueda continuar. El if se ejecutara cuando la variable señalada por el puntero This agregue el valor de m y de l para utilizando el metodo get para obtener el valor de Mina
				{
					contadorTablero++;      //Si se cumple la condicion entonces contadorTablero aumentara de uno en uno.
				}
			}
		}
		return contadorTablero;     //Despues de realizar todo lo anterior se regresara el valor de contadorTablero
}
void Tablero::imprimirSeparadorEncabezado()         //se crea un constructor llamado imprimirSeparadorEncabezado
	{
		int m;      //se crea la variable de tipo int llamada m
		for (m = 0; m <= this->anchoTablero; m++)   // se crea un ciclo for donde se inicializa m a cero y llega hasta que m sea menor o igual al valor señalado por el puntero de anchoTablero y m aumenta de 1 en 1
		{
			cout << "----";         // imprime las lineas que estan en pantalla
			if (m + 2 == this->anchoTablero)    //si m+2 es igual al valor señalado por el puntero rhis anchoTablero entonces
			{
				cout << "-";        //Se imrprimer solo un guion
			}
		}
		cout << "\n";       //Imprime un salto de linea
	}

	void Tablero::imprimirSeparadorFilas()      //Se crea el constructor imprimirSeparadorFilas
	{
		int m;                      //Se crea variable tipo int
		for (m = 0; m <= this->anchoTablero; m++)       //Ciclo donde m se inicializa a 0 y se ejecuta hasta que m sea menor o igual a anchoTablero señalado por el puntero. m se incremente de 1 a 1
		{
			if (m <= 1) // si el valor de m es menor o igual que uno entonces
			{
				cout << "|---"; //Se imprimer lo que esta entre comillas
			}
			else
			{
				cout << "+---"; //Se imprimer lo que esta entre comillas
			}
			if (m == this->anchoTablero)    //si m es igual al valor del puntero this señalando a la variable anchoTablero entonces
			{
				cout << "+"; //Se imprime lo que esta entre comillas
			}
		}
		cout << "\n";       //imprime un salto de linea
	}

	void Tablero::imprimirEncabezado()  //se crea el constructutor imprimirTablero
	{
		this->imprimirSeparadorEncabezado();    //se trabajara con la variable señalada por el puntero this llamada imprimirSeparadorEncabezado
		cout << "|   "; //Se imprimer lo que esta entre comillas
		int l;  //se crea la variable tipo int l
		for (l = 0; l < this->anchoTablero; l++)    // se crea
		{
			cout << "| " << l + 1 << " "; //Se imprimer lo que esta entre comillas y luego se imprime l + 1 y un espacio en blanco
			if (l + 1 == this->anchoTablero)
			{
				cout << "|"; //Se imprimer lo que esta entre comillas
			}
		}
		cout << "\n"; //Se imprime un salto de linea
	}

	void Tablero::imprimir()        //Constructor de la clase Tablero llamada imprimir
	{
		this->imprimirEncabezado();     //Se trabajara con la variable señalada por el puntero imprimirEncabezado
		this->imprimirSeparadorEncabezado();  //Se trabajara con la variable señalada por el puntero imprimirSeparadorEncabezado
		int x,y;                     //inicializa la variable x y y
		for (y = 0; y < this->alturaTablero; y++)       //ciclo for cuya variable y inicia en 0 y se detendra hasta que y sea menor al valor de la variable alturaTablero señalado por el puntero this
		{
			cout << "| " << y + 1 << " "; //Se imprime lo que esta entre comillas y se le agrega el valor de y + 1 y depues un espacio en blanco
			for (x = 0; x < this->anchoTablero; x++) //ciclo for cuya variable x inicia en 0 y se detendra hasta que y sea menor al valor de la variable anchoTablero señalado por el puntero this
			{
				cout << "| " << this->getRepresentacionMina(x, y) << " "; //Esto imprimira lo que esta entre comillas y se imprimira el valor de la varible representacionMina utilizado el metodo get y enviando parametros x y y
				if (x + 1 == this->anchoTablero)        //Condicional si x + 1 es igual al valor de la variable señalada por el puntero anchoTablero entonces
				{
					cout << "|"; //Se imprimer lo que esta entre comillas
				}
			}
			cout << "\n"; //Se imprimer lo que esta entre comillas
			this->imprimirSeparadorFilas();     //Se utilizara la variable imprimirSeparadorFilas por el puntero this
		}
	}
    bool Tablero::colocarMina(int x, int y)     //constructor booleado llamado colocarMina requiriendo parametros de x y y
	{
		return this->contenidoTablero.at(y).at(x).setMina(true);        //Coloca la mina en el espacio de la celda ubicada por x y y
	}
    bool Tablero::descubrirMina(int x, int y)   //constructor descubrirMina
	{
		this->contenidoTablero.at(y).at(x).setMinaDescubierta(true);    // Utilizando el puntero this señalka que el valor de descubrir mina es verdadero en los valores de x y y De la matriz
		Celda celda = this->contenidoTablero.at(y).at(x);       // el valor de celda será el contenidoTablero con las coordenadas y y x señalados por el puntero This
		if (celda.getMina())        //se obtiene el valor de la variable Mina utilizando el metodo get
		{
			return false;       //en caso de ser verdadero retorna el valor de falso
		}
		return true;        //Si no se ejecuta el if entonces regresa el valor de verdadero
	}
	int Tablero::contarCeldasSinMinasYSinDescubrir()        //Constructor llamado contarCeldasSinMinasYSinDescubrir
	{
		int x, y, contador = 0;     // se crean las variables x y y dentro del constructor y se inicializa la variable contador con 0
		for (y = 0; y < this->alturaTablero; y++)       //ciclo donde y inicia en cero y se detendra hasta que y sea menor al valor de alturaTablero y aumentara de uno a uno
		{
			for (x = 0; x < this->anchoTablero; x++)        //ciclo donde x inicia en 0 y se detendra hasta que x sea menor al valor de anchoTablero y aumentara de uno en uno
			{
				Celda celdaTemporal = this->contenidoTablero.at(y).at(x);       //celdaTemporal es igual al valor de contenidoTablero con los valores de y y x
				if (!celdaTemporal.getMinaDescubierta() && !celdaTemporal.getMina())        //El if se ejecutara si las dos condiciones son verdaderas, es decir si se decubre y se obtiene una mina entonces
				{
					contador++;     //el contador aumentara de uno en uno
				}
			}
		}
		return contador;        //regresa el valor del contador
	}
