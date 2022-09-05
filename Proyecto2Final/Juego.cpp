#include "Juego.h"
Juego::Juego(Observer* us1, Observer* us2) :J1(us1), J2(us2) {

}
Juego::~Juego() {
	delete J1;
	delete J2;

}