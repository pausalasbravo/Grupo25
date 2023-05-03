#pragma once
#include "Figura.h"

class Cuadrado : public Figura {

	float longLado;
public:
	Cuadrado(float longLado_);
	~Cuadrado();
	float area();
	float perimetro();
	std::string to_string();
	void imprimir();
};