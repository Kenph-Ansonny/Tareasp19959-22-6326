#ifndef CONFIG_H
#define CONFIG_H


class Config
{
    public:
        Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero); //PARAMETROS QUE RECIBE DEL MAIN//
        //Se crearon los getters y setters de la clase que nos permiten ingresar a los atributos privados//
        int getfilasTablero();
        int setfilasTablero(int filasTablero);
        int getcolumnasTablero();
        int setcolumnasTablero(int columnasTablero);
        int getminasTablero();
        int setminasTablero(int minasTablero);
        bool getmodoDesarrolladorTablero();
        bool setmodoDesarrolladorTablero(bool modoDesarrolladorTablero);
        int getvidasTablero();
        int setvidasTablero(int vidasTablero);
        void menuConfiguracion();
        //Este es nuestro encabezado de las configuraciones//
    protected:

    private:
        // en private colocamos los atributoa para que estos no sean modificados ni puedan ser utilizados directamente
        int filasTablero;
        int columnasTablero;
        int minasTablero;
        bool modoDesarrolladorTablero;
        int vidasTablero;
};

#endif // CONFIG_H
