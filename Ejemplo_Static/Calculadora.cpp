#include "Calculadora.h"


Calculadora::Calculadora(std::string nombre_, std::string modelo_) : nombre(nombre_), modelo(modelo_) {
}

Calculadora::~Calculadora() {
}

float Calculadora::sumar(std::stack<float> valores) {
    float aux = 0;
    while (!(valores.empty())) {
        float valor = valores.top();
        valores.pop();
        aux += valor;
    }
    return aux;
}


float Calculadora::restar(float valor1, float valor2) {
    return ( valor1 - valor2 );
}


float Calculadora::multiplicar(float valor1, float valor2) {
    return ( valor1 * valor2 );
}


float Calculadora::dvidir(float valor1, float valor2) {
    return ( valor1 / valor2 );
}
