#include "foo.h"

foo::foo(std::string nombre_, std::string fecha_) {
	this->nombre.set(nombre_);
	this->fecha_nac.set(fecha_);
}

foo::~foo() {
}

std::string foo::to_string() {
	std::stringstream salida;
	salida << "Nombre : " << nombre.get().c_str() << std::endl
		   << "Fecha Nacimiento : " << this->fecha_nac.get() << std::endl;
	return salida.str();
}

void foo::imprimir() {
	std::cout << this->to_string() << std::endl;
}
