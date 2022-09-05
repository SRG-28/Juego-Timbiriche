#pragma once
#include"JuegoAleatorio.h"
/*#include"JuegoCercano.h"
#include"JuegoPeriferico.h"
#include"JuegoCentral.h"
#include"JuegoIslas.h" */
using namespace std;

class Maquina {
private:
	EstApertura* ptr;
public:
	Maquina();
	virtual ~Maquina();
	void setEstrategia(EstApertura* ptrA);
	void ejecutarEstrategia();
};


