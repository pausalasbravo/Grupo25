#include "Cuadrado.h"

Cuadrado::Cuadrado(float longLado_) : Figura(4) {
    this->longLado = longLado_;
}

Cuadrado::~Cuadrado() {
}

float Cuadrado::area() {
    return (float)(floor(pow(this->longLado, 2) * 100.0) / 100.0);
}

float Cuadrado::perimetro() {
    return (float)(floor(this->cantLados * this->longLado * 100.0) / 100.0);
}

std::string Cuadrado::imprimir() {
    std::stringstream salida;
    salida << "Cuadrado de lado con longitud: " << this->longLado << std::endl << "Perimetro: " << this->perimetro() << std::endl << "Area: " << this->area() << std::endl;
    return salida.str();
}