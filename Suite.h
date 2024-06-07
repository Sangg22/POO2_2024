#ifndef SUITE_H_
#define SUITE_H_
#include "Habitacion.h"
//Clase hija (Suite) de la clase padre (Habitacion)
class Suite : public Habitacion{
    //Atributos
    private:
        int precio_extra;
    //Metodos    
    public:
        //Constructores
        Suite();
        Suite(int num, string tip, int cap, int prec, bool disp, int extra);

        //Setters
        void setPrecioExtra(int);
        //Getters
        int getPrecioExtra();

        //funcion de calcular precio e imprimir datos y polimorfismo
        int calculaPrecioTotal(int dias) override;
        void imprimeDatos() override;
};

//Inicializar valores en constructor vacio
Suite::Suite() : Habitacion(){
    precio_extra = 0;
}

//Establecer parametros de la clase hija al igual que los de la padre
Suite::Suite(int num, string tip, int cap, int prec, bool disp, int extra) : Habitacion(num, tip, cap, prec, disp){
    precio_extra = extra;
}

//Setters
void Suite::setPrecioExtra(int extra){
    precio_extra  = extra;
}

//Getters
int Suite::getPrecioExtra(){
    return precio_extra;
}

//Modificar función en la que ahora se hará una suma para saber el precio total
int Suite::calculaPrecioTotal(int dias){
    return ((getPrecio_base()) * dias) + precio_extra;
}

//Imprimir Datos
void Suite::imprimeDatos(){
    Habitacion::imprimeDatos();
    cout << "Tipo de habitacion: " << getTipo() << endl;
    cout << "Numero de habitacion: " << getNumero() << endl;
    cout << "Disponibilidad: " << getDisponibilidad() << endl;
    cout << "Precio extra por ser suite: " << getPrecioExtra() << endl;
    cout << "Precio total: " << calculaPrecioTotal(1) << endl;
    cout << "Disponibilidad: " << (getDisponibilidad() ? "Disponible" : "No Disponible") << endl;
}

#endif
