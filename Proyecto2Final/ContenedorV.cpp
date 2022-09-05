#include "ContenedorV.h"
ContenedorV::ContenedorV() {
	can = 0;
	tam = 6;
	vec = new  CampoAbstracto * [tam];
	for (int i = 0; i < tam; i++)
		vec[i] = NULL;

}
ContenedorV::~ContenedorV() {
	for (int i = 0; i < can; i++) {
		delete vec[i];
	}
	delete[]vec;
}
void ContenedorV::agregarCampo(CampoAbstracto* ca) {
	if (can < tam) {

		vec[can++] = ca;
	}
}
int ContenedorV::getTamano() {
	return tam;
}
int ContenedorV::getCantidad() {
	return can;
}
CampoAbstracto* ContenedorV::getCampo(int pos) {
	if (pos >= 0 && pos < tam) {
		for (int i = 0; i < can; i++) {
			if (i == pos)
				return vec[i];
		}
	}
	else
		return NULL;
}

