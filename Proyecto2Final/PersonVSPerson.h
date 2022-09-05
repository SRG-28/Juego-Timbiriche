#pragma once
#include <ctime>
#include <cstdlib>
#include<iostream>
#include<sstream>
#include<string>
using namespace std;

class PersonVSPerson {
private:
	string mat[5][70];
public:
	PersonVSPerson(); //(Jugada*);
	virtual ~PersonVSPerson();
	int cantiColumnas();//ContenedorM&);  //RECIBE SEPARADOR
	void tipoJuego();
	string matrizJuego();
	void turnoJugador();
	void Juego();//recibe la matriz con la que se va a jugar
};

