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
        int dias_estancia;
    //Metodos
    public:
        //Constructores
        Reserva();
        Reserva(int dias);
        //Setters
        void setDias(int);
        //Getters
        int getDias();
};

//Inicializar valores
Reserva::Reserva(){
    dias_estancia = 0;
}

//Establecer valores
Reserva::Reserva(int dias){
    dias_estancia = dias;
}

//Setters
void Reserva::setDias(int dias){
    dias_estancia = dias;
}

//Getters
int Reserva::getDias(){
    return dias_estancia;
}

#endif
