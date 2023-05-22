#pragma once

#include "Envio.hpp"

class Paquete:public Envio{
    public:
        Paquete(Persona&, Persona&, double, double, double, double);
        double getPeso() const;
        double getAncho() const;
        double getLargo() const;
        double getProfundidad() const;
        void setPeso(double);
        void setAncho(double);
        void setLargo(double);
        void setProfundidad(double);
        double calculaCosto();
        void imprime();

    private:
        static const double costoPorKilo;
        double peso;
        double ancho;
        double largo;
        double profundidad;
};