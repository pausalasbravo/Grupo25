#include "Circulo.h"

Circulo::Circulo(float radio_) : Figura(1), radio(radio_) {
}

Circulo::~Circulo() {
}

float Circulo::area() {
    return (float)(floor(PI * pow(this->radio, 2) * 100.0) / 100.0);
}

float Circulo::perimetro() {
    return (float)(floor(2 * PI * this->radio * 100.0) / 100.0);
}

std::string Circulo::imprimir() {
    std::stringstream salida;
    salida << "Circulo de Radio: " << this->radio << std::endl << "Perimetro: " << this->perimetro() << std::endl << "Area: " << this->area() << std::endl;
    return salida.str();
}
