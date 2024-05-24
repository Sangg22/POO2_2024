#include "Habitacion.h"
int main() {
    // Ejemplo de uso de la clase Habitacion
    Habitacion hab1(101, "Suite", 4, 150.0, true);
    hab1.imprimeDatos();
    cout << endl;

    // Ejemplo de uso de la clase Suite
    Suite suite1(101, "Suite", 4, 150.0, true, 100.0);
    suite1.imprimeDatos();

    return 0;
}
