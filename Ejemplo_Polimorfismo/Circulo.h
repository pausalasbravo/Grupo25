#pragma once
#include "Figura.h"
#define PI 3.14

class Circulo : public Figura {
    const float radio;
public:
    Circulo(float radio_);
    ~Circulo();
    float area();
    float perimetro();
    std::string to_string();
    void imprimir();
};