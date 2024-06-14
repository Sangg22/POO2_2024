/*
 *
 * Proyecto Gestor de un hotel clase Habitación abstracta
 * Santiago Isai González Arista
 * A01712184
 * 13/06/2024
 *
 * Esta clase define un objeto abstracto de tipo Habitación el cual sirve
 * de base para las habitaciones que se van a poder reservar.
 * En esta clase se encuentran las funciones virtuales como lo son calcular
 * precio total e imprimir los datos. Esta clase sirve como base para la clase
 * Suite y Estandar, siendo la clase padre.
 */

#ifndef HABITACION_H_
#define HABITACION_H_

#include "Reserva.h"

using namespace std;

//Clase padre (Habitacion)
class Habitacion{
    //Atributos
    protected:
        int numero;
        string tipo;
        int capacidad;
        int precio_base;
        int dias_estancia;
    //Metodos
    public:
        //Constructores
        //Constructor por default
        Habitacion();
        //Constructor con parametros
        Habitacion(int num, string tip, int cap, int prec, int dias);
        //Setters
        void setNumero(int);
        void setTipo(string);
        void setCapacidad(int);
        void setPrecio_base(int);
        void setDias_estancia(int);
        //Getters
        int getNumero();
        string getTipo();
        int getCapacidad();
        int getPrecio_base();
        int getDias_estancia();
        /*
        * Polimorfismo
        * Metodos virtuales para polimorfismo igualado a 0
        * Metodo abstracto que se usa en las clases hijas 
        */ 
        virtual int calculaPrecioTotal() = 0;
        virtual void imprimeDatos() = 0;
};

/**
 * Habitacion constructor vacío
 * Inicializa el objeto con los atributos default
 * @param 
 * @return
 */

Habitacion::Habitacion(){
    numero = 0;
    tipo = "";
    capacidad = 0;
    precio_base = 0;
    dias_estancia = 0;
}

/**
 * Habitacion constructor con parámetros
 * Inicializa el objeto con los atributos default
 * @param int(numero, capacidad, precio, dias), string(tipo)
 * @return
 */
Habitacion::Habitacion(int num, string tip, int cap, int prec, int dias){
    numero = num;
    tipo = tip;
    capacidad = cap;
    precio_base = prec;
    dias_estancia = dias;
}

//Setters
void Habitacion::setNumero(int num){
    numero = num;
}

void Habitacion::setTipo(string tip){
    tipo = tip;
}

void Habitacion::setCapacidad(int cap){
    capacidad = cap;
}

void Habitacion::setPrecio_base(int prec){
    precio_base = prec;
}

void Habitacion::setDias_estancia(int dias){
    dias_estancia = dias;
}


//Getters
int Habitacion::getNumero(){
    return numero;
}

string Habitacion::getTipo(){
    return tipo;
}

int Habitacion::getCapacidad(){
    return capacidad;
}

int Habitacion::getPrecio_base(){
    return precio_base;
}

int Habitacion::getDias_estancia(){
    return dias_estancia;
}


#endif
