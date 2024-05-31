#ifndef SUITE_H_
#define SUITE_H_
#include "Habitacion.h"
//Clase hija (Suite) de la clase padre (Habitacion)
class Suite : public Habitacion{
    //Atributos
    private:
        double precio_extra;
    //Metodos    
    public:
        //Constructores
        Suite();
        Suite(int num, string tip, int cap, double prec, bool disp, double extra);

        //Setters
        void setPrecioExtra(double);
        //Getters
        double getPrecioExtra();

        //funcion de calcular precio e imprimir datos y polimorfismo
        double calculaPrecioTotal() override;
        void imprimeDatos() override;
};

//Inicializar valores en constructor vacio
Suite::Suite() : Habitacion(){
    precio_extra = 0;
}

//Establecer parametros de la clase hija al igual que los de la padre
Suite::Suite(int num, string tip, int cap, double prec, bool disp, double extra) : Habitacion(num, tip, cap, prec, disp){
    precio_extra = extra;
}

//Setters
void Suite::setPrecioExtra(double extra){
    precio_extra  = extra;
}

//Getters
double Suite::getPrecioExtra(){
    return precio_extra;
}

//Modificar función en la que ahora se hará una suma para saber el precio total
double Suite::calculaPrecioTotal(){
    return getPrecio_base() + precio_extra;
}

//Imprimir Datos
void Suite::imprimeDatos(){
    Habitacion::imprimeDatos();
    cout << "Precio extra por ser suite: " <<precio_extra << endl;
    cout << "Precio total: " << calculaPrecioTotal() << endl;
}
#endif
