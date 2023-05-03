#pragma once
#define uint unsigned int

#include <cmath>
#include <string>
#include <sstream>

class Figura {
protected:
	const unsigned int cantLados;
public:
	Figura(uint cantLados_);
	~Figura();
	virtual float area() = 0;
	virtual float perimetro() = 0;
	virtual std::string imprimir() = 0;
};