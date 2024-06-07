#include "Suite.h"
#include "Habitacion.h"
#include "Reserva.h"
#include "Cliente.h"
#include "Estandar.h"
#include "Hotel.h"

int main() {
    //Establecer valores a la habitación estandar y la suite
    Habitacion* habitacion1 = new Estandar(101, "Estandar", 4, 150.0, true);
    Habitacion* habitacion2 = new Suite(101, "Suite", 4, 150.0, true, 100.0);

    Hotel hotel1("Paradise", "Ixtapa");

    hotel1.agregaHabitacion(habitacion1);
    hotel1.agregaHabitacion(habitacion2);


    //Establecer valores al cliente y crear dos reservas para agregar
    Cliente cliente1("Santiago Gonzalez", "santiglz79@gmail.com");
    Reserva reserva1(10);
    Reserva reserva2(2);

    //Agregar reservas
    cliente1.agregarReserva(reserva1);
    cliente1.agregarReserva(reserva2);

    //Imprimir información del cliente
    cliente1.imprimirDatos();
    //Imprimir habitaciones
    
    hotel1.imprimirDatos();

    return 0;
}
