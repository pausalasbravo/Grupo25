#pragma once
#include <string>
#include <sstream>
#include <iostream>

#include "propiedad.h"

class foo {
	Propiedad<std::string> nombre, fecha_nac;
public:
	foo(std::string nombre_, std::string fecha_);
	~foo();
	std::string to_string();
	void imprimir();
};