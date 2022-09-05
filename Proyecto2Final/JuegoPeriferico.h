#pragma once
#include"EstApertura.h"
#include <ctime>
#include <cstdlib>
//#include"Jugada.h"
//#include"Linea.h"
using namespace std;

class JuegoPeriferico : public EstApertura {
private:
	string mat[5][70];
public:
	JuegoPeriferico();// Jugada*);
	virtual ~JuegoPeriferico();
	void tipoEstrategia();
	int filaAleatoria(); //recibe getFila...
	int colAleatoria();//recibe getColumna
	string matrizJuego();
	void turnoJugador();
	int cantiColumnas();
	void estrategiaPeriferico();//recibe la matriz con la que se va a jugar
};
