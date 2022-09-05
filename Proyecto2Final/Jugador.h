#pragma once
#pragma once
#include"Observer.h"
using namespace std;

class Jugador : public Observer { // Usuario = observer   //Jugador = observer espercifico...
private:
	string nombre;

	//extras
public:
	Jugador() {  nombre = ""; }
	Jugador(string nom) : Observer() {
	
		nombre = nom;
	}
	virtual ~Jugador() {}
	virtual void tipoUsuario();
	virtual void update(int,string);
	virtual string getNombre();
	virtual void setNombre(string);
	virtual string toString();

};
