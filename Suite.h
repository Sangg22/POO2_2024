/*
 *
 * Proyecto Gestor de un hotel clase Suite
 * Santiago Isai González Arista
 * A01712184
 * 13/06/2024
 *
* Esta clase define una habitacón del tipo suite que hereda de Habitación.
 * Lo que representaría el tipo de habitación más caro siendo que en este
 * el precio total aparte de recibir el precio base, recibe al igual un 
 * precio extra por ser suite y por los dias de estancia.
 * Por lo tanto esta clase es usada para crear habitaciones suite que a 
 * diferencia de la estandar, esta recibe el monto extra por ser una suite.
 */

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
        Suite(int num, string tip, int cap, int prec, int dias, int extra);

        //Setters
        void setPrecioExtra(int);
        //Getters
        int getPrecioExtra();

        //funcion de calcular precio e imprimir datos usando override para
        //sobreescribir la función
        int calculaPrecioTotal() override;
        void imprimeDatos() override;
};

/**
 * Suite constructor vacío junto constructor vacio de la clase Padre
 * Inicializa el objeto con los atributos default
 * @param 
 * @return
 */
Suite::Suite() : Habitacion(){
    precio_extra = 0;
}


/**
 * Suite constructor con parámetros y constructor de clase padre con
 * parametros.
 * Inicializa el objeto con los atributos default
 * @param Solo usa los parametros de la clase madre y agrega int(precio_extra)
 * @return
 */
Suite::Suite(int num, string tip, int cap, int prec, int dias, int extra) : 
Habitacion(num, tip, cap, prec, dias){
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

/**
 * Funcion calcularPrecioTotal() que devuelve el precio total
 * parametros.
 * @param 
 * @return int(PrecioTotal )
 */
int Suite::calculaPrecioTotal(){
    return (precio_base + precio_extra) * dias_estancia;
}

/**
 * Funcion imprimeDatos() que devuelve el precio total
 * parametros.
 * @param 
 * @return Impresión de datos que se le dieron
 */
void Suite::imprimeDatos(){
    cout << "Tipo de habitacion: " << getTipo() << endl;
    cout << "Numero de habitacion: " << getNumero() << endl;
    cout << "Precio extra por ser suite: " << getPrecioExtra() << endl;
    cout << "Precio total: " << calculaPrecioTotal() << endl;
}

#endif
