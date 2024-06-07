#ifndef HOTEL_H_
#define HOTEL_H_

#include <vector>

#include "Habitacion.h"

using namespace std;

//Clase hotel que se compone de habitaciones
class Hotel{
    // Atributos privados
    private:
        string nombre;
        string ubicacion;
        vector<Habitacion*> habitaciones;
    // Metodos
    public:
        //Constructores
        Hotel();
        Hotel(string nom, string ubi);
        ~Hotel();
        
        //Setters
        void setNombre(string);
        void setUbicacion(string);

        //Getters
        string getNombre();
        string getUbicacion();

        //Agregar habitaciones e imprimir datos
        void agregaHabitacion(Habitacion* habitacion);
        void imprimirDatos();
};

//Inicializar valores
Hotel::Hotel(){
    nombre = "";
    ubicacion = "";
}

//Definir los valores
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

//Agregar habitaciones
void Hotel::agregaHabitacion(Habitacion* habitacion) {
    habitaciones.push_back(habitacion);
}

// Imprimir datos
void Hotel::imprimirDatos() {
    cout << "Nombre del hotel: " << nombre << endl;
    cout << "Ubicacion del hotel: " << ubicacion << endl;
    cout << "-----------------------------------" << endl;
    cout << "Habitaciones:" << endl;
    for (Habitacion* habitacion : habitaciones) {
        habitacion->imprimeDatos();
        cout << "-----------------------------------" << endl;
}
}

#endif
