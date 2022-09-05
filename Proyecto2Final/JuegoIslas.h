#pragma once
#include <ctime>
#include <cstdlib>
#include"EstApertura.h"
//#include"Jugada.h"
//#include"Linea.h"
using namespace std;

class JuegoIslas : public EstApertura {
private:
	//Jugada * posiciones;
public:
	JuegoIslas();// Jugada*);
	virtual ~JuegoIslas();
	void tipoEstrategia();
	void estrategiaIslas();//recibe la matriz con la que se va a jugar
};
