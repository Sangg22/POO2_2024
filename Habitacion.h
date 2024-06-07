#ifndef HABITACION_H_
#define HABITACION_H_
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

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
        bool disponibilidad;
        bool ocupada;
    //Metodos
    public:
        //Constructores
        Habitacion();
        Habitacion(int num, string tip, int cap, int prec, bool disp);
        //Setters
        void setNumero(int);
        void setTipo(string);
        void setCapacidad(int);
        void setPrecio_base(int);
        void setDisponibilidad(bool);
        //Getters
        int getNumero();
        string getTipo();
        int getCapacidad();
        int getPrecio_base();
        bool getDisponibilidad();
        //Calcular precio total e imprimir datos y polimorfismo
        virtual int calculaPrecioTotal(int dias) = 0;
        virtual void imprimeDatos() = 0;
};

//Inicializar valores
Habitacion::Habitacion(){
    numero = 0;
    tipo = "";
    capacidad = 0;
    precio_base = 0;
    disponibilidad = false;
    ocupada = false;
}

//Establecer parametros
Habitacion::Habitacion(int num, string tip, int cap, int prec, bool disp){
    numero = num;
    tipo = tip;
    capacidad = cap;
    precio_base = prec;
    disponibilidad = disp;
    ocupada = !disp;
}

//Setters
void Habitacion::setNumero(int num){
    if (!ocupada){
        numero = num;
    }
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

void Habitacion::setDisponibilidad(bool disp){
    if (ocupada && disp) {
        cout << "La habitación ya está ocupada y no puede estar disponible." << endl;
    } else {
        disponibilidad = disp;
    if (disp == false) {
            ocupada = true; // Marcar la habitación como ocupada si no está disponible
        }
    }
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

bool Habitacion::getDisponibilidad(){
    return disponibilidad;
}

int Habitacion::calculaPrecioTotal(int dias) {
    return 0;
}

void Habitacion::imprimeDatos() {
    // No hacer nada
}


#endif
