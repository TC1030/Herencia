#include <iomanip>
#include "Paquete.hpp"

//iniciamos la constante de clase
const double Paquete::costoPorKilo = 23.45;

Paquete::Paquete(Persona& r, Persona& d, double p, double an, double la, double pro):Envio(r,d){
    setPeso(p);
    setAncho(an);
    setLargo(la);
    setProfundidad(pro);
}

double Paquete::getPeso() const{
    //completa
}

double Paquete::getAncho() const{
    //completa
}

double Paquete::getLargo() const{
    //completa
}

double Paquete::getProfundidad() const{
    //completa
}

void Paquete::setPeso(double p){
    peso = (p < 0)? 0 : p;
}

void Paquete::setAncho(double an){
    //Completa
}

void Paquete::setLargo(double la){
    //Completa
}

void Paquete::setProfundidad(double pro){
    //Completa
}

double Paquete::calculaCosto(){
    //Completa
}

void Paquete::imprime(){
    Envio::imprime();
    std::cout << "Datos del paquete: " << std::endl;
    //Completa para que se imprima el peso, ancho, largo y profundidad
    
    std::cout << "A PAGAR: $"<<//Completa para que se imprima el costo del paquete con 2 decimales
}