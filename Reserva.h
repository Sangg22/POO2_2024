/*
 *
 * Proyecto Gestor de un hotel clase Reserva
 * Santiago Isai González Arista
 * A01712184
 * 13/06/2024
 *
 * En esta clase se creará la reserva con dos atributos: fecha de inicio y 
 * fecha final de la reserva, el ofecto que se creara se irá agregando al
 * cliente ya que el cliente puede tener varias reservas.
 */

#ifndef RESERVA_H_
#define RESERVA_H_

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;

//Clase Reserva
class Reserva{
    //Atributos privados
    private:
        string fecha_inicio;
        string fecha_final;
    //Metodos
    public:
        //Constructores vacio y con parametros
        Reserva();
        Reserva(string fechain, string fechafin);
        //Setters
        void setFechain(string);
        void setFechafin(string);
        //Getters
        string getFechain();
        string getFechafin();

        //Función para imprimir los datos de la reserva
        void imprimeDatos();
};

/**
 * Reserva constructor vacío junto constructor
 * Inicializa el objeto con los atributos default
 * @param 
 * @return
 */
Reserva::Reserva(){
    fecha_inicio = "";
    fecha_final = "";
}

/**
 * Reserva constructor con parámetros.
 * Define los atributos
 * @param string(fecha_inicio, fecha_final)
 * @return
 */
Reserva::Reserva(string fechain, string fechafin){
    fecha_inicio = fechain;
    fecha_final = fechafin;
}

//Setters
void Reserva::setFechain(string fechain){
    fecha_inicio = fechain;
}

void Reserva::setFechafin(string fechafin){
    fecha_final = fechafin;
}

//Getters
string Reserva::getFechain(){
    return fecha_inicio;
}

string Reserva::getFechafin(){
    return fecha_final;
}

/**
 * Funcion imprimeDatos() que devuelve la fecha inicial y final de la reserva
 * @param 
 * @return Impresión de datos que se le dieron
 */
void Reserva::imprimeDatos(){
    cout << "Fecha de inicio de la reservació: " << fecha_inicio << endl;
    cout << "Fecha de fin de la reservacion: " << fecha_final << endl;
}

#endif
