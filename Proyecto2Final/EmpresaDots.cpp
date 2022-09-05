

#include "EmpresaDots.h"

EmpresaDots::EmpresaDots(int tamano) {
	srand((unsigned)time(NULL));
	claveUsu = 1 + rand() % (90001 + 1 - 1000);
	cout << "Creando un sujeto..." << endl;
	can = 0;
	tam = tamano;
	vec = new Observer * [tam];
	for (int i = 0; i < tam; i++)
		vec[i] = NULL;
}

EmpresaDots::~EmpresaDots() {
	cout << "Eliminando el sujeto" << endl;
	for (int i = 0; i < can; i++)
		delete vec[i];
	delete[] vec;
}

void EmpresaDots::attach(Observer* usu) {
	if (can < tam)
		vec[can++] = usu;
}

void EmpresaDots::setValores(int clav) {
	claveUsu = clav;
}

int EmpresaDots::getClave() {
	
	return claveUsu;
}

void EmpresaDots::setClave(int cla) {
	claveUsu = cla;
}

/*void EmpresaDots::creacionClave() {
	int password;

	srand((unsigned)time(NULL));
	password = 1 + rand() % (90001 + 1 - 1000);
	this->setClave(password);
}*/

void EmpresaDots::infoClave() {
	
}





int EmpresaDots::getpago() {
	for (int i = 0; i < can; i++) {
		vec[i]->getDinero() - 500;
			pago += 500;
		}
		return pago;
	
}
bool EmpresaDots::registrado(Observer* obs) {
	for (int i = 0; i < can; i++) {
		if (vec[i]->getcedula() == obs->getcedula()) {
			return true;
		}
	
	}
	return false;
}
/*bool EmpresaDots::comparaClave() {  //si clave es igual a clave puede jugar   //hacerlo boleano?!?!
	bool estado;
	int contrasena;
	cout << "Ingrese la clave del dia : ";
	cin >> contrasena;
	if (contrasena == claveUsu) {
		cout << "Clave aceptada" << endl;
		return estado = true;
	}
	else {
		cout << "Clave incorrecta" << endl;
		return estado = false;
	}
}
*/