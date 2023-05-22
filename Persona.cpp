#include "Persona.hpp"

Persona::Persona() {
    nombre = "-";
    ciudad = "-";
    cp = "-";
}

Persona::Persona(std::string nom, std::string cd, std::string c) {
    nombre = nom;
    ciudad = cd;
    cp = c;
}

std::string Persona::getNombre() const {
    return nombre;
}

std::string Persona::getCiudad() const {
    return ciudad;
}   

std::string Persona::getCP() const {
    return cp;
}   

void Persona::setNombre(std::string nombre_) {
    nombre = nombre_;
}   

void Persona::setCiudad(std::string ciudad_) {
    ciudad = ciudad_;
}   

void Persona::setCP(std::string cp_) {
    cp = cp_;
}   


void Persona::imprime() {
    std::cout << "\tNombre: " << nombre << std::endl;
    std::cout << "\tDomicilio: "<< ciudad << " CP: "<< cp<< std::endl;
 }