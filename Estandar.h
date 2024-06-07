#ifndef ESTANDAR_H_
#define ESTANDAR_H_
#include "Habitacion.h"
//Clase hija (Estandar) de la clase padre (Habitacion)
class Estandar : public Habitacion{
    //Metodos    
    public:
        //Constructores
        Estandar();
        Estandar(int num, string tip, int cap, int prec, bool disp);

        //funcion de calcular precio e imprimir datos y polimorfismo
        int calculaPrecioTotal(int dias) override;
        void imprimeDatos() override;
};

//Inicializar valores en constructor vacio
Estandar::Estandar() : Habitacion(){
}

//Establecer parametros de la clase hija al igual que los de la padre
Estandar::Estandar(int num, string tip, int cap, int prec, bool disp) : Habitacion(num, tip, cap, prec, disp){
}

//Modificar función en la que ahora se hará una suma para saber el precio total
int Estandar::calculaPrecioTotal(int dias){
    return dias * getPrecio_base();
}

//Imprimir Datos
void Estandar::imprimeDatos(){
    Habitacion::imprimeDatos();
    cout << "Tipo de habitacion: " << getTipo() << endl;
    cout << "Numero de habitacion: " << getNumero() << endl;
    cout << "Precio total de la habitacion estandar: " << calculaPrecioTotal(1) << endl;
    cout << "Disponibilidad: " << (getDisponibilidad() ? "Disponible" : "No Disponible") << endl;
}
#endif
