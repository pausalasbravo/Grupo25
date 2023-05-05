#pragma once
template<typename P> class Calculo {
	P variable;
public:
	P perimetro();
	P area();
};

template<typename P>
inline P Propiedad<P>::get() {
	return this->variable;
}

template<typename T>
inline void Propiedad<T>::set(T valor) {
	this->variable = valor;
}

template<typename P>
inline P Perimetro<P>::perimetro()
{
	return P();
}
