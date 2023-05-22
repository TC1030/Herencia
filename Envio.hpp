#pragma once // prevents multiple definitions

#include "Persona.hpp"

class Envio{
    public:
        Envio();
        Envio(Persona&, Persona&);
        double calculaCosto();
        void imprime();
    private:
        static const double costoEstandar; //constante de clase
        Persona rem;
        Persona des;
};