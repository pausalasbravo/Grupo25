#include "Triangulo.h"

Triangulo::Triangulo(std::array<float, 3> angulos_, std::array<float, 3> longLados_) : Figura(3) {
    this->angulos = angulos_;
    this->longLados = longLados_;
}

Triangulo::~Triangulo() {
}

float Triangulo::area() {
	float base=0;
	float altura=0;
	float area=0;
	float aux = 0;
	int i;

	if (longLados[0] == longLados[1] && longLados[1] == longLados[2]) {
		base= longLados[0];
		altura = sqrt(pow(longLados[2], 2) - pow(longLados[0] / 2, 2));
		area = (base* altura)/2;
		return area;
	}
	if (longLados[0] == longLados[1] || longLados[1] == longLados[2] || longLados[0] == longLados[2]) {
		aux = (longLados[0] + longLados[1] + longLados[2]) / 2;
		altura = sqrt(aux*(aux-longLados[0])*(aux - longLados[1])*(aux - longLados[2])) / (0.5*longLados[0]);// Formula de Herón
		for (i = 0; i < 2; i++)
		{
			if (longLados[i] > base || longLados[0] == longLados[i])
				base=longLados[i];
		}
		area = (base*altura) / 2;
		return area;
	}
	if (longLados[0] != longLados[1] && longLados[1] != longLados[2] && longLados[0] != longLados[2]) {
		aux = (longLados[0] + longLados[1] + longLados[2]) / 2;
		altura = sqrt(aux*(aux - longLados[0])*(aux - longLados[1])*(aux - longLados[2])) / (0.5*longLados[0]);
		for (i = 0; i < 2; i++)
		{
			if (longLados[i] > base || longLados[0] == longLados[i])
				base = longLados[i];
		}
		area = (base*altura) / 2;
		return area;
	}
}


float Triangulo::perimetro() {
	float aux = 0;
	string tipo;
	string*ptr = &tipo;
	if (longLados[0] == longLados[1] && longLados[1] == longLados[2]) {
		aux = longLados[0] * 3;
		tipo = "Equilatero";
		return aux;
	}
	if (longLados[0] == longLados[1] || longLados[1] == longLados[2] || longLados[0] == longLados[2]) {
		aux = longLados[0] + longLados[1] + longLados[2];
		tipo = "Isosceles";
		return aux;
	}
	if (longLados[0] != longLados[1] && longLados[1] != longLados[2] && longLados[0] != longLados[2]) {
		aux = longLados[0] + longLados[1] + longLados[2];
		tipo = "Escaleno";
		return aux;
	}
    return (float)(0.0f);
}

std::string Triangulo::to_string() {
    std::stringstream salida;
    salida << "Triangulo de lado con longitud: " << this->longLados[0] << " - " << this->longLados[1] << " " << this->longLados[2]
           << std::endl << "Con angulos: " << this->angulos[0] << " - " << this->angulos[1] << " " << this->angulos[2]
           << std::endl << "Perimetro: " << this->perimetro() << std::endl << "Area: " << this->area() <<std::endl;
    return salida.str();
}

void Triangulo::imprimir() {
    std::cout << this->to_string() << std::endl;
}