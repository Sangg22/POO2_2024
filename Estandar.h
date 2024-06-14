/*
 *
 * Proyecto Gestor de un hotel clase Estandar
 * Santiago Isai González Arista
 * A01712184
 * 13/06/2024
 *
 * Esta clase define una habitacón del tipo estandar que hereda de Habitación.
 * Lo que representaría el tipo de habitación más básico siendo que en este
 * el precio total sería solo el precio base por los dias de estancia.
 * Por lo tanto esta clase es usada para crear habitaciones estandar.
 */

#ifndef ESTANDAR_H_
#define ESTANDAR_H_
#include "Habitacion.h"
//Clase hija (Estandar) de la clase padre (Habitacion)
class Estandar : public Habitacion{
    //Metodos    
    public:
        //Constructores
        //Constructor vacio
        Estandar();
        //Constructor que recibre parametros
        Estandar(int num, string tip, int cap, int prec, int dias);

        //funcion de calcular precio e imprimir datos usando override para
        //sobreescribir la función
        int calculaPrecioTotal() override;
        void imprimeDatos() override;
};

/**
 * Estandar constructor vacío junto constructor vacio de la clase Padre
 * Inicializa el objeto con los atributos default
 * @param 
 * @return
 */

Estandar::Estandar() : Habitacion(){
}

/**
 * Estandar constructor con parámetros y constructor de clase padre
 * parametros.
 * @param Solo usa los parametros de la clase madre
 * @return
 */
Estandar::Estandar(int num, string tip, int cap, int prec, int dias) : 
Habitacion(num, tip, cap, prec, dias){
}

/**
 * Funcion calcularPrecioTotal() que devuelve el precio total
 * parametros.
 * @param 
 * @return int(PrecioTotal )
 */
int Estandar::calculaPrecioTotal(){
    return  (precio_base * dias_estancia);
}

/**
 * Funcion imprimeDatos() que devuelve el precio total
 * parametros.
 * @param 
 * @return Impresión de datos que se le dieron
 */
void Estandar::imprimeDatos(){
    cout << "Tipo de habitacion: " << getTipo() << endl;
    cout << "Numero de habitacion: " << getNumero() << endl;
    cout << "Precio total de la habitacion : " << calculaPrecioTotal() << endl;
}
#endif
