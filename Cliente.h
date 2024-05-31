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
        vector<Reserva> reservas;
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
        void agregarReserva(Reserva);
        void imprimirDatos();
};

//Inicializar valores
Cliente::Cliente(){
    nombre = "";
    correo = "";
}

//Definir
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

//Usar push_back para agregar reservas
void Cliente::agregarReserva(Reserva reserva){
    reservas.push_back(reserva);
}

//Imprimir datos
void Cliente::imprimirDatos(){
    cout << "CLIENTE:" <<endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Correo: " << correo << endl;
    cout << "Reservas:" << endl;
    //Ciclo for que recorre las reservas para imprimir sus datos con getters
    for(size_t i = 0; i <reservas.size(); i++){
		cout<<"Fecha de inicio de reserva: " << reservas[i].getFechain() <<endl;
		cout<<"Fecha de fin de reserva: " << reservas[i].getFechafin() <<endl;
	}

}

#endif
