/*
 *
 * Proyecto Gestor de un hotel clase Cliente
 * Santiago Isai González Arista
 * A01712184
 * 13/06/2024
 *
 * Esta clase define el cliente al cual estaríámos atendiendo, aqui el cliente
 * tiene 3 atributos siendo su nombre y su correo, al igual se crea un vector
 * de reservaciones para que el cliente puede tener más de una reservación,
 * por lo que tiene un metodo para agregar reservas y uno para mostrar su
 * información.
 */

#ifndef CLIENTE_H_
#define CLIENTE_H_

//Incluir vector para crear un vector de reservas
#include <vector>

//Incluir reserva para agregación
#include "Reserva.h"

using namespace std;

//Clase cliente
class Cliente{
    //Atributos del cliente y vector de reservas
    private:
        string nombre;
        string correo;
        vector<Reserva*> reservas;
    //Metodos
    public:
        //Constructores
        Cliente();
        Cliente(string nom, string cor);
        //Setters
        void setNombre(string);
        void setCorreo(string);
        //Getters
        string getNombre();
        string getCorreo();
        //Función para agregar reservas e imprimir los datos
        void agregarReserva(Reserva* reservas);
        void imprimirDatos();
};

/**
 * Cliente constructor vacío
 * Inicializa el objeto con los atributos default
 * @param 
 * @return
 */
Cliente::Cliente(){
    nombre = "";
    correo = "";
}

/**
 * Cliente constructor con parámetros 
 * Define parametros de del cliente
 * @param string(nombre, correo)
 * @return
 */
Cliente::Cliente(string nom, string cor){
    nombre = nom;
    correo = cor;
}

//Setters
void Cliente::setNombre(string nom){
    nombre = nom;
}

void Cliente::setCorreo(string cor){
    correo = cor;
}

//Getters
string Cliente::getNombre(){
    return nombre;
}

string Cliente::getCorreo(){
    return correo;
}

/**
 * Funcion agregarReserva(Reserva* reserva)
 * Función que sirve para agregar reservas en el vector usando push_back
 * para ir recorriendo.
 * @param  Reserva* reserva
 * @return agregar reservas al vector
 */
void Cliente::agregarReserva(Reserva* reserva){
    reservas.push_back(reserva);
}

/**
 * Funcion imprimirDatos() que devuelve los datos del cliente
 * Contiene un for para ir imprimiendo todas las reservas que se han agregado.
 * @param 
 * @return impresión de los datos dados y las reservaciones con un for
 */
void Cliente::imprimirDatos(){
    cout << "CLIENTE:" <<endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Correo: " << correo << endl;
    cout << "Reservaciones: " << endl;
    for (Reserva* reserva : reservas) {
        reserva->imprimeDatos();
        cout << "-----------------------------------" << endl;
}

}

#endif
