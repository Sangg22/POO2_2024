#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;

//Clase padre (Habitacion)
class Habitacion{
    //Atributos
    private:
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
        //Calcular precio total e imprimir datos
        double calculaPrecioTotal();
        void imprimeDatos();
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

        //funcion de calcular precio e imprimir datos
        double calculaPrecioTotal();
        void imprimeDatos();
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
