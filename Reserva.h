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
        string fecha_fin;
    //Metodos
    public:
        //Constructores
        Reserva();
        Reserva(string ini, string fin);
        //Setters
        void setFechain(string);
        void setFechafin(string);
        //Getters
        string getFechain();
        string getFechafin();
};

//Inicializar valores
Reserva::Reserva(){
    fecha_inicio = "";
    fecha_fin = "";
}

//Establecer valores
Reserva::Reserva(string ini, string fin){
    fecha_inicio = ini;
    fecha_fin = fin;
}

//Setters
void Reserva::setFechain(string ini){
    fecha_inicio = ini;
}

void Reserva::setFechafin(string fin){
    fecha_fin = fin;
}

//Getters
string Reserva::getFechain(){
    return fecha_inicio;
}

string Reserva::getFechafin(){
    return fecha_fin;
}

#endif
