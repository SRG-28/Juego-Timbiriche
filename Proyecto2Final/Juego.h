#pragma once


#include"Jugada.h"

#include"EmpresaDots.h"
#include"EmpresaDots.h"
#include"JuegoCentral.h"
#include"JuegoAleatorio.h"
#include"JuegoCercano.h"
#include"JuegoIslas.h"
#include"JuegoPeriferico.h"
#include"Maquina.h"
#include"Observer.h"

class Juego
{
private:
	Observer* J1;
	Observer* J2;
public:
	Juego(Observer*, Observer*);
	~Juego();

};



