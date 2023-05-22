#pragma once

#include <iostream>

class Persona {
    public:
        Persona();
        Persona(std::string nombre, std::string ciudad, std::string cp);
        std::string getNombre() const; 
        std::string getCiudad() const;
        std::string getCP() const;
        void setNombre(std::string);
        void setCiudad(std::string);
        void setCP(std::string);
        void imprime();
    private:
        std::string nombre;
        std::string ciudad;
        std::string cp;
};