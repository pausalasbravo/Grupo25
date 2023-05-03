#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

// Inclusión de .h de Polimorfismo
#include "../Ejemplo_Polimorfismo/Circulo.h"
#include "../Ejemplo_Polimorfismo/Cuadrado.h"
#include "../Ejemplo_Polimorfismo/Triangulo.h"

// Inlude de .h de Static Ejemplo
#include "../Ejemplo_Static/Calculadora.h"

using namespace std;

int main() {
	stack<Figura*> misFiguras;

	misFiguras.push(new Cuadrado(4.56));
	misFiguras.push(new Circulo(8.08));
	misFiguras.push(new Cuadrado(3.22));

	// Ejemplo de Polimorfismo y dynamic_cast<>
	while (!(misFiguras.empty())) {
		Figura* aux = misFiguras.top();
		misFiguras.pop();

		if (dynamic_cast<Cuadrado*>(aux) != nullptr) {
			cout << dynamic_cast<Cuadrado*>(aux)->imprimir() << endl;
		} else if (dynamic_cast<Circulo*>(aux) != nullptr) {
			cout << dynamic_cast<Circulo*>(aux)->imprimir() << endl;
		} else if (dynamic_cast<Triangulo*>(aux) != nullptr) {
			cout << dynamic_cast<Triangulo*>(aux)->imprimir() << endl;
		}
	}

	// Ahora jugaremos con Static
	Calculadora miCalduladora("Casio", "MD5682");

	Cuadrado miCuadrado(4.56);
	Circulo miCirculo(8.08);

	stack<float> valoresAsumar;
	valoresAsumar.push(miCuadrado.area());
	valoresAsumar.push(miCirculo.area());

	cout << "Area de Cuadrado + Circulo = " << Calculadora::sumar(valoresAsumar) << endl;

	return 0;
}