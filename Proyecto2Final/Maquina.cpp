#include "Maquina.h"
Maquina::Maquina() {
}

Maquina::~Maquina()
{
	delete ptr;
}

void Maquina::setEstrategia(EstApertura* ptrA)
{
	this->ptr = ptrA;
}

void Maquina::ejecutarEstrategia() {
	cout << "La maquina va a desarrollar una estrategia de defensa." << endl;
	ptr->tipoEstrategia();
}