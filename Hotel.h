/*
 *
 * Proyecto Gestor de un hotel clase Hotel
 * Santiago Isai González Arista
 * A01712184
 * 13/06/2024
 *
 * En esta clase sería donde almacenariamos las habitaciones que han sido
 * reservadas, al igual es donde creamos nuetsro hotel con nombre y 
 * ubicación, sus metodos serían agregar habitaciones reservadas y mostrar
 * sus datos, este último metodo nos mostrará al igual las habitaciones
 * que han sido reservadas. 
 */

#ifndef HOTEL_H_
#define HOTEL_H_

// incluye vector para poder guardar en un vector las habitaciones
#include <vector>

#include "Habitacion.h"

using namespace std;

//Clase hotel que se compone de habitaciones
class Hotel{
    // Atributos privados
    private:
        string nombre;
        string ubicacion;
        //vector con punteros de Habitacion
        vector<Habitacion*> habitaciones;
    // Metodos
    public:
        //Constructores
        Hotel();
        Hotel(string nom, string ubi);

        //Setters
        void setNombre(string);
        void setUbicacion(string);

        //Getters
        string getNombre();
        string getUbicacion();

        //Agregar habitaciones con punteros e imprimir datos
        void agregaHabitacion(Habitacion* habitacion);
        void imprimirDatos();

};

/**
 * Hotel constructor vacío
 * Inicializa el objeto con los atributos default
 * @param 
 * @return
 */
Hotel::Hotel(){
    nombre = "";
    ubicacion = "";
}

/**
 * Hotel constructor con parámetros.
 * Define los parámetros
 * @param string(nombre, ubicacion)
 * @return
 */
Hotel::Hotel(string nom, string ubi){
    nombre = nom;
    ubicacion = ubi;
}

//Setters
void Hotel::setNombre(string nom){
    nombre = nom;
}

void Hotel::setUbicacion(string ubi){
    ubicacion = ubi;
}

//Getters
string Hotel::getNombre(){
    return nombre;
}

string Hotel::getUbicacion(){
    return ubicacion;
}

/**
 * Funcion agregarHabitacion(Habitacion* habitacion)
 * Función que sirve para agregar habitaciones en el vector usando push_back
 * para ir recorriendo.
 * @param  Habitacion* habitacion
 * @return crea vector de habitaciones
 */
void Hotel::agregaHabitacion(Habitacion* habitacion) {
    habitaciones.push_back(habitacion);
}

/**
 * Funcion imprimirDatos() que devuelve los datos del hotel
 * Contiene un for para ir imprimiendo todas las habitaciones que se han agregado.
 * @param 
 * @return impresión de los datos dados y las habitaciones con un for
 */
void Hotel::imprimirDatos() {
    cout << "Nombre del hotel: " << nombre << endl;
    cout << "Ubicacion del hotel: " << ubicacion << endl;
    cout << "-----------------------------------" << endl;
    cout << "Habitaciones reservadas:" << endl;
    for (Habitacion* habitacion : habitaciones) {
        habitacion->imprimeDatos();
        cout << "-----------------------------------" << endl;
    }

}

#endif
