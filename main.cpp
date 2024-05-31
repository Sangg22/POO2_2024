#include "Suite.h"
#include "Habitacion.h"
#include "Reserva.h"
#include "Cliente.h"
#include "Estandar.h"

int main() {
    //Establecer valores a la habitación estandar y la suite
    Estandar habitacion1(101, "Estandar", 4, 150.0, true);
    Suite habitacion2(102, "Suite", 4, 250.0, true, 100.0);

    //Establecer valores al cliente y crear dos reservas para agregar
    Cliente cliente1("Santiago Gonzalez", "santiglz79@gmail.com");
    Reserva reserva1("2024-06-01", "2024-06-10");
    Reserva reserva2("2024-07-10", "2024-07-19");

    //Agregar reservas
    cliente1.agregarReserva(reserva1);
    cliente1.agregarReserva(reserva2);

    //Imprimir información del cliente
    cliente1.imprimirDatos();
    //Imprimir habitaciones
    habitacion1.imprimeDatos();
    habitacion2.imprimeDatos();

    return 0;
}
