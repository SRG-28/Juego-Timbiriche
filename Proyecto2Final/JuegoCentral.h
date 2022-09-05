#pragma once
#include <ctime>
#include <cstdlib>
#include<iostream>
#include<sstream>
#include<string>
#include"EstApertura.h"
//#include"Jugada.h"
//#include"Linea.h"
using namespace std;

class JuegoCentral : public EstApertura {
private:

	//Jugada* posiciones;
	string mat[5][70];
public:
	JuegoCentral(); //(Jugada*);
	virtual ~JuegoCentral();
	int cantiColumnas();//ContenedorM&);  //RECIBE SEPARADOR
	void tipoEstrategia();
	int filaAleatoria(); //recibe getFila...
	int colAleatoria();//recibe getColumna
	string matrizJuego();
	void turnoJugador();
	void estrategiaCentral();//recibe la matriz con la que se va a jugar


};