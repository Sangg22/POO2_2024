/*
 *
 * Proyecto Gestor de un hotel
 * Santiago Isai González Arista
 * A01712184
 * 13/06/2024
 *
 * Proyecto final para la clase TC1030.304 Progrmación orientada a objetos 2 
 * Este programa nos va a servir para poder gestionar las reservas que se
 * hacen en un hotel por parte de clientes, se podrán agregar habitaciones 
 * a un vector de habitaciones que han sido reservadas las cuales podrán ser
 * consultadas y al igual se podrá saber las reservaciones que tiene un
 * cliente.
 */

#include "Hotel.h"
#include "Cliente.h"
#include "Habitacion.h"
#include "Reserva.h"
#include "Suite.h"
#include "Estandar.h"
#include <string>

using namespace std;

int main(){
    // Inicializar el hotel
    unsigned int opcion;
    string nombreHotel; 
    cout << "Ingrese el nombre del hotel: ";
    cin >> nombreHotel;
    string ubicacionHotel;
    cout << "Ingrese la ubicacion del hotel: ";
    cin >> ubicacionHotel;

    Hotel* hotel = new Hotel(nombreHotel, ubicacionHotel);

    Habitacion* habitacion1 = new Estandar(100, "Estandar", 4, 150, 5);
    Habitacion* habitacion2 = new Suite(101, "Suite", 4, 150, 5, 100);
    Suite suite(101, "Suite", 5, 100, 5, 100);
    Reserva reserva1("20 de mayo", "25 de mayo");

    Cliente* cliente = new Cliente("Santiago González", "santiglz79@gmail.com");

    hotel->agregaHabitacion(habitacion1);
    hotel->agregaHabitacion(habitacion2);

    do{
        cout << "Menu de Administración del Hotel" << endl;
        cout << "1. Agregar habitación que se quiere reservar:" << endl;
        cout << "2. Agregar reservación:" << endl;
        cout << "3. Mostrar datos del cliente:" << endl;
        cout << "4. Mostrar datos del hotel" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opción: " << endl;
        cin >> opcion;
        switch (opcion) {
            case 1:{

                cout << "Ingresa información de la habitación:" << endl;
                int numero;
                cout << "Ingrese el número de la habitación: ";
                cin >> numero;
                string tipo;
                cout << "Ingrese el tipo de habitación (Suite/Estandar): ";
                cin >> tipo;
                int capacidad;
                cout << "Ingrese la capacidad de personas en la habitación: ";
                cin >> capacidad;
                int precioBase;
                cout << "Ingrese el precio base de la habitación:";
                cin >> precioBase;
                int diasEstancia;
                cout << "Ingresa los dias de estancia:";
                cin >> diasEstancia;

                //Inicializa valor de puntero nulo
                Habitacion* habitacion = nullptr;
                if (tipo == "Suite"){
                    int precioExtra;
                    cout << "Ingrese el precio extra de la suite: ";
                    cin >> precioExtra;
                    habitacion = new Suite(numero,tipo,capacidad,precioBase,diasEstancia,precioExtra);
                }
                else if (tipo == "Estandar"){
                    habitacion = new Estandar(numero,tipo,capacidad,precioBase,diasEstancia);
                }
                else{
                    cout << "Tipo de habitación no válido. Intente de nuevo." << endl;
                    break;
                }
                hotel->agregaHabitacion(habitacion);
                cout << "Habitación agregada exitosamente." << endl;

                }
            case 2:{
                string fecha_inicio;
                cout << "Ingrese la fecha de inicio de la reservación (dd/mm/aaaa): ";
                cin >> fecha_inicio;

                string fecha_final;
                cout << "Ingrese la fecha de fin de la reservación (dd/mm/aaaa): ";
                cin >> fecha_final;

                Reserva* reserva = new Reserva(fecha_inicio, fecha_final);
                cliente->agregarReserva(reserva);

                cout << "Habitación y reservación agregadas exitosamente." << endl;
                break;

                }
            case 3:
                cout << "Datos del cliente." << endl;
                cliente->imprimirDatos();
                break;
            case 4:
                cout << "Datos del hotel." << endl;
                hotel->imprimirDatos();
                break;
            default:
                cout << "Opción no válida, por favor intente de nuevo." << endl;
        }
    }
    while(opcion != 0);
    return 0;
};
