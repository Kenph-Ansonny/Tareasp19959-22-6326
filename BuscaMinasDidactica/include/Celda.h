#ifndef CELDA_H
#define CELDA_H
//Libreria que guarda los atributos y los prototipos de los metodos utilizados para crear y administrar las celdas de juego
//Fecha: 17 marzo 2023

//Se crea la clase celda para el encabezado de Celda.h
class Celda
{
    //funciones publicas de la clase
    public:
        Celda();
        Celda(int coordenadaX, int coordenadaY, bool estadoMina);
        int setCoordenadaX(int coordenadaX);
        int getCoordenadaX();
        int setCoordenadaY(int coordenadaY);
        int getCoordenadaY();
        bool setMina(bool estadoMina);
        bool getMina();
        bool setMinaDescubierta(bool minaDescubierta);
        bool getMinaDescubierta();
        void imprimirCelda();
        //Funciones protegidas
    protected:

    //variables privadas
    private:
        int coordenadaX, coordenadaY;
        bool mina, minaDescubierta;
};

#endif // CELDA_H
