#include <iomanip>
#include "Sobre.hpp"

//Iniciamos constante de clase
const double Sobre::cargoAdicional = 79.90;

//Constructor por defecto
Sobre::Sobre(){
    ancho=0;
    largo=0;
}
//Constructor con parámetros
Sobre::Sobre(Persona& r, Persona& d, double an, double la):Envio(r,d){
    setAncho(an);
    setLargo(la);
}

//Genera los getters de ancho y largo



//Genera los setters de ancho y largo


//Sobreescribir calculaCosto de la clase envio


//Sobreescribir imprime de la clase envio