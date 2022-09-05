#include "Jugador.h"

void Jugador::tipoUsuario() {
	cout << "Tipo de usuario: Jugador" << endl;
}
void Jugador::update(int din,string ced) {
	this->dinero = din;
	this->cedula = ced;
}



string Jugador::getNombre() {
	return nombre;
}


void Jugador::setNombre(string nom) {
	nombre = nom;
}
string Jugador::toString() {
	stringstream s;
	s << "-------------Datos del jugador--------------" << endl
		<< "Identificacion : " << cedula<< endl
		<< "Nombre : " << nombre << endl
		<< "Dinero : " << dinero << endl << endl;
	return s.str();
}


