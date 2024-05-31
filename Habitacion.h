#ifndef HABITACION_H_
#define HABITACION_H_
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;

//Clase padre (Habitacion)
class Habitacion{
    //Atributos
    protected:
        int numero;
        string tipo;
        int capacidad;
        double precio_base;
        bool disponibilidad;
    //Metodos
    public:
        //Constructores
        Habitacion();
        Habitacion(int num, string tip, int cap, double prec, bool disp);
        //Setters
        void setNumero(int);
        void setTipo(string);
        void setCapacidad(int);
        void setPrecio_base(double);
        void setDisponibilidad(bool);
        //Getters
        int getNumero();
        string getTipo();
        int getCapacidad();
        double getPrecio_base();
        bool getDisponibilidad();
        //Calcular precio total e imprimir datos y polimorfismo
        virtual double calculaPrecioTotal() = 0;
        virtual void imprimeDatos() = 0;
};

//Inicializar valores
Habitacion::Habitacion(){
    numero = 0;
    tipo = "";
    capacidad = 0;
    precio_base = 0;
    disponibilidad = false;
}

//Establecer parametros
Habitacion::Habitacion(int num, string tip, int cap, double prec, bool disp){
    numero = num;
    tipo = tip;
    capacidad = cap;
    precio_base = prec;
    disponibilidad = disp;
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

void Habitacion::setPrecio_base(double prec){
    precio_base = prec;
}

void Habitacion::setDisponibilidad(bool disp){
    disponibilidad = disp;
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

double Habitacion::getPrecio_base(){
    return precio_base;
}

bool Habitacion::getDisponibilidad(){
    return disponibilidad;
}

//Función de calcular el precio (por el momento solo con el precio base)
double Habitacion::calculaPrecioTotal() {
    return precio_base; // Precio base sin ningún extra
}

//Imprimir los datos
void Habitacion::imprimeDatos(){
    cout << "Numero: " << numero << endl;
    cout << "Tipo: " << tipo << endl;
    cout << "Capacidad: " << capacidad << endl;
    cout << "Precio base: " << precio_base << endl;
    cout << "Disponibilidad: " << (disponibilidad ? "Disponible" : "No Disponible") << endl;
}

#endif
